#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;

    int n;
    cin >> n;
    cout << "You entered: " << n << endl;

    if (n > 0){
        cout << "Its positve"<< endl;
    }else if(n == 0 ){
        cout << "its equal to 0"<< endl;

    }else{
        cout << "Its negative ";
    };
    return 0;
}