#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int X[10], i, j;
    for(i=0; i<10; i++){
        scanf("%d", &X[i]);
        if(X[i]<=0){
            cout<< "X[" << i << "] = 1"<<endl;
        }
        else{
            cout<<"X[" << i <<"] = " << X[i] <<endl;
        }
    }

    return 0;
}
