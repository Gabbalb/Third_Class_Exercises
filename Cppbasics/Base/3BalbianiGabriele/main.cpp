#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, k, acc = 1, calc;
    do {
        cout << "inserisci il primo numero" <<endl;
        cin >> n;
        cout << "inserisci il secondo numero" <<endl;
        cin >> k;
    } while (n<0 || k<0);

    while ( acc != 0){
        cout << "decidi cosa fare, premi: " <<endl;
        cout << "(1) per sommare" << endl;
        cout << "(2) per sottrarre" << endl;
        cout << "(3) per moltiplicare" << endl;
        cout << "(4) per dividere" << endl;
        cout << "(5) per elevare il primo per il secondo numero" << endl;
        cout << "(6) per effettuare la radice quadrata dei 2 numeri" << endl;
        cout << "(7) per cambiare i numeri" << endl;
        cout << "(0) per spegnere la calcolatrice" << endl;
        cin >> calc;
        switch (calc) {
            case 1:
                cout << (n+k) << endl;
                break;
            case 2:
                cout << (n-k) << endl;
                break;
            case 3:
                cout << (n*k) <<endl;
                break;
            case 4:
                cout << (n/k) <<endl;
                break;
            case 5:
                cout << pow(n,k) <<endl;
                break;
            case 6:
                cout << "la radice del primo numero è: "<<sqrt(n) <<endl;
                cout << "la radice del secondo numero è: " << sqrt(k) <<endl;
                break;
            case 7:
                do {
                    cout << "inserisci il primo numero" <<endl;
                    cin >> n;
                    cout << "inserisci il secondo numero" <<endl;
                    cin >> k;
                } while (n<0 || k<0);
                break;
            case 0:
                acc = 0;
                break;
        }
    }

    return 0;
}
