#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "Hello world!" << endl;
    cout << "Insira valor de a: ";
    cin >> a;
    cout << "Insira valor de b: ";
    cin >> b;

    if(a == b){
        c = a+b;
        cout << "O valor de c eh: " << c;
    }else{
        c = a*b;
        cout << "O valor de c eh: " << c;
    }
    return 0;
}
