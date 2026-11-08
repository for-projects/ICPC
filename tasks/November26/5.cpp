#include <iostream>

using namespace std;

int main() {
    //Написать программу, которая находит сумму всех целых нечетных чисел в диапазоне, указанном пользователе.
    
    int a,b;
    cout << "send number diapazone"<< endl;
    cin >> a>>b;

    int sum{};
    for (int i = a; i < b; i++)
    {
        if (i%2 != 0)
        {
            sum+= 1;
        }
        
    }
    
    cout << "number of odd numbers: " << sum;

    return 0;
}