#include <iostream>

using namespace std;

int main()
{
    cout << "Enter the 5 array elements:" << endl;
    int arr[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"The sum of array elements is: "<<sum<<endl;
    return 0;
}
