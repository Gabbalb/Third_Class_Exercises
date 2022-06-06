#include <iostream>
using namespace std;
int main() {
    int giorni=0, dolcetti=0, toast=0, focacce=0, pizzette=0;
    float credito;
    char cibo;
    cout << "inserisci il credito" <<endl;
    cin >> credito;
    while (credito >= 2){

        do {
            cout << "_________________________________________" <<endl;
            cout << "inserisci l'alimento che mangerà oggi" <<endl;
            cout << "scrivi (d) per i dolcetti" <<endl;
            cout << "scrivi (t) per i toast" <<endl;
            cout << "scrivi (p) per le pizzette" <<endl;
            cout << "scrivi (f) per le focacce" <<endl;
            cout << "_________________________________________" <<endl;
            cin >> cibo;
        } while (cibo != 'd'&& cibo != 't'&& cibo != 'p'&& cibo != 'f');

        switch (cibo) {
            case 'd':
                credito--;
                dolcetti++;
                break;
            case 't':
                credito -= 1.5;
                toast++;
                break;
            case 'p':
                credito -= 1.3;
                pizzette++;
            case 'f':
                credito -= 2;
                focacce++;
        }
        giorni++;

    }
    cout << "_________________________________________" <<endl;
    cout << "lo studente ha mangiato "<< giorni << " giorni" <<endl;
    cout << "lo studente ha mangiato "<< dolcetti << " dolcetti" <<endl;
    cout << "lo studente ha mangiato "<< toast << " toast" <<endl;
    cout << "lo studente ha mangiato "<< pizzette << " pizzette" <<endl;
    cout << "lo studente ha mangiato "<< focacce << " focacce" <<endl;
    cout << "il credito residuo è di: "<< credito << " euro" <<endl;
    cout << "_________________________________________" <<endl;


    return 0;
}
