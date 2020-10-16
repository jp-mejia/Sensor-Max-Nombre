float i=0;
float j=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(1,OUTPUT);
  Serial.begin(9600);
  //Serial.print("La temperatura es de:");
}

void loop() {
  // put your main code here, to run repeatedly:
  //i = random(0,1023);
  i=analogRead(A0);
  j = map(i, 0, 1023, 0, 63);
 
  
  if (i>512)
  {
    digitalWrite(1,HIGH);
  }
  else
  {
    digitalWrite(1,LOW);
  }
  //Serial.println(pot1);
  Serial.print("VALUE:");
  Serial.println(i);
  Serial.print("TEMPERATURE IS :");
  Serial.println(j);
   delay(1000);
}
