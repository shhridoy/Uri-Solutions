#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n, i, div=0, sum=0;
    double avg;

    while(1){
        scanf("%d", &n);
        if(n<0){
            break;
        }
        else{
            sum = sum + n;
            div = div + 1;
        }
    }
    avg = (double)sum/(double)div;
    printf("%.2lf\n", avg);

    return 0;
}
