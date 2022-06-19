const int luz =  8;
const int touch = 7;
const int rele = 5;
int i = 0;
void setup() {
  Serial.begin(9600);
  pinMode(luz, OUTPUT);
  pinMode(touch, INPUT);
}

void loop() {


    
    if(digitalRead(touch)==1 && i == 0){
      digitalWrite(luz, HIGH);
      digitalWrite(rele, HIGH);
      i=1;
      
    }

    else if(digitalRead(touch)==1 && i == 1){
      digitalWrite(luz, LOW);
      digitalWrite(rele, LOW);
      i=0;
    }
}