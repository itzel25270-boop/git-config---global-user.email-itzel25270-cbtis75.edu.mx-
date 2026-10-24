/*
Nombre del equipo: Eco Garbage
Proyecto: Sensor de humedad
*/

const int sensorPin = A0; // Pin analógico conectado al sensor

void setup() {
  Serial.begin(9600); // Inicializa la comunicación serial
}

void loop() {
  int valorHumedad = analogRead(sensorPin); // Lee el valor del sensor

  Serial.print("Lectura de humedad: ");
  Serial.println(valorHumedad); // Muestra el valor en el monitor serial

  delay(1000); // Espera 1 segundo entre cada lectura
}
