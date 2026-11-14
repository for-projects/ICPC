#include <iostream>

using namespace std;

int main(){

    for (int i = 1; i < 5; i++)
    {
        cout << "сработал 1-Й цикл for итерация №"<< i << endl;
        for (int j = 1; j < 5; j++)
        {
            cout << "\tсработал 2й цикл for итерация №"<< j << endl;
        }
         
    }
    

    return 0;
}