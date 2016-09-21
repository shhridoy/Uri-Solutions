#include <stdio.h>
 
int main() {
 
    char name[10];
    double salary, bonus,total;
    scanf("%s %lf %lf",&name,&salary,&bonus);
    total=(salary+((bonus*15)/100));
    printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}
