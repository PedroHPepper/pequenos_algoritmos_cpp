#include <iostream>

using namespace std;

int main()
{
    string nome;
    char sexo, casado;
    int tempo;
    cout << "Hello world!" << endl;
    cout << "Insira o nome da pessoa: ";
    cin >> nome;

    cout << "Qual o sexo? digite 'h' para homem e 'm' para mulher: ";
    cin >> sexo;
    if (sexo == 'h' || sexo == 'm'){
        cout << nome << " eh casado(a)? (s/n)";
    }else{
        cout << "resposta invalida.";
        return 0;
    }

    cin >> casado;
    if(casado == 's' || casado == 'n'){
        if (casado == 's' && sexo == 'f'){
            cout << "Quanto tempo de casada, am anos?: ";
            cin >> tempo;
        }
    }else{
        cout << "resposta invalida.";
        return 0;
    }
    return 0;
}
