#include <iostream>

using namespace std;

int main()
{
    int vetor[10], i;
    cout << "Hello world!" << endl;

    for(i=0;i<10;i++){
        cout << "Insira o numero " << i+1 << ": ";
        cin >> vetor[i];

        if(vetor[i]<0){
            vetor[i]=0;
        }
    }

    for(i=0;i<10;i++){
        cout << vetor[i] << endl;
    }
    return 0;
}
