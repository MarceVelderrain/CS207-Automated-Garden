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
- A 9V-DC, 1 amp power transformer for the Arduino 
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
4. Conect a solenoid valve to a free tube and another tube(this tube should be long enough that the tip can be burried on the plant's soil) to the plant, repeat this for each plant. 
5. If the container you are using is closed from the upper end drill a hole so that air can get in as the water comes out of the reservoir. 

To create the ilumination: 
1. Use one of the breadboards to place the LEDS, on one side place all the green LEDs and on the other alternate between re and blue LEDs. 
2. Connect the positive pin of the LEDs to 5 volts and the negative pin to a 560 ohm resistor that connects to ground. 


## Usage 

## Team 
