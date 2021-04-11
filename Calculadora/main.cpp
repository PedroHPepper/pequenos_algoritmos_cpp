#include <iostream>

using namespace std;

int main()
{
    float num1, num2, soma, subtracao, divisao, multiplicacao;
    cout << "Escreva numero 1: ";
    cin >> num1;
    cout << "Escreva numero 2:";
    cin >> num2;
    soma = num1 + num2;
    multiplicacao = num1 * num2;
    divisao = num1 / num2;
    subtracao = num1 - num2;

    cout << "A soma n1 + n2: " << soma << endl;
    cout << "A subtracao n1 - n2 : " << subtracao << endl;
    cout << "A divisao n1 / n2 : " << divisao << endl;
    cout << "A multiplicacao n1 * n2 : " << multiplicacao << endl;
}
