#include <iostream>

using namespace std;

int main()
{
    int arr[5];
    int g;
    cout << "Enter the array elements: " << endl;
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    g=arr[1];
    for(int i=0;i<=5;i++)
    {
        if (arr[i]>g)
            g=arr[i];
    }
    cout<<"The greatest element is :"<<g<<endl;
//hloooooo

    return 0;
}
