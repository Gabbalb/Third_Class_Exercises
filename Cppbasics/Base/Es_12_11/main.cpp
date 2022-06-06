#include <iostream>
//disegna a schermo 2 segmenti uguali e perpendicolari fra loro formati da un carattere a scelta da input le dimensioni dei segmenti

using namespace std;

int main() {
    char carattere;
    int lunghezza;
    cout << "inserisci la lunghezza del lato" <<endl;
    cin >> lunghezza;
    cout << "inserisci il carattere" <<endl;
    cin >> carattere;
    for (int i = 0; i < lunghezza +1; ++i){
        if (i== 0 || i == lunghezza){
            for (int j = 0; j < lunghezza -1; ++j) {
                cout << carattere <<"  ";
                }
            cout << endl;
        }
        else{
            cout << carattere;
            for (int j = 0; j < lunghezza -2 ; ++j) {
                cout << "   ";
            }
            cout << carattere <<endl;
        }

    }

    return 0;
}
