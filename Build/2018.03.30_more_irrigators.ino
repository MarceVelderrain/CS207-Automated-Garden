/* Created on March 30th, 2018
 *  @uthor Marcela Velderrain Saenz 
 *  This is the sketch for two or more irrigators. 
 *  This works for two plants that are "equally thirsty",  
 *  meaning that they will receive the same amount of water when 
 *  irrigated. 
*/

// Analog pins receive data from the moisture sensors
int sensorPin[] = {A0, A1, A2, A3, A4, A5};
// Digital pins for valves  
int valvePin[] = {8,9,10,11,12,13};

// Set number of valves  
// This is the value to change depending on the number of 
// valves you have 

int a=2; 

const int dryThreshold = 900; // This is the threshold that indicates the solenoid
                              // valve to open. This threshold depends on the plant 
                              // to feed.
const long sampleInterval = 6000000000; // This value will be how much the sensor will wait 
                                 // until it senses again, since soil dries up 
                                 // slowly this value can be big.
const int irrigationTime = 5000; // This value will determine how long the valve is 
                                 // left open, you can also set a wetThreshold to 
                                 // control the amount of water that goes into the 
                                 // plant, but the sensor may take some time to 
                                 // respond. 
                                 
void setup() 
{
  Serial.begin(9600); // Begin serial communication protocol with computer.
  // Set moiusture sensors pins as inputs.
  for(int i=0; i<a; i++)
  {
    pinMode(sensorPin[i], INPUT);
  }
  // Set valves pins as outputs. 
  for(int i=0; i<a; i++)
  {
    pinMode(valvePin[i], OUTPUT);
  }
  // Initialize the program with the valves closed. 
  for(int i=0; i<a; i++)
  {
    digitalWrite(valvePin[i], LOW);
  }
  
}

void loop() 
{
  // Read the values being recived from the sensors.
  for(int i=0; i<a; i++)
  {
    int sensorValue[] = {analogRead(sensorPin[i])}; 
    Serial.print("Sensor value: ");
    Serial.println(sensorValue[i]); // Print sensor value in Serial Monitor
    if (sensorValue[i]>dryThreshold) // If moisture sensor gives a value bigger 
                                // than the selected Treshold
    {
      digitalWrite(valvePin[i], HIGH); // Open the water valve
      delay(irrigationTime); // Keep it open for the irrigation time
      digitalWrite(valvePin[i], LOW); // Close the valve
    }
  }
  delay(sampleInterval); // wait until the next time to take a reading
}
