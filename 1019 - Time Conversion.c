#include <stdio.h>
 
int main() {
 
    int n,hr,min,sec;
    scanf("%d",&n);
    hr=n/3600;
    min=n%3600/60;
    sec=n%60;
    printf("%d:%d:%d\n",hr,min,sec);

    return 0;
}
