#include <iostream>
#include <iomanip>

using namespace std;

float media (float s, int n){
    float med = s/n;
    return med;
}

int main() {
    float n = 0, somma = 0;
    int giro = 0;
    cin >> n;
    while (n != -1) {
        if (n != -1) {
            somma += n;
            giro++;
            cin >> n;
        }
        else{
            break;
        }
    }
    cout << fixed << setprecision(2) << media(somma, giro);
    return 0;
}
