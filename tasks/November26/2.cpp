#include <iostream>

using namespace std;

int main() {
    int a ;
    cout << "Send number:";
    cin >> a;
    if (a%2==0)
    {
        cout << "Четный";
    }
    else{
        cout << "Не четный";
    }
    
    return 0;
}