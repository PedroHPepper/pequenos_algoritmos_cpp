#include <iostream>

using namespace std;

int main()
{
    float nota1, nota2, nota3, nota4, soma, media;
    cout << "Calcular a media do aluno e aprova-lo ou nao." << endl;
    cout << "Insira primeira nota:";
    cin >> nota1;
    cout << "Insira segunda nota:";
    cin >> nota2;
    cout << "Insira terceira nota:";
    cin >> nota3;
    cout << "Insira quarta nota:";
    cin >> nota4;
    soma = nota1 + nota2 + nota3 + nota4;
    media = soma / 4;
    if(media >= 7)
    {
        cout << "O aluno foi aprovado com media:" << media << endl;
    } else if (media >=4 and media <=7)
    {
        cout << "O aluno foi para o exame. A media e:" << media << endl;
    } else
    {
        cout << "Reprovado";
    }
}
