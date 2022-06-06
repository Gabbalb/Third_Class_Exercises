#include <iostream>
using namespace std;

int main() {
    int alunni;
    int altezza, maxa = 0, mina =1000;
    int peso, maxp = 0, minp = 1000;
    cin >> alunni;
    for (int i = 0; i < alunni; ++i) {
        cin >> altezza >> peso;
        if (altezza > maxa)
            maxa = altezza;
        if (altezza < mina)
            mina = altezza;
        if (peso > maxp)
            maxp = peso;
        if (peso < minp)
            minp = peso;
    }
    cout << maxa - mina <<" "<<maxp - minp;
    return 0;
}
