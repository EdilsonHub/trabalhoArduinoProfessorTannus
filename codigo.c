#define ENTRADA_1 3
#define ENTRADA_2 4

#define SAIDA_AND 5
#define SAIDA_NAND 6
#define SAIDA_OR 7
#define SAIDA_NOR 8
#define SAIDA_XOR 9
#define SAIDA_XNOR 10

 
bool eand(bool a, bool b) {return a && b; }
bool eor(bool a, bool b) {return a || b; }
bool exor(bool a, bool b) {return a && !b || !a && b; }
bool enor(bool a, bool b) {return !(a || b); }
bool exnor(bool a, bool b) {return !(a && !b || !a && b); }
bool enand(bool a, bool b) {return !(a && b); }

void setLuz(int led, bool resultado) {
	if(resultado)  digitalWrite(led, HIGH);
  	else digitalWrite(led, LOW);
}

void setup()
{
  pinMode(ENTRADA_1, OUTPUT);
  pinMode(ENTRADA_2, OUTPUT);
  pinMode(SAIDA_OR, OUTPUT);
  pinMode(SAIDA_XOR, OUTPUT);
  pinMode(SAIDA_XNOR, OUTPUT);
  pinMode(SAIDA_AND, OUTPUT);
  pinMode(SAIDA_NAND, OUTPUT);
  pinMode(SAIDA_NOR, OUTPUT);
}

void loop() {
  
  
	int coisa; 
	bool coisa2;
	bool coisa3 = true;

  
  for(coisa = 1; coisa <= 4; coisa++) {
    coisa2 = coisa > 2;
    coisa3 = !coisa3;
    
	setLuz(ENTRADA_1, coisa2);
	setLuz(ENTRADA_2, coisa3);
    
	setLuz(SAIDA_AND, eand(coisa2, coisa3));
	setLuz(SAIDA_NAND, enand(coisa2, coisa3));
	setLuz(SAIDA_OR, eor(coisa2, coisa3));
	setLuz(SAIDA_XOR, exor(coisa2, coisa3));
	setLuz(SAIDA_NOR, enor(coisa2, coisa3));
	setLuz(SAIDA_XNOR, exnor(coisa2, coisa3));
    delay(1000);
  }
  
  delay(5000);
 
}


