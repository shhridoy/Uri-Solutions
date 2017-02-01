#include <stdio.h>
 
int main() {
 
    int i, j;
    for(i=1, j=60; i<=j, j>=0; i=i+3, j=j-5){
            printf("I=%d J=%d\n", i, j);
        while(j==0)
            break;
    }
 
    return 0;
}
