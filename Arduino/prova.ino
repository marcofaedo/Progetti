#define PIN_BUZZER 3
#define pinButton 4
#define pinLed 13

void setup() {
  pinMode (PIN_BUZZER,OUTPUT); //suono
  Serial.begin (9600);
  pinMode (pinButton,INPUT); //bottone
  pinMode (pinLed,OUTPUT); //led
}

void loop() {
  if (digitalRead (pinButton) == 1) { //se premo il pulsante, si accende il led
    digitalWrite (pinLed,HIGH);
    delay (500);
  digitalWrite(pinLed, LOW); //altrimenti il led rimane spento
    tone (PIN_BUZZER,1000,1000); //quando premo il pulsante, il buzzer emette un suono
    delay (500);
    noTone (PIN_BUZZER);
 }
}
