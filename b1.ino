const int led =3;
int fade =5;
int bright =0;

void setup() {
}

void loop() {
  analogWrite(led,bright);
 
  bright=bright+fade;
  if (bright==0 || bright==255){
  fade=-fade;
   
  }
   delay(50);
}