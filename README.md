# CS207-Automated-Garden
## Repository Contents 
- /src - To be able to run one must have the Arduino IDE.
- /hardware 
- /build - Here are the different code versions for the project, they are ordered by creation date as YYYY/MM/DD. 
- /images - This is where the image files for this readme are!
- /LICENSE - The license file.
- /README.md  

## Requirements and materials
Dependencies:<br />
To run this project you'll need to have the Arduino IDE installed on your computer https://www.arduino.cc/en/Main/Software <br />
<br />
Bill of materials: 
- An Arduino (this project uses Arduino Uno which means it can control up to 6 irrigators, to control more an Arduino Mega can be used)
- Between 1 and 6 plants 
- A 9V-DC, 1 amp power transformer for the Arduino (optional).  
- 2-conductor, low voltage wire (22–24 AWG)
- A small enclosure for the Arduino 
- 8 red LEDs 
- 8 blue LEDs 
- 9 green LEDs 
- 15 560 ohm resistors
- Between 1 and 6 moisture sensor (if you're using moisture pre-built moisture sensors)
- Hot glue gun 
- 2 breadboards
- To build your own moisture sensors you'll need the following material for each sensor: 
  - A 10 kohm resistor 
  - 2-conductor, low voltage wire (22–24 AWG)
  - A very short length of 15mm outside diameter clear vinyl tube
  - Two 50mm (2") galvanized finishing nails
  - About 50g of plaster of Paris (calcium sulfate hemihydrate) 
  - Adhesive tape
  - Soldering iron and soldering wire
  - A small container filled with rice
- For each irrigator: 
  - A TIP120 power transistor
  - A 1N4007 or similar diode
  - A 12V DC 2-port water/air solenoid valve
  - About a meter of 6mm outside diameter flexible nylon tube 
  - A 2-liter beverage bottle 
  
## Build instructions 
To create your own moisture sensor you should follow this steps: 
1. Take the two galvanized nails place them parallel to each other, use the hot glue gun to ensure that the nails don´t touch each other. 
2. Cut about 57mm (2.25") of the 15mm outside diameter clear vinyl tube this will be used as a mold for the sensor, also cut along the tube (this is so the sensor is easier to unmold in step ). 
3. Use the adhesive tape to unite the paralel cut you just made from the outside and to seal one of the ends of the tube. 
4. Make a mixture of 2 parts of plaster of Paris and 1 part of water. 
5. Place the vinyl tube in the container filled with rice in a way that open side of the tube is facing up and isn't sumerged by the rice, this will hold the mold upright while the plaster sets.  
6. Fill the tube with the plaster, try to fill it so that there aren't any air bubbles inside the tube. 
7. Carefully push the two galvanized nails into the plaster leave the top of the nails uncovered, make sure that the nails aren't touching the walls of the mold. 
8. Let it set for an hour and check if it still wet, if its still wet enough that you can deform it from the top let it set for another hour. 
9. Tke the moisture sensor out of the mold and let it dry until it is completly dry. 
10. Take a piece of the 2 conductor wire, make it long enough so that it'll reach your the breadboard from the plant or plants. 
11. Trim the wires, solder them to the top of the nails and let it dry. 

To create the water reservoir follow this steps: 
1. Drill a hole of 6mm at the bottom of the container you'll use as the reservoir. 
2. Pass the 6mm nylon tube through the hole and seal it with hot glue, if possible from both sides. 
3. If you are feeding more than 1 plant from that reservoir cut the tube at around 10 cm and use as many Ts as necessary so that there are as many free tubes as there are plants. 
4. Connect a solenoid valve to a free tube and another tube(this tube should be long enough that the tip can be burried on the plant's soil) to the plant, repeat this for each plant. 
5. If the container you are using is closed from the upper end drill a hole so that air can get in as the water comes out of the reservoir. 

To create the ilumination: 
1. Use one of the breadboards to place the LEDS, on one side place all the green LEDs and on the other alternate between re and blue LEDs. 
2. Connect the positive pin of the LEDs to 5 volts and the negative pin to a 560 ohm resistor that connects to ground. <br /> 
Here's a picture of what it should look like, 
[[https://github.com/MarceVelderrain/CS207-Automated-Garden/blob/master/images/Projectpic12.png ]] <br />

To create the circuit that controls the valve: 
1. Connect the +12V source to one side of the second breadboard, and connect the +5V Arduino to the other side of this breadboard. 
2. Bridge the grounds of the +12V and the +5V lines so they have the same reference. DO NOT BRIDGE THE POSITIVE SIDES.
3. If you are using an external power source between 9V and 12V it is technically possible to power your Arduino with it via Vin, but I don't recomend it. 
4. Connect the base to Pin 9, if you are using more than 1 irrigator connect the first transistor to Pin 8 and increase until Pin 13. 
5. Connect the collector to the diode's anode, and the emitter to the common ground.  
6. Connect the diode's cathode to the +12V line. 
7. Connect the solenoid's valve, 1 line should be connected to diode's anode and the other line should be connected to its cathode. <br />
Here's a picture of what it should look like (it includes the wiring to a pre-made moisture sensor), 
[[https://github.com/MarceVelderrain/CS207-Automated-Garden/blob/master/images/Projectpic13.png ]] <br />
8. Repeat steps 4 to 7 for every irrigator you are using. 

To connect the moisture sensor (made): 
1. Connect the 10 kohm resistance to the +5V line of the second breadboard. 
2. Connect to the other end of the resistor one of the wires to the moisture sensor and a wire to Pin A0, if you are using more than one irrigator keep increasing the Pin number until Pin A5. 
3. Connect the other wire of the moisture sensor to the common ground.
4. Repeat all the steps for each moisture sensor.

To connect the moisture sensor (bought): 
1. Connect the Vcc Pin of the sensor to the +5V line of the second breadboard. 
2. Connect the analog output to Pin A0, if you are using more than one irrigator keep increasing the Pin number until Pin A5. 
3. Connect the GND Pin  of the sensor to the common ground.
4. Repeat all the steps for each moisture sensor. 

The structure: 
1. Find a structure to put the plants in, it can be as simple as a cardboard box or a crate. 
2. Place the plants inside the box or box-like estrucure.
3. Drill a hole at the top of the structure, this hole should be big enough that the nylon tube should pass through it comfortably. 
4. Place the breadboard with the LEDs on the inside top part of the box or box-like structure. 
5.Place the reservoir on top of the box or box-like structure. 

## Usage 
This is a very simple project to run. Just follow this steps: 
- If you only have one irrigator: 
  - Upload the 2018.03.22_1_irrigator.ino in the Build folder to your Arduino. [[https://github.com/MarceVelderrain/CS207-Automated-Garden/blob/master/Build/2018.03.22_1_irrigator.ino ]]
  - If you have a transformer connect it after disconnecting the Arduino of the computer. 
  - Sit back and relax knowing your plants are being watered. 
- If you only have more than one irrigator:
  - Open the 2018.03.30_more_irrigators.ino . [[https://github.com/MarceVelderrain/CS207-Automated-Garden/blob/master/Build/2018.03.30_more_irrigators.ino ]]
  - On the code search where the integral a is defined and change its number to the number of irrigators you are using. 
  - Upload the code to your Arduino. 
  - If you have a transformer connect it after disconnecting the Arduino of the computer. 
  - Sit back and relax knowing your plants are being watered. 

## Team 
Marcela Velderrain Saenz

## Credits
- Book Craft's "Arduino projects for dummies" - This book provided the base idea for this project
- Alex Clarke - Consultation  

