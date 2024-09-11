# Controlling-Leds-By-Fingers-Count
This project integrates computer vision using hand detection to count fingers, and based on the detection, sends commands to an Arduino to control LEDs. The workflow involves using OpenCV and MediaPipe to detect hand landmarks and count extended fingers. The finger count is then communicated to the Arduino via serial communication, where the Arduino controls the LEDs accordingly. Each number of extended fingers triggers a specific LED pattern or behavior on the Arduino.
## Getting Started

### Prerequisites 
To use this project, you will need the following:


  - An Arduino board (such as the Uno or Nano)
  - Jumper Wires
  - Resistors
  - Leds
  - Bread board 
  - Arduino IDE 
  - IDE for python code
### Installing

1. Connect the Leds , Resistors  and Wires  to the Arduino board. Refer to the   "Stunning Vihelmo.png" file for the pinout.

2. Open the "pyth2.ino" file in the Arduino IDE.

3. Upload the code to the Arduino board.

4. Open The "ard2.py" in The  IDE that is for pyhton and Don't Forget To Install pakages like pyserial,Time,OpenCV and MediaPipe.

5. Then Run The Python Code.

### Note
Don't Forget To Adjust The  Serial Comincaton to 115200 and Return Carriage 



## License

This project is licensed under the MIT License - see the LICENSE.md file for details.

## Acknowledgments
- Thanks to the Arduino,OpenCv,Google,Python communities for their support and contributions.
