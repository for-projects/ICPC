#include <iostream>

using namespace std;

int main() {
    // Разработать программу, которая выводит на экран линию из символов. 
    // Число символов, какой использовать символ, и какая будет линия - вертикальная, или горизонтальная - указывает пользователь. 

    int len;
    char a, lin;

    do
    {
        cout << "send simbol" << endl;
        cin >> a;
        cout << "send number of simbol" << endl;
        cin >> len ;
        cout << "send v for vertical or h for horizontal" << endl;
        cin >> lin;

        if (!(len > 0 && (lin == 'v' || lin == 'h')))
        {
            cout << "You send incorrect value" << endl;
        }
        

    } while (!(len > 0 && (lin == 'v' || lin == 'h')));

    if (lin == 'v')
    {
        for (int i = 0; i < len; i++)
        {
            cout<<a;
        }
    }
    else{
        for (int i = 0; i < len; i++)
        {
            cout << a << endl;
        }
        
    }

    return 0;
}