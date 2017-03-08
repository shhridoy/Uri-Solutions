#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a;
    double N[100],b,c,d;
    scanf("%lf", &b);
    N[0]=b;
    for(a=0; a<100;a++)
    {
        printf("N[%d] = %.4lf\n", a, N[a]);
        b/=2;
        N[a+1]=b;
    }

    return 0;
}
