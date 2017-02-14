#include<iostream>
using namespace std;
int main()
{
    int T, n;
    cin>>T;
    for(int i=1; i<=T; i++){
        cin>>n;
        int div = 1, sum = 0;
        for(int j=div; j<=n/2; j++){
            if(n%j == 0){
                sum += j;
            }
        }
        if(sum == n)
            cout<<n<<" eh perfeito"<<endl;
        else
            cout<<n<<" nao eh perfeito"<<endl;
    }

    return 0;
}
