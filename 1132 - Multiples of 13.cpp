#include <iostream>
 
using namespace std;
 
int main() {
 
    int x, y, temp, div = 0;

    cin >> x >> y;

    if(x > y){
        temp = y;
        y = x;
        x = temp;
    }

    for(int i = x; i <= y; i++){
            if(i%13 != 0)
                    div += i;
    }
    cout << div << endl;
 
    return 0;
}
