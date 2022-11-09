/*
  Valore e indirizzo sono diversi.
*/

int main() {
  int a=60;
  int *p;

  *p=&a;		

  printf("&a=%p a=%d\n", &a, a);
  printf("&p=%p p=%p\n", &p, p);

  return 0;
}
