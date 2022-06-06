#include <iostream>
using namespace std;

int main() {
    int DIM = 1000;
    int v[DIM];
    int n;
    int somma = 0;
    int vinto = 0;
    int vinc[DIM];
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n; ++i) {
        somma += v[i];
    }

    if (somma%2 == 0){
        for (int i = 0; i < n; ++i) {
            if (v[i]%2 == 0){

                vinc[vinto] = i + 1;
                vinto++;
            }
        }
    } else {
        for (int i = 0; i < n; ++i) {
            if (v[i]%2 != 0){

                vinc[vinto] = i + 1;
                vinto++;
            }
        }
    }

    cout << vinto << endl;

    for (int i = 0; i < vinto; ++i) {
        cout <<  vinc[i]  << " ";
    }

    return 0;
}
