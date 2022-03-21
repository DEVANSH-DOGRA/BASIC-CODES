#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"The odd elements are:"<<endl;
    for(int i=0;i<=5;i++)
    {
    if(arr[i]%2!=0)
        cout<<arr[i]<<endl;
    else
    {

    }
    }
    return 0;
}
