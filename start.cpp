#include <iostream>
#include <ctime>
using namespace std;

int main(){

    // массив 10 чисел, рандомный, 0-20, не повторимый, и найти самый маленки в массиве

    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE];


    for (int i = 0; i < SIZE; i++)
    {
        int a = rand()%21;

        bool add = true;

        for (int j = 0; j < i; j++)
            {
                if (arr[j] == a)
                {
                    add = false;
                    break;
                }
                
            }
        
        if (add)
        {   
            arr[i] = a;
        }
        else{
            i--;
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;

    int num = arr[0];

    for (int i = 1; i < SIZE; i++)
    {
        if (arr[i]< num)
        {
            num = arr[i];
        }
        
    }
    
    cout << "The smallest number in array: "<< num;

    
    return 0;
}