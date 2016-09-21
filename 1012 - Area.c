#include <stdio.h>
 
int main() {
 
    double A,B,C,triangle,radius,trapezium,square,rectangle,pi=3.14159;
    scanf("%lf %lf %lf",&A,&B,&C);
    triangle=(1/2.0)*A*C;
    radius=pi*C*C;
    trapezium=((A+B)/2)*C;
    square=B*B;
    rectangle=A*B;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",triangle,radius,trapezium,square,rectangle);
 
    return 0;
}
