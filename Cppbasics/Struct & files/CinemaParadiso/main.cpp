#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;



struct Prenotazione{
    string nome;
    string cognome;
    int colonna;
    char riga;
    string codice;
};

struct sala{
    int numero;
    int righe;
    int colonne;
    string film;
};

void menu() {
    cout << "---------MENU---------" << endl;
    cout << "1) Inserisci prenotazioni" <<endl;
    cout << "2) Mostra prenotazioni" << endl;
    cout << "3) Setup" << endl;
    cout << "0) Esci" << endl;
}

void Setup() {
    cout << "---------SETUP---------" << endl;
    ofstream out("Setup.csv");
    int scelta = 1;
    string sala;
    string sscielta;
    out << "numero_sala,colonne,righe,titolo";
    while (scelta != 0){
        cout << "Inserisci numero sala: " << endl;
        getline(cin, sala);
        out << sala << ",";
        cout << "Inserisci le colonne: " << endl;
        getline(cin, sala);
        out << sala << ",";
        cout << "Inserisci le righe: " << endl;
        getline(cin, sala);
        out << sala << ",";
        cout << "Inserisci il titolo del film: " << endl;
        getline(cin, sala);
        out << sala << endl;
        cout << "Premi 0 se vuoi uscire dalle impostazioni, 1 per modificare ancora" << endl;
        getline(cin, sscielta);
        scelta = stoi(sscielta);
    }
    out.close();


}

string Codice(Prenotazione p, int sala){
    string codex;
    string temp;
    codex += to_string(sala);
    temp = p.nome.substr(0, 2);
    for (int i = 0; i < temp.size(); ++i) {
        codex+= toupper(temp.at(i));
    }
    codex += to_string(p.colonna);
    temp = p.cognome.substr(0, 2);
    for (int i = 0; i < temp.size(); ++i) {
        codex+= toupper(temp.at(i));
    }
    codex += toupper(p.riga);
    codex += to_string(rand()%90 + 10);
    return codex;
}

void leggivalori()

void InsPrenot(){
    cout << "---------NUOVA PRENOTAZIONE---------" << endl;
    cout << "Scegli la sala" << endl;
    Prenotazione p;
    int sala;
    string ssala;
    getline(cin, ssala);
    sala = stoi(ssala);
    fstream out("sala" + ssala + ".csv");
    int scelta = 1;
    string sscielta;
    out << "nome,cognome,colonne,righe,codice" << endl;
    while (scelta != 0){
        cout << "Inserisci il nome " << endl;
        getline(cin, ssala);
        p.nome = ssala;
        out << ssala << ",";
        cout << "Inserisci in cognome " << endl;
        getline(cin, ssala);
        p.cognome = ssala;
        out << ssala << ",";
        cout << "Inserisci la colonna " << endl;
        getline(cin, ssala);
        p.colonna = stoi(ssala);
        out << ssala << ",";
        cout << "Inserisci la riga " << endl;
        getline(cin, ssala);
        p.riga = ssala.at(0);
        out << ssala << ",";
        out << Codice(p, sala) << endl;
        p.codice = Codice(p, sala);
        cout << "Premi 0 se vuoi uscire, 1 per aggiungere un'altro" << endl;
        getline(cin, sscielta);
        scelta = stoi(sscielta);
    }
    out.close();

}

int main() {
    srand(time(NULL));
    menu();
    //dichiaro variabili
    int scelta;
    string sscelta;
    //leggo la scelta
    getline(cin, sscelta);
    scelta = stoi(sscelta);
    while (scelta != 0){
        switch (scelta) {
            case 1:
                InsPrenot();
                break;
            case 2:
                break;
            case 3:
                Setup();
        }
        menu();
        getline(cin,sscelta);
        scelta = stoi(sscelta);
    }
    return 0;
}
