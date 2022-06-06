#include <iostream>
using namespace std;

int main() {
    int n, a, somma=0, media=0;
    cout << "insersci quanti numeri vuoi" <<endl;
    cin >> n;
    cout << "inserisci il numero di partenza" <<endl;
    cin >> a;
    a++;
    for (int i = 0; i <= n; ++i) {
        if (a%2==0) {

            cout << a << endl;
            somma += a;
            media = somma / i;
        }
            a++;
    }
    cout << "la somma è: " << somma <<endl;
    cout << "la media è: "<< media <<endl;

    return 0;
}
