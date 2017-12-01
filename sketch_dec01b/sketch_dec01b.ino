// simulator designed for MKC1 systems

#define REF 13
#define BUTTON 12
#define BUTTON_DEBOUNCE_DELAY_MS 5000
#define REF_A 0
#define REF_B 1
#define REF_C 2

unsigned short current_ref = 0;
  
void setup() 
{
  pinMode(REF, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() 
{
  if(digitalRead(BUTTON) == HIGH)
  {
    current_ref ++;
    current_ref &= 3; // keep in range 0-2
    delay(BUTTON_DEBOUNCE_DELAY_MS);
  }
  switch(current_ref)
  {
    case REF_A:
    {
      simulate_REF_A();
      break;
    }
    case REF_B:
    {
      simulate_REF_B();
      break;
    }
    case REF_C:
    {
      simulate_REF_C();
      break;
    }
    default:
    {
      break;
    }
  }
}

void simulate_REF_A(void)
{
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  
  digitalWrite(REF, HIGH);
  delay(97);
  digitalWrite(REF, LOW);
  delay(20);
  
  digitalWrite(REF, HIGH);
  delay(20);
  digitalWrite(REF, LOW);
  delay(3);
}

void simulate_REF_B(void)
{
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  
  digitalWrite(REF, HIGH);
  delay(57);
  digitalWrite(REF, LOW);
  delay(20);
  
  digitalWrite(REF, HIGH);
  delay(20);
  digitalWrite(REF, LOW);
  delay(3);
}

void simulate_REF_C(void)
{
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  digitalWrite(REF, HIGH);
  delay(7);
  digitalWrite(REF, LOW);
  delay(3);
  
  digitalWrite(REF, HIGH);
  delay(47);
  digitalWrite(REF, LOW);
  delay(20);
  
  digitalWrite(REF, HIGH);
  delay(20);
  digitalWrite(REF, LOW);
  delay(3);
}

