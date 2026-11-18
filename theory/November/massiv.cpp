#include <iostream>

using namespace std;

int main(){

    /*
    int arr[4];

    arr[0] = 4;
    arr[1] = 3;
    arr[2] = 66;
    arr[3] = 53;

    cout << arr[3]<< endl;

    cout << "all element in array: "<< endl;
    for (int i = 0; i < 4; i++)
    {
        cout<< arr[i]<< " ";
    }
        */


    //sizeof туралы

    int arr[]{3,5,2,7,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<<endl;
    }

    

    return 0;
}