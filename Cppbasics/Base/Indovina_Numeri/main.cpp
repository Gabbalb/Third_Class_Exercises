#include <iostream>
#include <ctime>

/* fatto con Davide zola
 * sono state implememntate tutte le funzionalità
 */

using namespace std;

int main() {
    const int MAX = 10000;
    const int VAR = 5;
    srand(time(NULL));

    int numero_da_indovinare = rand()%MAX + 1;
    int count=0;
    int money;
    int prize = 0;
    int tentativo;
    cout <<  " ___   __    _  ______   _______  __   __  ___   __    _  _______ \n"
             "|   | |  |  | ||      | |       ||  | |  ||   | |  |  | ||   _   |\n"
             "|   | |   |_| ||  _    ||   _   ||  |_|  ||   | |   |_| ||  |_|  |\n"
             "|   | |       || | |   ||  | |  ||       ||   | |       ||       |\n"
             "|   | |  _    || |_|   ||  |_|  ||       ||   | |  _    ||       |\n"
             "|   | | | |   ||       ||       | |     | |   | | | |   ||   _   |\n"
             "|___| |_|  |__||______| |_______|  |___|  |___| |_|  |__||__| |__|" <<endl;
    cout << " ___   ___        __    _  __   __  __   __  _______  ______    _______ \n"
            "|   | |   |      |  |  | ||  | |  ||  |_|  ||       ||    _ |  |       |\n"
            "|   | |   |      |   |_| ||  | |  ||       ||    ___||   | ||  |   _   |\n"
            "|   | |   |      |       ||  |_|  ||       ||   |___ |   |_||_ |  | |  |\n"
            "|   | |   |___   |  _    ||       ||       ||    ___||    __  ||  |_|  |\n"
            "|   | |       |  | | |   ||       || ||_|| ||   |___ |   |  | ||       |\n"
            "|___| |_______|  |_|  |__||_______||_|   |_||_______||___|  |_||_______|" <<endl;



        do {
            cout << "-----------------------------------  " << endl;
            cout << "inserisci il credito (massimo €500): " << endl;
            cout << "-----------------------------------  " << endl;
            cin >> money;
            prize += 0.5 * money;
        } while (money > 500);

        for (int i = 1; i > 0; ++i) {
            cout << "------------------------------------------------" << endl;
            cout << "INIZIO GIRO: Indovina il numero che ho pensato: " <<endl;
            cout << "------------------------------------------------" << endl;
            cin >> tentativo;
            while (tentativo != numero_da_indovinare) {
                if (tentativo > numero_da_indovinare) {
                    cout << "Il numero è troppo grande, riprova" << endl;
                } else {
                    cout << "Il numero è troppo piccolo, riprova" << endl;
                }
                cout << "Indovina il numero che ho pensato: ";
                cin >> tentativo;
                count++;
                prize -= (prize * 0,10);
                money -= 10;
                cout << "il tuo credito residuo è pari a: " << money << endl;
                cout << "il premio attuale è pari a: " << prize << endl;
                numero_da_indovinare += rand()%VAR + 3;

                if (money < 10) {
                    cout << "-------------------------------- " << endl;
                    cout << "il credito è insufficiente, inserisci un'altro importo: " << endl;
                    cout << "-------------------------------- " << endl;
                    do {
                        cout << "-------------------------------- " << endl;
                        cout << "inserisci il credito (massimo €500): " << endl;
                        cout << "-------------------------------- " << endl;
                        cin >> money;
                    } while (money > 500);
                }
            }
            money += 20;
        }
    cout << "Complimenti! hai indovinato il numero dopo " << count << " tentativi!" <<endl;

    return 0;
}
