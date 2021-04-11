#include <iostream>

using namespace std;

int main()
{
    int n;

    cout << "Insira o tamanho do vetor: ";
    cin >> n;
    int vetor[n], i;

    for(i=0;i<n;i++){
        cout << "Insira o numero " << i+1 << ": ";
        cin >> vetor[i];
    }
    cout << "O inverso do segmento do vetor eh: ";
    for(i=n-1;i>=0;i--){
        cout << endl << vetor[i];
    }
    return 0;
}
