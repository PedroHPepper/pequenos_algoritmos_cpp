#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Insira o tamanho do vetor: ";
    cin >> n;
    int vetorA[n], vetorB[n], i, somamaxima=0;
    for(i=0;i<n;i++){
        cout << "Insira o valor " << i+1 << ": ";
        cin >> vetorA[i];

        vetorB[0]=vetorA[0];
        if(i==1){
            vetorB[1]=vetorA[0]+vetorA[1];
        }
        if(i>1){
            if(vetorB[i-1]<0){
                vetorB[i]=vetorA[i];
            }else{
                vetorB[i]=vetorB[i-1]+vetorA[i];
            }
        }


    }
    for(i=0;i<n;i++){
        cout << vetorB[i] << " ";

        if(somamaxima<vetorB[i]){

            somamaxima=vetorB[i];
        }
    }
    cout << endl << "A soma maxima alcancada do segmento eh: " << somamaxima << endl;

    return 0;
}
