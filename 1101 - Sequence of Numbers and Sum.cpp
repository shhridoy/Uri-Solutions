#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,d=0;
    while(1)
    {
        cin>> a >> b;
        if(a<=0 || b<=0)
            break;
        else
        {
            d=0;
            if(a<b)
            {
                for(c=a; c<=b; c++)
                {
                    cout<<c<<" ";
                    d+=c;
                }
                cout<< "Sum=" << d << "\n";
            }
            else if(a>b)
            {
                for(c=b; c<=a; c++)
                {
                    cout<< c << " ";
                    d+=c;
                }
                cout<< "Sum=" << d << "\n";
            }
        }
    }
 
    return 0;
}
