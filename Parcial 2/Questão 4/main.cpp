#include <iostream>

using namespace std;

int main()
{
    double num[10], quadrado[10];
    int i;
    cout << "Hello world!" << endl;

    for(i=0; i<10; i++){
        cout << "Insira o valor do numero " << i+1 << ": ";
        cin >> num[i];

        quadrado[i] = num[i]*num[i];
    }
    cout << "\n\nOs valores do conjunto inserido são: ";
    for(i=0; i<10; i++){
        cout << num[i];
        if(i==9){
            cout << ".";
        }else{
            cout << ", ";
        }
    }
    cout << "\n\nOs valores do conjunto quadrado são: ";
    for(i=0; i<10; i++){
        cout << quadrado[i];
        if(i==9){
            cout << ".";
        }else{
            cout << ", ";
        }
    }
    return 0;
}
