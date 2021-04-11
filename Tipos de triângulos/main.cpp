#include <iostream>

using namespace std;

int main()
{
    float a, b, c;
    cout << "Identificar o tipo de triangulo." << endl;
    cout << "Insira o valor do lado a:";
    cin >> a;
    cout << "Insira o valor do lado b:";
    cin >> b;
    cout << "Insira o valor do lado c:";
    cin >> c;

    if ((a + b > c) || (a + c > b) || (b + c > a))
    {
        if (a == b and b == c)
        {
            cout << "O triângulo e equilatero." << endl;
        }
        else if ((a == b && c != a) || (a == c && b != a) || (c == b && c != c))
        {
            cout << "O triangulo e isosceles." << endl;
        }
        else if (a != b && b != c)
        {
            cout << "O triangulo e escaleno." << endl;
        }
    else
    {
        cout << "Nao e triangulo." << endl;
    }
    }
}
