#include<iostream>
using namespace std;

int main()
{
    int arr[3] = {122, 45, 67};
    int *ptr;

    ptr = arr;
    for(int i=0; i<3; i++)
    {
        cout<<"The address of arr["<<i<<"] = ";
        cout<<ptr<<endl;
        cout<<"THe value of arr["<<i<<"] = ";
        cout<<*ptr<<endl;
        //ptr++;
    }

    return 0;
}
