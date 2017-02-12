#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float sum=0;
    for(int i=1; i<=100; i++){
        sum = sum + (1/(float)i);
    }
    printf("%.2f\n", sum);

    return 0;
}
