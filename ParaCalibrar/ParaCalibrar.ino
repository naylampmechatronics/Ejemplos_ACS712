/****************************************************************************************
 Amperímetro AC

   Se obtienen mediciones de corriente AC usando un sensor ACS712
   Los cálculos se realizan en función de corriente pico(Ip) y no se hace una medición directa del IRMS, 
   por esta razón el resultado es correcto siempre que la corriente tenga forma sinusoidal completa
 
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

void setup() {
  
  Serial.begin(9600);
}

void loop() {
  
  float voltajeSensor =get_voltage(10000);//obtenemos voltaje del sensor(10000 muestras) 
  Serial.print("Voltaje del sensor: ");
  Serial.println(voltajeSensor ,3);     
}


float get_voltage(int n_muestras)
{
  float voltage=0;
  
  for(int i=0;i<n_muestras;i++)
  {
    voltage =voltage+analogRead(pin_ACS) * (5.0 / 1023.0);    
  }
  voltage=voltage/n_muestras;
  return(voltage);
}
