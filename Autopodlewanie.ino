// 
// made by Bl4ni4 on 21/07/25 
// 


#define kwiatek1 13
#define kwiatek2 12
#define kwiatek3 11
#define kwiatek4 10
// #define dioda1 2
// #define dioda2 3
// #define dioda3 4
// #define dioda4 5
bool everyOther = true;
void setup() {
  pinMode(kwiatek1, OUTPUT);
  pinMode(kwiatek2, OUTPUT);
  pinMode(kwiatek3, OUTPUT);
  pinMode(kwiatek4, OUTPUT);
  // pinMode(dioda1, OUTPUT);
  // pinMode(dioda2, OUTPUT);
  // pinMode(dioda3, OUTPUT);
  // pinMode(dioda4, OUTPUT);
}

// długa doniczka - 24 sekundy
// mała - 8,5 sekund (test)
// 1 sekunda = 50 ml na pompce 1 i pompce 2
// 1 sekunda = 70ml na pompce 3 i pompce 4

void loop() {
  digitalWrite(kwiatek1, HIGH);
  // digitalWrite(dioda1, HIGH);
  delay(24000);
  digitalWrite(kwiatek1, LOW);
  digitalWrite(kwiatek2, HIGH);
  // digitalWrite(dioda2, HIGH);
  // digitalWrite(dioda1, LOW);
  delay(24000);
  digitalWrite(kwiatek2, LOW);

  if (everyOther) {
    digitalWrite(kwiatek3, HIGH);
    delay(8500);
    digitalWrite(kwiatek3, LOW);
    digitalWrite(kwiatek4, HIGH);
    // digitalWrite(dioda4, HIGH);
    // digitalWrite(dioda3, LOW);
    delay(8500);
    digitalWrite(kwiatek4, LOW);
  }
  everyOther = !everyOther;
  delay(345600000); //czekaj 4 dni
}