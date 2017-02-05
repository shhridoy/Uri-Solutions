#include <stdio.h>
 
int main() {
 
    int N, x, y, i, j;
    float div;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d %d", &x, &y);
        if(y==0){
            printf("divisao impossivel\n");
        }
        else if(x==0){
            printf("0.0\n");
        }
        else{
            div = (float)x/(float)y;
            printf("%.1f\n", div);
        }
    }
 
    return 0;
}
