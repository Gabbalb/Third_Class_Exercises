#include <iostream>

using namespace std;

int main() {
    int a, somma = 0;
    cout << " inserisci un numero" << endl;
    cin >> a;

    while (0 < a)
    {
        somma = somma+ a;
        a = a-1;
    }
    cout << somma << endl;




    return 0;
}
