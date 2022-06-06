#include <iostream>
using namespace std;
int main() {
    int alunni, voti;
    float media=0, voto;
    cout << "inserisci quanti alunni vuoi valutare: " << endl;
    cin >> alunni;
    cout << "inserisci quanti voti vuoi mettere: " << endl;
    cin >> voti;

    for (int i = 1; (i-1) < alunni ; ++i) {
        //ho incrementato di 1 la variabile i per poterla usare nell'output alla fine del for
        for (int j = 0; j < voti; ++j) {
            cout << "alunno " << i << " inserisci il voto: " << endl;
            cin >> voto;
            media += voto;
        }
        media /= 5;
        cout << "la media del " << i << "^ alunno è: " << media <<endl;
    }
    return 0;
}
