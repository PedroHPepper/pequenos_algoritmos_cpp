#include <iostream>

using namespace std;

int main()
{
    int vetor[10], i, par=0;
    cout << "Hello world!" << endl;

    for(i=0;i<10;i++){
        cout << "Insira um numero: ";
        cin >> vetor[i];
        if(vetor[i]%2==0){
            par++;
        }
    }
    cout << "Voce escreveu " << par << " numeros pares.";
    return 0;
}
