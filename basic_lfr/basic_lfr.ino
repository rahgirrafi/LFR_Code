const int ir1=2,ir2=3,ir3=4,ir4=5;
int enA = 11;
int in1A = 9;
int in2A = 8;

// Motor B
int enB = 12;
int in3B = 7;
int in4B = 6;

int spd=150;

void U(){
    digitalWrite(in1A, HIGH);
    digitalWrite(in2A, LOW);
    digitalWrite(in3B, LOW);
    digitalWrite(in4B, HIGH);
};

void B() {
    digitalWrite(in1A, LOW);
    digitalWrite(in2A, HIGH);
    digitalWrite(in3B, LOW);
    digitalWrite(in4B, HIGH);
};

void L() {
    digitalWrite(in1A, HIGH);
    digitalWrite(in2A, LOW);
    digitalWrite(in3B, LOW);
    digitalWrite(in4B, LOW);
};

void R(){
    digitalWrite(in1A,LOW);
    digitalWrite(in2A, LOW);
    digitalWrite(in3B, LOW);
    digitalWrite(in4B, HIGH);
};

void S(){
    digitalWrite(in1A, LOW);
    digitalWrite(in2A, LOW);
    digitalWrite(in3B, LOW);
    digitalWrite(in4B, LOW);
};



void setup() {
pinMode(ir1,INPUT);
pinMode(ir2,INPUT);
pinMode(ir3,INPUT);
pinMode(ir4,INPUT);
Serial.begin(9600);
 pinMode(enA, OUTPUT);
    pinMode(in1A, OUTPUT);
    pinMode(in2A, OUTPUT);
    pinMode(enB, OUTPUT);
    pinMode(in3B, OUTPUT);
    pinMode(in4B, OUTPUT);
Serial.begin(9600);
    
}

void loop() {
int s1=digitalRead(ir1);  
int s2=digitalRead(ir2);
int s3=digitalRead(ir3);
int s4=digitalRead(ir4);
Serial.print(s1);
Serial.print(" ");
Serial.print(s2);
Serial.print(" ");
Serial.print(s3);
Serial.print(" ");
Serial.print(s4);
Serial.println();
if(s1==1 && s2==1 && s3 ==1 && s4==1){
  U();
}
if(s1==0 && s2==1 && s3 ==1 && s4==0){
  U();
}
if(s1==0 &&  s3 ==1 && s4==1){
  R();
}
if(s1==0 && s2==0 && s3== 0 && s4==1){R();}
if(s1==1 && s2==1 && s4==0){
  L();
}
if(s1==1 && s2==0 && s3 ==0 && s4==0){
  L();
}

if(s1==0 && s2==0 && s3 ==0 && s4==0){
  S();
}
delay(100);
}