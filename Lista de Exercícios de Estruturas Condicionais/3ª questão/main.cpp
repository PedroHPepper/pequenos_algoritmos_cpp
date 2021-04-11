#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Insira o numero: " << endl;
    cin >> num;

    if(num%2==0){
        cout << "O numero eh par.";
    }else {
        cout << "O numero eh impar.";
    }
    return 0;
}
