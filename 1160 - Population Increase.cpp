#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, c, m;
    int PA, PB;
    double G1, G2;
    scanf("%d", &n);
    for(m=1; m<=n; m++)
    {
        c = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while(PA <= PB)
        {
            PA *= (G1 / 100.0) + 1.0;
            PB *= (G2 / 100.0) + 1.0;
            c++;
            if (c > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (c <= 100)
            printf("%d anos.\n", c);
    }

    return 0;
}
