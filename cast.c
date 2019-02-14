#include <stdio.h>
int main(){
double a;
int b;
printf("Inserire un valore con la virgola");
scanf("%lf",&a);
b=(int)a;
printf("Il numero double e %lf\t",a);
printf("Il numero intero e %d\t",b);
return 0;
}