/*
Read from and Write to a Spatial Edge Server

Copy the html page from the interface folder
to your  Spatial Edge Server Tool.

created 2015
by Valentin Heun
*/

#include <SpatialToolbox.h>
SpatialToolbox tool;

int counter =0;

void setup() {
tool.developer(); // allow developer tools
tool.add("yourObjectName", "led"); // add a new I/O Point to the Object
tool.add("yourObjectName", "generator");
}

void loop() {

  // Read from Object
  analogWrite(13, tool.read("yourObjectName", "led") * 255);
    counter+=30;
    if(counter>1023){
     counter = 0;
    }
       // Write to Object
       tool.write("yourObjectName", "generator",tool.map(counter, 0, 1023));

  delay(30);
}
