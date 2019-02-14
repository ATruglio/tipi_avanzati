#include <stdio.h>
int main(){
double a;
double *b;
printf("Inserire un valore con la virgola");
scanf("%lf",&a);
b = &a;
printf("L indirizzo e %p\t",b);
return 0;
}