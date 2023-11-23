int redLed = 13;
int greenLed = 11;
int yellowLed = 12;
int blueLed = 10;


void setup() {
 pinMode(redLed,OUTPUT); // DEFINE O PINO 13 COMO OUTPUT, OU SEJA, VARIÁVEL DE SAÍDA.
 pinMode(yellowLed,OUTPUT); // IDEM PARA O PINO 12.
 pinMode(greenLed,OUTPUT); // IDEM PARA O PINO 11.
}

void loop() {
 digitalWrite(redLed,HIGH); // COLOCA O PINO 13 EM NÍVEL "ALTO", OU SEJA, 5 V; O LED VERM. ACENDE.
 delay(4000); // TEMPO DE ESPERA DE 4 SEGUNDOS.
 digitalWrite(redLed,LOW); // COLOCA O PINO 13 EM NÍVEL "BAIXO", OU SEJA, 0 V; O LED VERM. APAGA.

 digitalWrite(greenLed,HIGH); // COLOCA O PINO 11 EM NÍVEL "ALTO", OU SEJA, 5 V; O LED VERDE ACENDE.
 delay(4000); // TEMPO DE ESPERA DE 4 SEGUNDOS.
 digitalWrite(greenLed,LOW); // COLOCA O PINO 11 EM NÍVEL "BAIXO", OU SEJA, 0 V; O LED VERDE APAGA.

 digitalWrite(yellowLed,HIGH); // COLOCA O PINO 12 EM NÍVEL "ALTO", OU SEJA, 5 V; O LED AMAR. ACENDE.
 delay(2000); // TEMPO DE ESPERA DE 2 SEGUNDOS.
 digitalWrite(yellowLed,LOW); // COLOCA O PINO 12 EM NÍVEL "BAIXO", OU SEJA, 0 V; O LED AMAR. APAGA.
 
 digitalWrite(blueLed,HIGH); // COLOCA O PINO 10 EM NÍVEL "ALTO", OU SEJA, 5 V; O LED Branco. ACENDE.
 } 


