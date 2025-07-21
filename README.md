# AutomaticWatering
My automatic watering system for any type of flower pot using:  
- 3D printed box for cables and 3D printed box for Arduino Uno  
- Arduino Uno
- A few, small (8mm) tubes
- one L239D
- a few small water pumps (in this case I used 4, because I only had one L239D, if you have more, get more pumps - one L293D works for one pump)  

How I plugged everything:  
Arduino Uno 13,12,11,10 pins ---> L293D 2,7,10,15 pins  
Arduino Uno 5V pin           ---> L293D 1,8,16,9 pins  
Arduino Uno GND pin          ---> L293D 4,5,12,13 pins  
Arduino Uno USB port         ---> Power socket  
L293D 3,6,11,14 pins         ---> Water pumps (each pin for each pump)  
Water pumps have tubes connected to them and at the end of those tubes are pots (like on pictures in pictures folder) (not yet implemented)  
