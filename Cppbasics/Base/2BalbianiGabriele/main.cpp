#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int lancio_1, lancio_2, lancio, n_lan=0;
    srand(time(NULL));
    while (lancio != 12 ) {
        lancio_1 = (rand() % 6 + 1);
        lancio_2 = (rand() % 6 + 1);
        lancio = lancio_2 + lancio_1;
        cout << "_____________" <<endl;
        cout << "dado 1: "<<lancio_1 << endl;
        cout << "dado 2: "<<lancio_2 <<endl;
        cout << "_____________" <<endl;
        cout << "il totale è: " << lancio <<endl;
        cout << "_____________" <<endl;
        n_lan++;
        if (lancio_1 == lancio_2)
            cout << "coppia di " << lancio_1 << "!" << endl;
    }
    cout << "HAI VINTO! hai impiegato "<< n_lan << " lanci per vincere" <<endl;
    return 0;
}
