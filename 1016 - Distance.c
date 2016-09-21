#include <stdio.h>
 
int main() {
 
    int speed,minutes;
    scanf("%d",&speed);
    minutes=((60/30)*speed);
    printf("%d minutos\n",minutes);
 
    return 0;
}
