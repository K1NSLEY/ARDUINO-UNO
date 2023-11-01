int i1 = 2;
int o1 = 3;

int i2 = 4;
int o2 = 5;

int i3 = 6;
int o3 = 7;

int i4 = 8;
int o4 = 9;

int i5 = 10;
int o5 = 11;

int i6 = 12;
int o6 = 13;

void setup() {
  pinMode(i1, INPUT);
  pinMode(i2, INPUT);
  pinMode(i3, INPUT);
  pinMode(i4, INPUT);
  pinMode(i5, INPUT);
  pinMode(i6, INPUT);

  pinMode(o1, OUTPUT);
  pinMode(o2, OUTPUT);
  pinMode(o3, OUTPUT);
  pinMode(o4, OUTPUT);
  pinMode(o5, OUTPUT);
  pinMode(o6, OUTPUT);
}

void loop() {
  if (digitalRead(i1) == HIGH) {
    digitalWrite(o1, HIGH);
  } else {
    digitalWrite(o1, LOW);
  }
  //
  if (digitalRead(i2) == HIGH) {
    digitalWrite(o2, HIGH);
  } else {
    digitalWrite(o2, LOW);
  }
  //
  if (digitalRead(i3) == HIGH) {
    digitalWrite(o3, HIGH);
  } else {
    digitalWrite(o3, LOW);
  }
  //
  if (digitalRead(i4) == HIGH) {
    digitalWrite(o4, HIGH);
  } else {
    digitalWrite(o4, LOW);
  }
  //==
  if (digitalRead(i5) == HIGH) {
    digitalWrite(o5, HIGH);
  } else {
    digitalWrite(o5, LOW);
  }
  //==
  if (digitalRead(i6) == HIGH) {
    digitalWrite(o6, HIGH);
  } else {
    digitalWrite(o6, LOW);
  }
}
