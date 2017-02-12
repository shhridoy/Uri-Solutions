#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float sum=0;

    for(int i=1, j=1; i<=39; i=i+2, j=j*2){
        sum = sum + ( (float)i / (float)j );
    }
    printf("%.2f\n", sum);

    return 0;
}
