#include <iostream>

using namespace std;

int main()
{
    string cliente;
    int q_porca, q_parafuso, q_arruela;
    float v_porca, v_parafuso, v_arruela, t_porca, t_parafuso, t_arruela;
    float desconto, v_compra, t_pagar;
    cout << "Aqui calcula-se o total de desconto da compra de um cliente." << endl;
    cout << "Qual o nome dele?" << endl;
    cin >> cliente;
    cout << "Insira o valor de cada porca: ";
    cin >> v_porca; //valor da porca.

    cout << "Insira o valor de cada parafuso: ";
    cin >> v_parafuso; //valor do parafuso.

    cout << "Insira o valor de cada arruela: ";
    cin >> v_arruela; //valor da arruela.

    cout << endl;

    cout << "Quantas porcas o cliente comprou?" << endl;
    cin >> q_porca;

    t_porca = v_porca * q_porca; // calculando o total do valor a pagar sem desconto.

    cout << "Quantos parafusos o cliente comprou?" << endl;
    cin >> q_parafuso;

    t_parafuso = v_parafuso * q_parafuso;

    cout << "Quantas arruelas o cliente comprou?" << endl;
    cin >> q_arruela;

    t_arruela = v_arruela * q_arruela;

    v_compra = t_arruela + t_parafuso + t_porca; //valor total da compra sem o desconto.
    desconto = (t_arruela * 0.30) + (t_parafuso * 0.20) + (t_porca * 0.10);
    t_pagar = v_compra - desconto; //total a pagar.

    cout << "O cliente " << cliente << " comprou " << q_porca << " porca(s), " << q_parafuso << " parafuso(s) e " << q_arruela << " arruela(s)." << endl;
    cout << endl;
    cout << endl;
    cout << "O total de desconto eh de: " << desconto << ";" << endl;
    cout << "E o total a pagar eh de: " << t_pagar;

    return 0;
}
