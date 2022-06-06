#include <iostream>

using namespace std;

int main() {
    const int MAX = 100;
    int bimbi[MAX];
    int eliminati[MAX];

    int giocatori , sillabe;

    cin >> giocatori;
    cin >> sillabe;

    for (int i = 0; i < giocatori; ++i) {
        bimbi[i] = i;
    }

    for (int i = 0; i < giocatori - 1 ; ++i) {
        for (int j = 0; j < sillabe; ++j) {
            if (bimbi[i] == -1) {
                i--;
            }
            if (i == sillabe) {
                bimbi[i] = -1;
            }
        }
    }

    for (int i = 0; i < giocatori; ++i) {
        if ( bimbi[i] > -1){
            cout << bimbi[i];
        }
    }
    return 0;
}
