#include <iostream>

using namespace std;

int main()
{
    int compra, pagamento, troco, n100, n10, n1, resto1, resto2, resto3;
    cout << "O caixa possui apenas notas de 100, 10 e 1."  << endl << "Para o troco, calcularemos a quantidade necessaria para cada uma das cedulas." << endl << endl;
    cout << "Insira o valor da compra:";
    cin >> compra;
    cout << "Insira o valor do pagamento:";
    cin >> pagamento;

    if (pagamento > compra)
    {
    troco = pagamento - compra;

    resto1 = troco%100;
    n100 = (troco - resto1)/100;

    resto2 = resto1%10;
    n10 = (resto1 - resto2)/10;

    n1 = resto2;

    cout << "Sendo que o valor da compra seja R$" << compra << " e o valor do pagamento seja R$" << pagamento << ":" << endl;
    cout << "O valor a ser retornado ao cliente eh de R$" << troco << endl;
    cout << "Portanto: ";

    cout << "O numero minimo de notas de 100 para o troco eh de: " << n100 << " notas." << endl;
    cout << "          O numero minimo de notas de 10 para o troco eh de:  " << n10 << " notas." << endl;
    cout << "          O numero minimo de notas de 1 para o troco eh de:   " << n1 << " notas." << endl;
    }
    else
    {
        cout << "O cliente nao pagou todo o valor da compra.";
    }


    return 0;
}
