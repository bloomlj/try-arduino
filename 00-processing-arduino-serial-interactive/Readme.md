需要设置processing程序里面使用的串口，
使用  printArray(Serial.list());可以在终端中看到串口对应的编号，把编号对应填入到 String portName = Serial.list()[2]; 这里就可以了。
