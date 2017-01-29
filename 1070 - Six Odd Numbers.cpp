#include <cstdio>
int main()
{
    int i,n;
    scanf("%d",&n);
    if(n%2==0)
        n=n+1;
    else
        n=n;
    printf("%d\n",n);
    for(i=1;i<=5;i++)
        printf("%d\n",n+=2);

     return 0;
}
