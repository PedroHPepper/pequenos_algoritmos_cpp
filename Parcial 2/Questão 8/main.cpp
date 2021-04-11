#include <iostream>

using namespace std;

int main()
{
    int i, vetorA[10], vetorB[10], vetorC[10];
    cout << "Hello world!" << endl;

    for(i=0;i<10;i++){
        cout << "Insira um numero para A: ";
        cin >> vetorA[i];
    }
    for(i=0;i<10;i++){
        cout << "Insira um numero para B: ";
        cin >> vetorB[i];

        vetorC[i] = vetorA[i] - vetorB[i];
    }
    cout << "Os valores do vetor C sao:\n";
    for(i=0;i<10;i++){
        cout << vetorC[i] << endl;
    }

    return 0;
}
