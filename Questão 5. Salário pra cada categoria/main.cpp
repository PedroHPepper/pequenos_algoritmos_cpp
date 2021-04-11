#include <iostream>

using namespace std;

int main()
{
    string funcionario;
    float salario, nsalario;
    char categoria;
    cout << "Hello world!" << endl;
    cout << "Escreva o nome do funcionario: ";
    cin >> funcionario;

    cout << "Insira o salario atual: ";
    cin >> salario;

    cout << "Insira a letra que represente a categoria de " << funcionario << ":";
    cin >> categoria;

    if ((categoria == 'a') || (categoria == 'c') || (categoria == 'f') || (categoria == 'h'))
        {
        nsalario = salario + (salario*0.10);

    } else if ((categoria == 'b') || (categoria == 'd') || (categoria == 'e') || (categoria == 'i') || (categoria == 'j') || (categoria == 't'))
    {
        nsalario = salario + (salario*0.15);

    } else if ((categoria == 'k') || (categoria == 'r'))
    {
        nsalario = salario + (salario*0.25);

    } else if ((categoria == 'l') || (categoria == 'm') || (categoria == 'n') || (categoria == 'o') || (categoria == 'p') || (categoria == 'q') || (categoria == 's'))
    {
        nsalario = salario + (salario*0.35);

    } else if ((categoria == 'u') || (categoria == 'v') || (categoria == 'x') || (categoria == 'y') || (categoria == 'w') || (categoria == 'z'))
    {
        nsalario = salario + (salario*0.50);

    } else
    {
        cout << "Categoria invalida!";
    }

    cout << "O empregado " << funcionario << " da categoria " << categoria << " agora recebe um salario de: " << nsalario << endl;
    return 0;
}
