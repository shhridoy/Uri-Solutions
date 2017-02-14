#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    float A[100];
    int i;

    for(i=0; i<100; i++){
        scanf("%f", &A[i]);
        if(A[i] <= 10){
            printf("A[%d] = %.1f\n", i, A[i]);
        }
    }

    return 0;
}
