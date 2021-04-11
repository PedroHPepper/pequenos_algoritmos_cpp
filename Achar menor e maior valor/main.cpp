#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    cout << "Comparar entre dois numeros e mostrar o de maior valor." << endl;
    cout << "Insira o primeiro numero:";
    cin >> n1;
    cout << "Insira o segundo numero:";
    cin >> n2;
    if(n1>n2)
    {
        cout << "O maior numero e:" << n1 << endl;
    }
    else
    {
        cout << "O maior numero e:" << n2 << endl;
    }
}
