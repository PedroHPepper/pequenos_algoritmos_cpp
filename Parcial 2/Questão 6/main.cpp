#include <iostream>

using namespace std;

int main()
{
    int i, vetor[10], maior, menor;
    cout << "Hello world!" << endl;

    for(i=0;i<10;i++){
        cout << "Insira um numero: ";
        cin >> vetor[i];
    }
    menor = vetor[0];
    maior = vetor[0];
    for(i=0;i<10;i++){
        if(maior < vetor[i]){
            maior=vetor[i];
        }
        if(menor > vetor[i]){
            menor=vetor[i];
        }
    }
    cout << "O maior numero digitado eh: " << maior << endl;
    cout << "O menor numero digitado eh: " << menor << endl;
    return 0;
}
