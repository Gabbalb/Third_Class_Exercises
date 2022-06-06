#include <iostream>
using namespace std;

float velocita_bic (float d, int g) {
    float v = 3.1416 * d * g * 6;
    return v;
};

int main() {
    float diam, gir;
    cout << "inserisci diametro" << endl;
    cin >> diam;
    cout <<"inserisci n giri" << endl;
    cin >> gir;
    cout << velocita_bic (diam, gir) << " m/s";
    return 0;
}
