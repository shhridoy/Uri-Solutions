#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>> N;

    for(int i=1, c=1; i<=N; i++){
        for(int j=1; j<=3; j++, c++){
            cout<< c << " ";
        }
        cout<< "PUM" <<endl;
        c = c+1;
    }
 
    return 0;
}
