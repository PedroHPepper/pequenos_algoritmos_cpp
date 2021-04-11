#include <iostream>

using namespace std;

int main()
{
    float vm, tempo, distancia;
    cout << "Calcular velocidade media" << endl;
    cout << "Insira a distancia percorrida :";
    cin >> distancia;
    cout << "insira o tempo percorrido : ";
    cin >> tempo;
    vm = distancia / tempo;
    cout << "A velocidade media e:" << vm << endl;
}
