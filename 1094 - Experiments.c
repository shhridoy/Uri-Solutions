#include <stdio.h>
 
int main() {
 
    int i,n,x;
    long int t_c=0,t_r=0,t_s=0,sum=0;
    char ch;
    float c,r,s;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %c",&x,&ch);
        sum+=x;
        if(ch=='C')
            t_c+=x;
        else if(ch=='R')
            t_r+=x;
        else if(ch=='S')
            t_s+=x;
    }
    c=(float)t_c/(float)sum*100.00;
    r=(float)t_r/(float)sum*100.00;
    s=(float)t_s/(float)sum*100.00;
    printf("Total: %ld cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %c\nPercentual de ratos: %.2f %c\nPercentual de sapos: %.2f %c\n",sum,t_c,t_r,t_s,c,'%',r,'%',s,'%');
    return 0;
}
