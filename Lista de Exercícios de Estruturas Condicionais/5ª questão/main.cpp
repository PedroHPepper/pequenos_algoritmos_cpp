#include <iostream>

using namespace std;

int main()
{
    int num, resultado;
    cout << "Hello world!" << endl;
    cout << "Insira um numero: ";
    cin >> num;

    if(num > 0){
        resultado = num*2;
        cout << "O resultado eh: " << resultado;
    }else{
        resultado = num*3;
        cout << "O resultado eh: " << resultado;
    }
    return 0;
}
