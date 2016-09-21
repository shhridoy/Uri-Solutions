#include <stdio.h>
 
int main() {
    float a,b,c,r1,r2,d;
    scanf("%f%f%f",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    if(a!=0 && d>0){
        printf("R1 = %.5f\nR2 = %.5f\n",r1,r2);
    }
    else
        printf("Impossivel calcular\n");
 
    return 0;
}
