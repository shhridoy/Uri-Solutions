#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double a, b, c, MEDIA;

    scanf("%lf %lf %lf",&a, &b, &c);

    MEDIA = ((a*2) + (b*3) + (c*5))  / (2+3+5);

    printf("MEDIA = %.1lf\n",MEDIA);

    return 0;
}
