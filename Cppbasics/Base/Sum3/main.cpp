#include <iostream>

using namespace std;
int main() {

    int a, b, somma;
    cout << " inserisci un numero " << endl;
    cin >> a;
    cout << " inserisci un numero " << endl;
    cin >> b;
    somma = a+b;
    if (a==b)
    {
        somma = somma*3;
    }
    cout << somma << endl;
    return 0;
}
