When I saw this [cheap Serial JPEG Camera](https://circuit.rocks/camera-jpg-serial-for-arduino) I got the idea to convert a Fake CCTV camera into a "real" CCTV. Well, not a fully functional CCTV, because the serial camera is too slow to be able to stream video (and so is the ESP8266). But at least to get pictures from it.    
The idea is to trigger the camera by motion detection, capture one image and store it in the internal memory. Then the image is transferred to a FTP server from where it can be accessed by a PC or Android phone or tablet.    
Read the full story on [ESP8266 - CCTV still camera](http://desire.giesecke.tk/index.php/2018/02/16/esp8266-cctv-still-camera/)
