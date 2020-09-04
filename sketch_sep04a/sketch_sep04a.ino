//Link to Library: http://www.rinkydinkelectronics.com/library.php?id=73

//Include I2C Library
#include <Wire.h>
#include <DS3231.h>

int i = 0; //Set i to 0 to set date, time, or day or set i = 0 to print date time and day.
DS3231 rtc(SDA, SCL);

void setup() {
  Serial.begin(9600);
  rtc.begin(); //Init RTC
}

void loop()
{
  if (i == 1) {
    //rtc.setDOW(WEDNESDAY);     // Set Day-of-Week to SUNDAY
    //rtc.setTime(12, 0, 0);     // Set the time to 12:00:00 (24hr format)
    //rtc.setDate(9, 4, 2020);   // Set the date to January 1st, 2014
  } else {
    // Send Day-of-Week
    Serial.print(rtc.getDOWStr());
    Serial.print(" ");
  
    // Send date
    Serial.print(rtc.getDateStr());
    Serial.print(" -- ");
    // Send time
    Serial.println(rtc.getTimeStr());
  
    // Wait one second before repeating*/
    delay (1000);
  } 
}
