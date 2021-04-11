#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Hello world!" << endl;
    cout << "Insira valor de A: ";
    cin >> a;
    cout << "Insira valor de B: ";
    cin >> b;
    cout << "Insira valor de C: ";
    cin >> c;

    if((a+b)>c){
        cout << "Valor de A+B eh maior que C.\n";
    }else{
        cout << "Valor de A+B eh menor que C.\n";
    }
    return 0;
}
