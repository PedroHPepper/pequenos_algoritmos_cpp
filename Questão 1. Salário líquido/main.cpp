#include <iostream>

using namespace std;

int main()
{
    float horasT, valorhoras, Pdesc, salbruto, salliq, totaldesc;
    cout << "Insira o numero de horas trabalhadas no mes:";
    cin >> horasT;
    cout << "Insira o valor da hora:";
    cin >> valorhoras;
    cout << "Insira o percentual de desconto:";
    cin >> Pdesc;
    salbruto = horasT * valorhoras;
    totaldesc = (Pdesc/100) * salbruto;
    salliq = salbruto - totaldesc;

    cout << "O numero de horas trabalhadas e: " << horasT << endl;
    cout << "Salario Bruto: " << salbruto << endl;
    cout << "Com desconto de: " << Pdesc << endl;
    cout << "E salario liquido de: " << salliq;
    return 0;
}
