#include <iostream>
 
using namespace std;
 
int main() {
 
    int a, b;
    while(1)
    {
        cin >> a >> b;
        if(a==0 || b==0){
            break;
        }
        else
        {
            if(a>0 && 0<b){
                cout << "primeiro" << endl;
            }
            else if(a>0 && 0>b){
                cout << "quarto" << endl;
            }
            else if(a<0 && 0>b){
                cout << "terceiro" << endl;
            }
            else
                cout << "segundo" <<endl;
        }
    }
 
    return 0;
}
