#include <stdio.h>
 
int main() {
 
    int x,y;
    double pr1,pr2,pr3,pr4,pr5;
    scanf("%d%d",&x,&y);
    pr1=y*4;
    pr2=y*4.5;
    pr3=y*5;
    pr4=y*2;
    pr5=y*1.5;

    if(x==1){
        printf("Total: R$ %.2lf\n",pr1);
    }
    else if(x==2){
        printf("Total: R$ %.2lf\n",pr2);
    }
    else if(x==3){
        printf("Total: R$ %.2lf\n",pr3);
    }
    else if(x==4){
        printf("Total: R$ %.2lf\n",pr4);
    }
    else if(x==5){
        printf("Total: R$ %.2lf\n",pr5);
    }
 
    return 0;
}
