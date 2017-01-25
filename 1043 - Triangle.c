#include <stdio.h>
 
int main() {
 
    double a,b,c,area,prmtr;
    scanf("%lf%lf%lf",&a,&b,&c);
    prmtr=a+b+c;
    area=((a+b)/2)*c;
    if((a+b)>c && (b+c)>a && (c+a)>b)
        printf("Perimetro = %.1lf\n",prmtr);
    else
        printf("Area = %.1lf\n",area);
 
    return 0;
}
