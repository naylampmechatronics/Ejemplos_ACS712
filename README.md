# Ejemplos_ACS712
Códigos de ejemplo para sensores de corriente ACS712-05A, ACS712-20A o ACS712-30A

![Sensor de Corriente ACS712T](https://naylampmechatronics.com/687-large_default/sensor-de-corriente-acs712t-20a.jpg)

Información detallada de los ejemplos en: [Tutorial sensor de corriente ACS712](https://naylampmechatronics.com/blog/48_tutorial-sensor-de-corriente-acs712.html)

## Contenido
* **SimpleLectura:**  Se obtienen mediciones de intensidad usando un sensor ACS712
* **LecturaMedia:** Se obtiene como resultado para la intensidad un promedio de n lecturas del sensor
* **ParaCalibrar:** Programa de apoyo para recalcular la constante de sensibilidad del sensor 
* **ParaCalibrar:** Se obtienen mediciones de corriente AC usando un sensor ACS712

## Requerimientos
 **Software**
  * IDE Arduino
  
 **Hardware**
  * [Arduino Uno](https://naylampmechatronics.com/arduino-tarjetas/8-arduino-uno-r3.html) (o cualquier modelo)
  * Sensor de corriente ([ACS712T-5A](https://naylampmechatronics.com/sensores-corriente-voltaje/229-sensor-de-corriente-acs712t-5a-.html), [ACS712T-20A](https://naylampmechatronics.com/sensores-corriente-voltaje/65-sensor-de-corriente-acs712t-20a.html) o ACS712T-30A)
  
## Conexiones
  
  ACS712 | Arduino
  -------|----------    
  VCC    | 5V  
  OUT    | A0
  GND    | GND    

  Puede cambiar la conexión a otro pin analógico del arduino modificando la variable que define el pin

## Licencia
Los ejemplos son Open Source, desarrollados por el equipo de Naylamp Mechatronics bajo [licencia MIT](LICENSE)
 
## Links 
 * [Tutorial sensor de corriente ACS712](https://naylampmechatronics.com/blog/48_tutorial-sensor-de-corriente-acs712.html)
 * [Sensor de Corriente ACS712T](https://naylampmechatronics.com/sensores-corriente-voltaje/65-sensor-de-corriente-acs712t-20a.html) 
