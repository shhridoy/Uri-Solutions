#include <iostream>
 
using namespace std;
 
int main() {
 
    int N;
    cin>> N;

    for(int i=1, c=1; i<=N; i++,c++){
        for(int j=1; j<=1; j++){
            cout<< c << " " << c*c << " " << c*c*c;
        }
        cout << "\n";
    }
 
    return 0;
}
