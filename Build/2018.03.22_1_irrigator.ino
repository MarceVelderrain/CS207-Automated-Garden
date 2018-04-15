/* Created on March 22nd, 2018
 *  @uthor Marcela Velderrain Saenz 
 * This is the sketch for 1 irrigator, this is also a useful way to 
 * test that your solenoid valves and moisture sensors are working.
*/

int sensorPin = A0; // Analog pin receives data from moisture sensor
int valvePin = 9; // Digital pin for valve

const int dryThreshold = 900; // This is the threshold that indicates the solenoid
                              // valve to open. This threshold depends on the plant 
                              // that it feeds.
const long sampleInterval = 6000000000; // This value will be how much the sensor will wait 
                                 // until it senses again, since soil dries up 
                                 // slowly this value can be big.
const int irrigationTime = 5000; // This value will determine how long the valve is 
                                 // left open, you can also set a wetThreshold to 
                                 // control the amount of water that goes into the 
                                 // plant, but the sensor may take some time to 
                                 // respond. 

boolean DEBUG=true;

void setup() 
{
  if(DEBUG)
  {
    Serial.begin(9600); // Begin serial communication protocol with computer
  }
  pinMode(sensorPin, INPUT); // Set moiusture sensor pin as an input. 
  pinMode(valvePin, OUTPUT); // Set valve pin as an output. 
  digitalWrite(valvePin, LOW); // Initialize the program with the valve closed.
}

void loop() 
{
  int sensorValue = analogRead(sensorPin); // Read the value being received from the sensor.
  if(DEBUG)
  {
    Serial.print("Sensor value: ");
    Serial.println(sensorValue); // Print sensor value in Serial Monitor
  }
  
  if (sensorValue>dryThreshold) // If moisture sensor gives a value bigger 
                                // than the selected Treshold
  {
    digitalWrite(valvePin, HIGH); // Open the water valve
    delay(irrigationTime); // Keep it open for the irrigation time
    digitalWrite(valvePin, LOW); // Close the valve
  }
  delay(sampleInterval); // wait until the next time to take a reading
}
