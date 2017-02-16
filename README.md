# ESPBox

Firmware for ESP8266/ESP8285 used as SD card logger using [arduino core version](https://github.com/esp8266/Arduino)   
This firmware allows not only to have a cheap bridge between Wifi and serial, but also to have a web UI to configure wifi, to monitor 3D printer and even control it, and to make things easy,
UI is fully customizable without reflashing FW.

<u>Development version:</u>    
Arduino ide 1.8.0 with git from ESP8266 : [![Build Status](https://travis-ci.org/luc-github/ESP3D.svg?branch=master)](https://travis-ci.org/luc-github/ESP3D)    


Using [pluggin IDE](http://esp8266.github.io/Arduino/versions/2.1.0/doc/filesystem.html#uploading-files-to-file-system)    
Any files on SPIFFS can be called on web interface without having the path hard coded, this give more flexibility, favicon.ico is a good example of it.         
So UI is kind of separated from FW which allow easier modifications. For this a light file manager is available in extra settings page, it allows to upload/download/delete files. 
Because SPIFFS is flat filesystem, no directory management is necessary, so it is very simple.

##Web configuration      
*Wifi Mode : Access point / Client station  
*IP Generation: DHCP/Static IP      
*IP/MASK/GATEWAY for static data    
*Baud Rate for serial (supported : 9600, 19200, 38400, 57600, 115200, 230400, 250000)    
*web port and data port      

    
##Default Configuration      
Default Settings:    
AP:ESP8266    
PW:12345678   
Authentification: WPA     
Mode: g (n is not supported by AP, just by STA)    
channel: 11    
AP: visible    
Sleep Mode: Modem    
IP Mode: Static IP    
IP: 192.168.0.1   
Mask: 255.255.255.0   
GW:192.168.0.1    
Baud rate: 9600   
Web port:80   
Data port: 8888     
Web Page refresh: 3 secondes    
User: admin   
Password: admin   
User:user   
Password: user   