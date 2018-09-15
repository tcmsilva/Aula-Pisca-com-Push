int ledPin = 13;
int Botao = 2;
int EstadoBotao = 0;

void setup() {
  // put your setup code here, to run once:
pinMode (ledPin, OUTPUT);
pinMode (Botao, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
EstadoBotao = digitalRead(Botao);
if (EstadoBotao == HIGH){
  digitalWrite(ledPin, HIGH);
}
  else{ 
    digitalWrite(ledPin, LOW);
  }
}
