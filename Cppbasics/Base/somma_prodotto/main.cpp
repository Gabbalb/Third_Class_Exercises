#include <iostream>

using namespace std;

int main() {
    int i;
    float F;
    cin >> F >> i;
    float somma = i + F;
    float prodotto = i * F;

    if (somma > 100 && prodotto > 100){
        cout << somma << endl;
        cout << prodotto << endl;
    }
    else if (somma < 100 && prodotto < 100){
        cout << "NIENTE" << endl;
    } else if (somma > 100 && prodotto < 100){
        cout << somma << endl;
    } else
        cout << prodotto << endl;
    return 0;
}
