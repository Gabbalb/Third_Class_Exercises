#include <iostream>

using namespace std;

int main() {

    int mese;
    int giorni;
    cout << "inserisci il numero del mese"<< endl;
    cin >> mese;
    if (mese == 1 || mese == 3 || mese == 5 || mese == 7 || mese == 8 || mese == 10 || mese == 12){
        giorni = 31;
    }
    else {
        if (mese == 2) {
            giorni = 28;
        }
        else {
            giorni = 30;
        }
    }
    for (int i = 1; i <= giorni; ++i) {
        cout << i << " ";

    }

    return 0;
}
