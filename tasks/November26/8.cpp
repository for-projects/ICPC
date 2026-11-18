#include <iostream>
#include <ctime>
using namespace std;

int main(){

    // массив 10 чисел, рандомный, 0-20, не повторимый

    srand(time(NULL));

    int arr[10];


    for (int i = 0; i < 10; i++)
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

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<< endl;
    }
    
    return 0;
}