#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, Alcohol=0, Gasolin=0, Diesel=0;

    while(1){
        cin>> n;
        if(n == 4){
            break;
        }
        else if(n == 1){
            Alcohol++;
        }
        else if(n == 2){
            Gasolin++;
        }
        else if(n == 3){
            Diesel++;
        }
    }
    cout<< "MUITO OBRIGADO\n" << "Alcool: " << Alcohol << "\nGasolina: " << Gasolin << "\nDiesel: " << Diesel <<endl;
 
    return 0;
}
