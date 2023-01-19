int inta = 123, intb = 456;
void swap(int *a, int *b)
{  
  int temp = *a;
  *a = *b;
  *b = temp;

}
void setup() {
  Serial.begin(9600);// put your setup code here, to run once:

  Serial.println("hello");
}

void loop() {
  swap(&inta , &intb);// put your main code here, to run repeatedly:

  Serial.print(inta);
  Serial.print(" ");
  Serial.println(intb);

}
