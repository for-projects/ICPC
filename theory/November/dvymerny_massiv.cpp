#include <iostream>
#include <ctime>
using namespace std;

int main(){

    const int ROWS = 4;
    const int COLUMB = 5;

    int arr[ROWS][COLUMB];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMB; j++)
        {
            arr[i][j] = rand()%10;
        }   
        
    }
    
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMB; j++)
        {
            cout << arr[i][j]<< " ";
        }
        cout << endl;
    }
    
    
    return 0;
}