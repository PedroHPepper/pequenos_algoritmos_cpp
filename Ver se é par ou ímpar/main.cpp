#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Par ou impar" << endl;
    cin >> num;
    if (num%2==0)
    {
        cout << "O numero e par.";
    }
    else
    {
        cout << "O numero e impar.";
    }
    return 0;
}
