#include<stdio.h>
int main(void)
{
    int num, c, a, in=0, out=0, count;
    scanf("%d", &c);
    for(a=1; a<=c; a++){
        scanf("%d", &num);
        if(num>=10 && num<=20)
            in++;
        else
            out++;
    }
    printf("%d in\n%d out\n", in, out);
    return 0;
}
