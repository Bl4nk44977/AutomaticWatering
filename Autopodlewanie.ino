// 
// made by Bl4ni4 on 21/07/25 
// 


#define kwiatek1 13
#define kwiatek2 12
#define kwiatek3 11
#define kwiatek4 10
bool everyOther = true;

void setup() {
  pinMode(kwiatek1, OUTPUT);
  pinMode(kwiatek2, OUTPUT);
  pinMode(kwiatek3, OUTPUT);
  pinMode(kwiatek4, OUTPUT);
}

// long pot - 24s
// small pot - 8,5s (test)
// 1s = 50 ml on kwiatek1 i kwatek2
// 1s = 70ml on kwiatek3 i kwiatek4
// in this case I have two long pots and two small ones, but this is easily editable, feel free to change delays to your needs.
void loop() {
  digitalWrite(kwiatek1, HIGH);
  delay(24000);
  digitalWrite(kwiatek1, LOW);
  digitalWrite(kwiatek2, HIGH);
  delay(24000);
  digitalWrite(kwiatek2, LOW);
// in this case my long pots have to be watered twice a week, instead of once so I implemented this part of code below to do so.
  if (everyOther) {
    digitalWrite(kwiatek3, HIGH);
    delay(8500);
    digitalWrite(kwiatek3, LOW);
    digitalWrite(kwiatek4, HIGH);
    delay(8500);
    digitalWrite(kwiatek4, LOW);
  }
  everyOther = !everyOther;
  delay(345600000); //wait 4 days 
}
