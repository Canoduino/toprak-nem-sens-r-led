#define sensor 8
#define yesil 9
#define kirmizi 10
int su;

void setup() {
 pinMode(sensor, INPUT);
 pinMode(yesil, OUTPUT);
 pinMode(kirmizi, OUTPUT);
}

void loop() {
  
su = digitalRead(sensor);
 if(su == true){
 digitalWrite(kirmizi, HIGH);
 digitalWrite(yesil, LOW);
 }
 else{
 digitalWrite(yesil, HIGH);
 digitalWrite(kirmizi, LOW);
 }
}
