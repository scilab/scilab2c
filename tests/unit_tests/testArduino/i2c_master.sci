function i2c_master()

  dev1 = cmd_i2c_dev(1);
  cmd_i2c_write(dev1,10);
  sleep(1000);
  cmd_i2c_write(dev1,9);
  sleep(1000);

endfunction
