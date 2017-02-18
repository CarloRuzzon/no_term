#include<stdio.h>

int main(){
  int a=0, b, s=0;
  FILE *f=fopen("sum.dat", "r");
  if(!f)
	  printf("Il valore sommato sarà 0\n");
  else{
          fscanf(f, "%d", &a);
          fclose(f);
  }
  printf("Valore corrente: %d\n", a);
  printf("Inserisci il valore da sommare:");
  scanf("%d", &b);
  s=a+b;
  printf("\nNuovo valore: %d", s);
  FILE *l=fopen("sum.dat", "w");
  fprintf(l, "%d\n", s);
  fclose(l);
  return 0;
}
