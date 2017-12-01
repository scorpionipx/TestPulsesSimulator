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
  
}

void simulate_REF_B(void)
{
  
}

void simulate_REF_C(void)
{
  
}

