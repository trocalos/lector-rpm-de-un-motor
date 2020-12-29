/*Parte del proyecto que se desea realizar para contabilizar 
 * el número de rpm de un motor
 * JL García y los estudiantes de 1º de Bachillerato del INS Emperador Carles
 * 2020
 * 
 */


unsigned long tiempo1 = 0;
unsigned long tiempo2 = 0;
unsigned long tiempoSegundos = 0;


const int pinPulsador = 12;         // pin al cual se conecta el pulsador
const int pinLed = 13;              // pin al cual se conecta el LED


int contadorPulsaciones = 0;        // Contador: variable que acumula el numero de pulsaciones
int estadoPulsador = 0;             // Variable que almacena el estado actual del pulsador
int estadoAnteriorPulsador = 0;     // Variable que almacena el estado anterior del pulsador
int contadorPulsacionesActual = 0;  // Variable que almacena el estado anterior de número de pulsaciones

int IncrementoPulsaciones = 0;

void setup() {
  pinMode(pinPulsador, INPUT);       // Inicializa el pin del pulsador como entrada
  pinMode(pinLed, OUTPUT);           // Inicializa el pin del LED como salida
 
  Serial.begin(9600);
  tiempo1 = millis();
Serial.println("Se está midiendo el nº de rpm en 30 seg. ");
}

void loop() {
estadoPulsador = digitalRead(pinPulsador); 
 tiempo2 = millis(); 
 
   // contadorPulsacionesActual = contadorPulsaciones; 
     if (estadoPulsador != estadoAnteriorPulsador) { // Se compara la variable estadoPulsador 
                                                  //// con su valor anterior
    if (estadoPulsador == HIGH) {                 // Si el estado cambió, se incrementa el contador
                                                // Si el estado actual es HIGH entonces el pulsador
      contadorPulsaciones++;    //// pasó de un estado OFF a ON
     delay(10);   //para que las fluctuaciones no le afecten. Permite calcular velocidades de hasta 6000 rpm
    
    } 
    
  }
    
    if(tiempo2 > (tiempo1+30000)){  //Si ha pasado 30 segundo ejecuta el IF
  IncrementoPulsaciones =(contadorPulsaciones - contadorPulsacionesActual);
    tiempo1 = millis(); //Actualiza el tiempo actual
    tiempoSegundos = tiempo1/1000;
    Serial.print("Ha transcurrido: ");
    Serial.print(tiempoSegundos);
    Serial.println(" desde que se encendió el Arduino");
   
      Serial.print("numero de pulsaciones:  ");
      Serial.println(contadorPulsaciones);
      Serial.print("Incremento de pulsaciones:  ");
      Serial.println(IncrementoPulsaciones);
      Serial.print(IncrementoPulsaciones*60/30);
      Serial.println(" r.p.m.");
      contadorPulsacionesActual = contadorPulsaciones;
        }
          // Se guarda el estado actual como ultimo estado
  estadoAnteriorPulsador = estadoPulsador;        //// para la siguiente vuelta de la función loop     
 
  
}
