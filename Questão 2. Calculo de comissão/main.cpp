#include <iostream>

using namespace std;

int main()
{
    float venda1, venda2, venda3, comissao1, comissao2, comissao3, vendatotal;
    cout << "Insira o valor da venda do corretor 1:" << endl;
    cin >> venda1;

    if (venda1 > 50000){
        comissao1 = venda1 * 0.12;
     } else if (venda1 >= 30000 && venda1 <= 50000){
        comissao1 = venda1 * 0.095;
     } else if (venda1 < 30000){
        comissao1 = venda1 * 0.07;
     }

    cout << "Insira o valor da venda do corretor 2:" << endl;
    cin >> venda2;

    if (venda2 > 50000){
        comissao2 = venda2 * 0.12;
     } else if (venda2 >= 30000 && venda2 <= 50000){
        comissao2 = venda2 * 0.095;
     } else if (venda2 < 30000){
        comissao2 = venda2 * 0.07;
     }

    cout << "Insira o valor da venda do corretor 3:" << endl;
    cin >> venda3;

    if (venda3 > 50000){
       comissao3 = venda3 * 0.12;
     } else if (venda3 >= 30000 && venda3 <= 50000){
       comissao3 = venda3 * 0.095;
     } else if (venda3 < 30000){
       comissao3 = venda3 * 0.07;
     }

     vendatotal = venda1 + venda2 + venda3;

     cout << "Corretor 1 vendeu " << venda1 << ". E recebeu comissao de: " << comissao1 << endl;
     cout << "Corretor 2 vendeu " << venda2 << ". E recebeu comissao de: " << comissao2 << endl;
     cout << "Corretor 3 vendeu " << venda3 << ". E recebeu comissao de: " << comissao3 << endl;
     cout << "A venda total da empresa e de: " << vendatotal << endl;



    return 0;
}
