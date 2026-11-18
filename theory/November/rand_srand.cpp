#include <iostream>
#include <ctime>
using namespace std;

int main(){

    // генератор случайных чисел

    srand(time(NULL));
    int a = rand()%9+5; // after % its diapazone numbers, after + its number whitch starts our diapazone

    cout << a << endl;

    a = rand()%20 + 11; // after % its diapazone numbers, after + its number whitch starts our diapazone

    cout << a << endl;
    

    return 0;
}