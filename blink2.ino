/* Blink2. El LED conectado al pin 13, 
parpadea con una frecuencia configurable del serial */

int led=13;       //Vble para salida de LED
int retardo=0;    //Vble valor de retardo, inicial LED on
char caracter;    //Vble para almacenar en caracter enviado para control

void setup() {
  // put your setup code here, to run once:

pinMode(led, OUTPUT); //indica que el pin 13 será la salida
Serial.begin(9600);    //Comm serie configurada a 9600 bit pro seg.

Serial.println("LED is On"); // mensaje inicial 
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0){
    caracter=Serial.read(); // Si hay un caracter en el buffer de entrada lo almacena
  }

  if(caracter=='r')  {
    retardo=500;               // fija el retardo en 0,5 seg. on/off
    Serial.println("Rápido...");
    Serial.println(retardo);  //envia el valor del retardo
  }
  
  if(caracter=='l')  {
    retardo=3500;               // fija el retardo en 3,5 seg. on/off
    Serial.println("Leeento...");
    Serial.println(retardo);  //envia el valor del retardo
  }
  
  if(caracter=='n')  {
    retardo=1500;               // fija el retardo en 1,5 seg. on/off
    Serial.println("normal!...");
    Serial.println(retardo);  //envia el valor del retardo
  }
    
  digitalWrite(led,HIGH);  //Activa salida 13  
  delay (retardo);           //retardo 
  digitalWrite(led,LOW);   // Desactiva salida 13
  delay (retardo);          //Retardo 

}
