/****************************************************************************************
 Simple Lectura

  Se obtienen mediciones de intensidad usando un sensor ACS712-05A, ACS712-20A o ACS712-30A
 
 Conexiones:
  -----------------
  ACS712 -> Arduino
  -----------------    
  VCC    -> 5V  
  OUT    -> A0
  GND    -> GND    
  -----------------
  *Puede cambiar la conexión a otro pin analógico del arduino modificando la variable que define el pin

 Ejemplo desarrollado por Naylamp Mechatronics bajo licencia MIT (puede copiar, modificar, integrar o redistribuir)
 
 Última modificación el 04/09/2020
 
 Más información en:
   -https://naylampmechatronics.com/blog/48_tutorial-sensor-de-corriente-acs712.html
   -https://github.com/naylampmechatronics/Ejemplos_ACS712
   
**************************************************************************************************/

int pin_ACS = A0; //definición del pin del sensor

float Sensibilidad=0.185; //sensibilidad en Voltios/Amperio para sensor de 5A

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  float voltajeSensor= analogRead(pin_ACS)*(5.0 / 1023.0); //lectura del sensor   
  float I=(voltajeSensor-2.5)/Sensibilidad; //Ecuación  para obtener la corriente
  Serial.print("Corriente: ");
  Serial.println(I,3); 
  delay(200);     
}
