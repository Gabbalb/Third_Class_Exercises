#include <iostream>

using namespace std;

void fattorizzazione (int n){
    int k = 2;
    int nk = 0;
    while (n > 2) {
        while (n % k == 0) {
            n /= k;
            nk++;
        }
        k++;
    }
    cout << k - 1;
    }
    /*non sono riuscito a capire come scrivere quante volte è uscito il massimo
     * perchè nk è il numero di volte in cui fa il ciclo ma non sapevo come sottrargli
     * i divisori inferiori, o non sapevo dove azzerare perchè fuori dal ciclo interno azzerare comportava
     * azzerare anche alla fine e per risolvere non sapevo che condizione mettere all'eventuale if
     * per azzerare la varibile
     */

int main() {
    int n;
    cin >> n;
    fattorizzazione(n);
    return 0;
}
