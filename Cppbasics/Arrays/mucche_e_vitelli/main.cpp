#include <iostream>
using namespace std;


int main() {
    const int CAPIMAX = 10000;
    int pesocapo[CAPIMAX];
    int n;
    int Mucche[CAPIMAX];
    int Vitelli[CAPIMAX];
    int nvit = 0;
    int nmuc = 0;
    cin >> n;

    //conto i capi
    for (int i = 0; i < n; ++i) {
        cin >> pesocapo[i];
    }

    //divido tra mucche e vitelli
    for(int i = 0; i < n; ++i){
        if (pesocapo[i] <= 150) {
            nvit++;
            Vitelli[nvit] = pesocapo[i];
        } else {
            nmuc++;
            Mucche[nmuc] = pesocapo[i];
        }
    }

    //media vitelli

    int sommav = 0;
    int mediav;
    for (int i = 0; i < nvit ; ++i) {
        sommav += Vitelli[i];
    }
    mediav = sommav/nvit;



    //media mucche

    int sommam = 0;
    int mediam;
    for (int i = 0; i < nmuc ; ++i) {
        sommam += Mucche[i];
    }
    mediam = sommam/nmuc;

    //vitelli nella media
    int vitnelmedia= 0;
    for (int i = 0; i < nvit; ++i) {
        if (Vitelli[i] >= mediav){
            vitnelmedia++;
        }
    }
    cout << vitnelmedia << " ";

    //mucche nella media
    int mucnelmedia= 0;
    for (int i = 0; i < nmuc; ++i) {
        if (Mucche[i] >= mediam){
            mucnelmedia++;
        }
    }
    cout << mucnelmedia << endl;


    return 0;
}
