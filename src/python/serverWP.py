import wiringpi as wp
import socket
import subprocess as sp
import logging
import traceback
import sys
import RPi.GPIO as GPIO

logging.basicConfig(filename='log.txt',level=logging.DEBUG)
logger=logging.getLogger(__name__)
pinNum=0
#wp.wiringPiSetup()
GPIO.setmode(GPIO.BCM)

commands={
'cls':'s.close()\n\ta="Connection Closed"\n\tgo=0',
'i2c':'if sys.version_info<(3,0):\n\t\ta=sp.check_output(inputList[0].split())\n\telse:\n\t\ta=sp.run(inputList[0].split(),stdout=sp.PIPE).stdout.decode("utf-8")',
'anR':'a=wp.analogRead(int(inputList[0]))',
'anW':'a=wp.analogWrite(int(inputList[0]),int(inputList[1]))',
'bRv':'a=wp.piBoardRev()',
'BtR':'a=wp.digitalReadByte()',
'BtW':'a=wp.digitalWriteByte(int(inputList[0]))',
'CR1':'a=wp.wiringPiI2CRead(int(inputList[0]))',
'CR2':'a=wp.wiringPiI2CReadReg8(int(inputList[0]),int(inputList[1]))',
'CR3':'a=wp.wiringPiI2CReadReg16(int(inputList[0]),int(inputList[1]))',
'CSe':'a=wp.wiringPiI2CSetup(int(inputList[0]))',
'CSI':'a=wp.wiringPiI2CSetupInterface(inputList[0],int(inputList[1]))',
'CW1':'a=wp.wiringPiI2CWrite(int(inputList[0]),int(inputList[1]))',
'CW2':'a=wp.wiringPiI2CWriteReg8(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'CW3':'a=wp.wiringPiI2CWriteReg16(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'deS':'a=wp.delay(int(inputList[0]))',
'deU':'a=wp.delayMicroseconds(int(inputList[0]))',
'diR':'a=wp.digitalRead(int(inputList[0]))',
'diW':'a=wp.digitalWrite(int(inputList[0]),int(inputList[1]))',
'dsS':'a=wp.ds1302Setup(int(inputList[0]),int(inputList[1]),int(inputList[2]),)',
'dsR':'a=wp.ds1302rtcRead(int(inputList[0]))',
'dsW':'a=wp.ds1302rtcWrite(int(inputList[0]),int(inputList[1]))',
'dsr':'a=wp.ds1302ramRead(int(inputList[0]))',
'dsw':'a=wp.ds1302ramWrite(int(inputList[0]),int(inputList[1]))',
'dsc':'a=wp.ds1302clockRead(int(inputList[0]))',
'dsC':'a=wp.ds1302clockWrite(int(inputList[0]))',
'dst':'a=wp.ds1302trickleCharge(int(inputList[0]),int(inputList[1]))',
'gAS':'a=wp.gertboardAnalogSetup(int(inputList[0]))',
'gAR':'a=wp.gertboardAnalogRead(int(inputList[0]))',
'gAt':'a=wp.getAlt(int(inputList[0]))',
'gAW':'a=wp.gertboardAnalogWrite(int(inputList[0]),int(inputList[1]))',
'gSS':'a=wp.gertboardSPISetup()',
'Int':'if pinNum==1:\n\t\tpin=wp.wpiPinToGpio(int(inputList[0]))\n\telif pinNum==2:\n\t\tpin=int(inputList[0])\n\telif pinNum==3:\n\t\tpin=wp.physPinToGpio(int(inputList[0]))\n\tGPIO.setup(pin,GPIO.IN,pull_up_down=GPIO.PUD_DOWN)\n\tif int(inputList[1])==-1:\n\t\ta=GPIO.wait_for_edge(pin,GPIO.RISING)\n\telse:\n\t\ta=GPIO.wait_for_edge(pin,GPIO.RISING,timeout=int(inputList[1]))\n\tif type(a)==int:\n\t\ta=1\n\telse:\n\t\ta=0',
#'a=wp.waitForInterrupt(int(inputList[0]),int(inputList[1]))',
#'ISR':'a=wp.wiringPiISR(int(inputList[0]),int(inputList[1]),inputList[2])',
'lCB':'a=wp.lcdCursorBlink(int(inputList[0]),int(inputList[1]))',
'lCD':'a=wp.lcdCharDef(int(inputList[0]),int(inputList[1]),[int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]),int(inputList[6]),int(inputList[7]),int(inputList[8]),int(inputList[9])])',
'lCl':'a=wp.lcdClear(int(inputList[0]))',
'lCu':'a=wp.lcdCursor(int(inputList[0]),int(inputList[1]))',
'lDs':'a=wp.lcdDisplay(int(inputList[0]),int(inputList[1]))',
'lHo':'a=wp.lcdHome(int(inputList[0]))',
'lIn':'a=wp.lcdInit(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]),int(inputList[6]),int(inputList[7]),int(inputList[8]),int(inputList[9]),int(inputList[10]),int(inputList[11]),int(inputList[12]))',
'lok':'a=wp.piLock(int(inputList[0]))',
'lPc':'a=wp.lcdPutchar(int(inputList[0]),int(inputList[1]))',
'lPo':'a=wp.lcdPosition(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'lPf':'a=wp.lcdPrintf(int(inputList[0]),inputList[1])',
'lPu':'a=wp.lcdPuts(int(inputList[0]),inputList[1])',
'lSC':'a=wp.lcdSendCommand(int(inputList[0]),inputList[1])',
'Lse':'a=wp.lcd128x64setup()',
'Lup':'a=wp.lcd128x64update()',
'LOr':'a=wp.lcd128x64setOrigin(int(inputList[0]),int(inputList[1]))',
'LOn':'a=wp.lcd128x64setOrientation(int(inputList[0]))',
#'LCo':'a=wp.lcd128x64orientCoord(int(inputList[0]),int(inputList[1]))',
#'LSS':'a=wp.lcd128x64ScreenSize(int(inputList[0]),int(inputList[1]))',
'Lpo':'a=wp.lcd128x64point(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'Lli':'a=wp.lcd128x64line(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]))',
'LlT':'a=wp.lcd128x64lineTo(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'Lre':'a=wp.lcd128x64rectangle(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]))',
'Lci':'a=wp.lcd128x64circle(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[0]),int(inputList[3]),int(inputList[4]))',
'Lel':'a=wp.lcd128x64ellipse(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]))',
'Lpc':'a=wp.lcd128x64putchar(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]))',
'LPu':'a=wp.lcd128x64puts(int(inputList[0]),int(inputList[1]),inputList[2],int(inputList[3]),int(inputList[4]))',
'LCl':'a=wp.lcd128x64clear(int(inputList[0]))',
'mic':'a=wp.micros()',
'mil':'a=wp.millis()',
'mp6':'a=wp.mcp23016Setup(int(inputList[0]),int(inputList[1]))',
'mp7':'a=wp.mcp23017Setup(int(inputList[0]),int(inputList[1]))',
'mp8':'a=wp.mcp23008Setup(int(inputList[0]),int(inputList[1]))',
#'mp2':'a=wp.mcp3002Setup(int(inputList[0]),int(inputList[1]))',
#'mp4':'a=wp.mcp3004Setup(int(inputList[0]),int(inputList[1]))',
#'mp3':'a=wp.mcp3422Setup(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]))',
#'mp0':'a=wp.mcp4802Setup(int(inputList[0]),int(inputList[1]))',
'ms7':'a=wp.mcp23s17Setup(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'ms8':'a=wp.mcp23s08Setup(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'mxR':'a=wp.maxDetectRead(int(inputList[0]),inputList[1])',
'mx3':'a=wp.max31855Setup(int(inputList[0]),int(inputList[1]))',
'mx5':'a=wp.max5322Setup(int(inputList[0]),int(inputList[1]))',
'NES':'a=wp.setupNesJoystick(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'NER':'a=wp.readNesJoystick(int(inputList[0]))',
'pDr':'a=wp.setPadDrive(int(inputList[0]),int(inputList[1]))',
'pf7':'a=wp.pcf8574Setup(int(inputList[0]),int(inputList[1]))',
'pf9':'a=wp.pcf8591Setup(int(inputList[0]),int(inputList[1]))',
'pG1':'a=wp.piGlow1(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'pGL':'a=wp.piGlowLeg(int(inputList[0]),int(inputList[1]))',
'pGR':'a=wp.piGlowRing(int(inputList[0]),int(inputList[1]))',
'pGS':'a=wp.piGlowSetup(int(inputList[0]))',
'PhS':'a=wp.scrollPhatSetup()',
'PhU':'a=wp.scrollPhatUpdate()',
'PhC':'a=wp.scrollPhatClear()',
'Php':'a=wp.scrollPhatPoint(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'PhL':'a=wp.scrollPhatLine(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]))',
'PhT':'a=wp.scrollPhatLineTo(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'PhR':'a=wp.scrollPhatRectangle(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]),)',
'Phc':'a=wp.scrollPhatPutchar(int(inputList[0]))',
'PhP':'a=wp.scrollPhatPuts(inputList[0])',
'Phf':'a=wp.scrollPhatPrintf(inputList[0])',
'Phs':'a=wp.scrollPhatPrintSpeed(int(inputList[0]))',
'PhI':'a=wp.scrollPhatIntensity(int(inputList[0]),)',
'plC':'a=wp.pullUpDnControl(int(inputList[0]),int(inputList[1]))',
'pMA':'a=wp.pinModeAlt(int(inputList[0]),int(inputList[1]))',
'pN0':'if pinNum==0:\n\t\ta=wp.wiringPiSetup()\n\t\tpinNum=1\n\telse:\n\t\ta="RPI_pinNumbering has already been called once. Close and restart the connection to change the numbering sequence."',
'pN1':'if pinNum==0:\n\t\ta=wp.wiringPiSetupGpio()\n\t\tpinNum=2\n\telse:\n\t\ta="RPI_pinNumbering has already been called once. Close and restart the connection to change the numbering sequence."',
'pN2':'if pinNum==0:\n\t\ta=wp.wiringPiSetupPhys()\n\t\tpinNum=3\n\telse:\n\t\ta="RPI_pinNumbering has already been called once. Close and restart the connection to change the numbering sequence."',
'pN3':'if pinNum==0:\n\t\ta=wp.wiringPiSetupSys()\n\t\tpinNum=4\n\telse:\n\t\ta="RPI_pinNumbering has already been called once. Close and restart the connection to change the numbering sequence."()',
'pnM':'a=wp.pinMode(int(inputList[0]),int(inputList[1]))',
'pri':'a=wp.PiHiPri(int(inputList[0]))',
'ptG':'a=wp.physPinToGpio(int(inputList[0]))',
'pwC':'a=wp.pwmSetClock(int(inputList[0]))',
'pwG':'a=wp.wpiPinToGpio(int(inputList[0]))',
'pwM':'a=wp.pwmSetMode(int(inputList[0]))',
'pwR':'a=wp.pwmSetRange(int(inputList[0]))',
'pwT':'a=wp.pwmToneWrite(int(inputList[0]),int(inputList[1]))',
'pwW':'a=wp.pwmWrite(int(inputList[0]),int(inputList[1]))',
'sCl':'a=wp.serialClose(int(inputList[0]))',
'sDA':'a=wp.serialDataAvail(int(inputList[0]))',
'sFl':'a=wp.serialFlush(int(inputList[0]))',
'sGc':'a=wp.serialGetchar(int(inputList[0]))',
'shI':'a=wp.shiftIn(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'shO':'a=wp.shiftOut(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]))',
'sn3':'a=wp.sn3218Setup(int(inputList[0]))',
'sOp':'a=wp.serialOpen(inputList[0],int(inputList[1]))',
'sPc':'a=wp.serialPutchar(int(inputList[0]),inputList[1])',
'sPC':'a=wp.softPwmCreate(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'SPD':'a=wp.wiringPiSPIDataRW(int(inputList[0]),inputList[1])',
'sPf':'a=wp.serialPrintf(int(inputList[0]),inputList[1])',
'SPF':'a=wp.wiringPiSPIGetFd(int(inputList[0]))',
'SPM':'a=wp.wiringPiSPISetupMode(int(inputList[0]),int(inputList[1]),int(inputList[2]))',
'SPS':'a=wp.wiringPiSPISetup(int(inputList[0]),int(inputList[1]))',
'sPs':'a=wp.serialPuts(int(inputList[0]),inputList[1])',
'sPS':'a=wp.softPwmStop(int(inputList[0]))',
'sPW':'a=wp.softPwmWrite(int(inputList[0]),int(inputList[1]))',
'sSS':'a=wp.softServoSetup(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]),int(inputList[5]),int(inputList[6]),int(inputList[7]))',
'sSW':'a=wp.softServoWrite(int(inputList[0]),int(inputList[1]))',
'sr5':'a=wp.sr595Setup(int(inputList[0]),int(inputList[1]),int(inputList[2]),int(inputList[3]),int(inputList[4]))',
'sTC':'a=wp.softToneCreate(int(inputList[0]))',
'sTS':'a=wp.softToneStop(int(inputList[0]))',
'sTW':'a=wp.softToneWrite(int(inputList[0]),int(inputList[1]))',
'thC':'a=wp.piThreadCreate(inputList[0])',
'unl':'a=wp.piUnlock(int(inputList[0]))',
'wtG':'a=wp.wpiPinToGpio(int(inputList[0]))',
#'rRT':'a=wp.readRHT03(int(inputList[0]),int(inputList[1]),inputList[2])',
'drc':'a=wp.drcSetupSerial(int(inputList[0]),int(inputList[1]),inputList[2],inputList[3])',
'ads':'a=wp.ads1115Setup(int(inputList[0]),int(inputList[1]))',
'wpF':'a=wp.wiringPiFailure(int(inputList[0]),inputList[1])',
'wpN':'a=wp.wiringPiFindNode(int(inputList[0]))',
'wpn':'a=wp.wiringPiNewNode(int(inputList[0]),int(inputList[1]))',
#'pBI':'a=wp.piBoardId()',
'gCS':'a=wp.gpioClockSet(int(inputList[0]),int(inputList[1]))',
#'':'a=wp.',
#'ISR':'if pinNum==1:\n\t\tpin=wp.wpiPinToGpio(29)\n\telif pinNum==2:\n\t\tpin=int(inputList[0])\n\telif pinNum==3:\n\t\t	pin=wp.physPinToGpio(int(inputList[0]))\n\tGPIO.setup(pin,GPIO.IN,pull_up_down=inputList[2])\n\tGPIO.add_event_detect(pin,exec(inputList[1]),send2Client)',
}

s=socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.setsockopt(socket.SOL_SOCKET, socket.SO_REUSEADDR, 1)
s.bind(("0.0.0.0",9077))
"""
s2=socket.socket()
s2.connect((addr[0],9078))

def send2Client(pin):
	s2.send(pin)
"""
s.listen(5)
go=1
while go==1:
	c, addr=s.accept()
	theInput=c.recv(1024)
	cmd=theInput[:3]
	hash1=3
	Len=len(theInput)
	for j in range(hash1+1,Len):
		if theInput[j]=='#':
			hash2=j
			break
	numInputs=int(theInput[hash1+1:hash2])
	hash1=hash2
	inputList=[]
	for i in range(0,numInputs):
		for j in range(hash1+1,Len):
			if theInput[j]=='#':
				hash2=j
				break
		inputList.append(theInput[hash1+1:hash2])
		hash1=hash2
	print ('try:\n\t'+commands[cmd]+'\nexcept Exception as err:\n\ta=traceback.format_exc()')
	exec('try:\n\t'+commands[cmd]+'\nexcept Exception as err:\n\ta=traceback.format_exc()')
	c.send(str(a))
	c.close()
