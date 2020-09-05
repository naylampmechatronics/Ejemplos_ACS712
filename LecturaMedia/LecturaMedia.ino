/****************************************************************************************
 Simple Lectura

  Se obtiene como resultado para la intencidad un promedio de n lecturas del sensor 
 
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
  
  float I=get_corriente(200);//obtenemos la corriente promedio de 200 muestras 
  Serial.print("Corriente: ");
  Serial.println(I,3); 
  delay(100);     
}

float get_corriente(int n_muestras)
{
  float voltajeSensor;
  float corriente=0;
  for(int i=0;i<n_muestras;i++)
  {
    voltajeSensor = analogRead(pin_ACS) * (5.0 / 1023.0);////lectura del sensor
    corriente=corriente+(voltajeSensor-2.5)/Sensibilidad; //Ecuación  para obtener la corriente
  }
  corriente=corriente/n_muestras;
  return(corriente);
}
