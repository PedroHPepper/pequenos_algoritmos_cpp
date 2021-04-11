#include <iostream>

using namespace std;

int main()
{
    int num[6], i;
    cout << "Hello world!" << endl;
    for(i=0; i<6; i++){
        cout << "Insira o numero " << i+1 << ": ";
        cin >> num[i];
    }
    for(i=0; i<6; i++){
        cout << "\n\nO numero " << i+1 << " eh: " << num[i];
    }
    return 0;
}
