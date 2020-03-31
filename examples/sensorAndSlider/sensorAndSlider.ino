/*
Read from and Write to a Spatial Toolbox

Copy the files from the interface folder
to your Spatial Toolbox.

created 2015
by Valentin Heun
*/

#include <SpatialToolbox.h>
SpatialToolbox tool;

int counter =0;

void setup() {
tool.developer(); // allow developer tools
tool.add("yourObjectName", "led"); // add a new I/O Point to the Object
tool.add("yourObjectName", "sensor");
}

void loop() {

  // Read from sensor
  float reading = tool.map(analogRead(A0), 0, 940);

  // Write to Object
  tool.write("yourObjectName", "sensor", reading);

  // Read from Object
  analogWrite(13, tool.read("yourObjectName", "led") * 255);

  delay(30);
}
