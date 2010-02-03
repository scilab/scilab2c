// Return RC high-pass filter output_signal samples, 
// given input_signal samples,
// time interval dt,
// R and C
//SCI2C: NIN= 4
//SCI2C: NOUT= 1
//SCI2C: OUT(1).TP= IN(1).TP
//SCI2C: OUT(1).SZ(1)= IN(1).SZ(1)
//SCI2C: OUT(1).SZ(2)= IN(1).SZ(2)
function output_signal = high_pass(input_signal, dt, R, C)
  alpha = R * C / (R * C + dt)
  output_signal(1) = input_signal(1)
  for i = 2 : size(input_signal, 2)
    output_signal(i) = alpha * output_signal(i-1) + alpha * (input_signal(i) - input_signal(i-1))
  end
endfunction