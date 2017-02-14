#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N[10], i, j;
    scanf("%d", &N[0]);
    for(i=0, j=N[0]; i<10; i++, j*=2){
        cout<<"N[" <<i<< "] = " << j<<endl;
    }

    return 0;
}
