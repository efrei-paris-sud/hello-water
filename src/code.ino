#define SensorPin A0 
#include <Servo.h>
float sensorValue = 0; 
int pumpin=2;

void setup() { 
  Serial.begin(9600); 
  pinMode(2,OUTPUT);
} 

void loop() { 
 for (int i = 0; i <= 100; i++) 
 { 
   sensorValuem = sensorValuem + analogRead(SensorPin); 
   delay(1); 
 } 
  sensorValuem = sensorValuem/100.0;
   if(sensorValuem>650)
   {
    digitalWrite(pumpin,LOW);//打开水泵
    delay(3000);//浇水时间三秒
    digitalWrite(pumpin,HIGH);//关闭水泵
    }
   else
   {
    digitalWrite(pumpin,HIGH);
    }
 Serial.println(sensorValuem); 
 delay(6000); 
} 
  
int sensorPin = A0; // select the input pin for LDR

int sensorValue = 0; // variable to store the value coming from the sensor
void setup() {
Serial.begin(9600); //sets serial port for communication
}
void loop() {
sensorValue = analogRead(sensorPin); // read the value from the sensor
Serial.println(sensorValueL); //prints the values coming from the sensor on the screen
   if(sensorValueL>650)
   {
    digitalWrite(pumpin,LOW);//打开水泵
    delay(3000);//浇水时间三秒
    digitalWrite(pumpin,HIGH);//关闭水泵
    }
   else
   {
    digitalWrite(pumpin,HIGH);
    }
 Serial.println(sensorValueL); 
 delay(6000); 
} 
delay(100);

}
