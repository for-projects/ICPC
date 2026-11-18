#include <iostream>
#include <ctime>
using namespace std;

void print(){
    cout << "Hello, its  print function"<< endl;
}

int sum(int a, int b)
{
    return a+b;
}

int main(){
    
    print();

    cout << sum(3,4);
    
    return 0;
}