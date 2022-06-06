#include <iostream>
using namespace std;

struct Acquirente {
    string nome;
    string cognome;
};

struct Auto {
    string marca;
    int cilindrata;
    int annoImmatric;
    Acquirente acquirente;
};

void menu (){
    cout << "1) Inserisci una nuova auto" << endl;
    cout << "2) Visualizza proprietari macchine cc > 1500" << endl;
    cout << "3) Immatricolate in un anno specifico" << endl;
    cout << "0) Esci... " << endl;
}


void Registra (Auto &a){
    cout << "Inserisci la marca: ";
    cin >> a.marca;
    cout << "Inserisci la cilindrata: ";
    cin >> a.cilindrata;
    cout << "Inserisci anno di immatricolazione: ";
    cin >> a.annoImmatric;
    cout << "Inserisci il nome dell'acquirente: ";
    cin >> a.acquirente.nome;
    cout << "Inserisci il cognome dell'acquirente: ";
    cin >> a.acquirente.cognome;
}

int inizzializza_esempi (Auto v[])
{
    v[0]={
            "Fiat",
            1600,
            2020,
            {
                "Gianni",
                "Morandi"
            }
    };
    v[1]={
            "Audi",
            2000,
            2020,
            {
                    "Fiorella",
                    "Mannoia"
            }
    };
    v[2]={
            "Dacia",
            1400,
            2020,
            {
                    "Gino",
                    "Paoli"
            }
    };
    return 3;
}


int main() {
    const int MACCHINE = 10;
    Auto autosalone[MACCHINE];
    int macchine_vendute = inizzializza_esempi(autosalone);
    int scelta = -1;
    menu();
    cout << "inserisci la scelta: ";
    cin >> scelta;
    while (scelta != 0){

        switch (scelta) {
            case 1:
                Registra(autosalone[macchine_vendute]);
                macchine_vendute++;
                break;
            case 2:
                for (int i = 0; i < macchine_vendute; ++i) {
                    if (autosalone[i].cilindrata > 1500){
                        cout<< autosalone[i].acquirente.nome <<" " << autosalone[i].acquirente.cognome << endl;
                    }
                }
                break;
            case 3:
                int anno;
                cout << "Inserisci l'anno specifico: ";
                cin >> anno;
                for (int i = 0; i < macchine_vendute; ++i) {
                    if (autosalone[i].annoImmatric == anno){
                        cout<< autosalone[i].marca <<" " << autosalone[i].cilindrata << endl << autosalone[i].acquirente.nome <<" " << autosalone[i].acquirente.cognome << endl;
                    }
                }
                break;
            default:
                cout << "[ !WARNING! ] Hai inserito un opzione non valida [ !WARNING! ]";
                break;
        }

        menu();
        cout << "inserisci la scelta: ";
        cin >> scelta;
    }

    return 0;
}
