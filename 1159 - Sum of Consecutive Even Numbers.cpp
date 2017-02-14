#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, even, sum;
    while(1){
        cin>>x;
        if(x == 0){
            break;
        }
        else{
            sum = 0;
            even = 0;
            if(x%2 == 0){
                even += x;
            }
            else{
                x += 1;
                even += x;
            }
            for(int i=1, j=even; i<=5; i++, j=j+2){
                sum += j;
            }
        }
        cout<<sum<<endl;
    }
 
    return 0;
}
