#include <stdio.h>
 
int main() {
 
     int n,year,month,day;
    scanf("%d",&n);
    year=n/365;
    month=n%365/30;
    day=n%365%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
 
    return 0;
}
