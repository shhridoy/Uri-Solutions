#include <stdio.h>
 
int main() {
 
    int code1,code2,unit1,unit2;
    float ppu1,ppu2,val_top;
    scanf("%d %d %f",&code1,&unit1,&ppu1);
    scanf("%d %d %f",&code2,&unit2,&ppu2);
    val_top=(unit1*ppu1)+(unit2*ppu2);
    printf("VALOR A PAGAR: R$ %.2f\n",val_top);
 
    return 0;
}
