#include <iostream>
#include <fstream>
using namespace std;

const int NMATERIE = 2;
const int NESAMI = 2;

struct Esame {
    string data;
    string materia;
    int voto;
};

struct Studente {
    string nome;
    string cognome;
    string matr;
    string materie[NMATERIE];
    Esame test[NESAMI];
};

Studente parsing(string riga){
    Studente studente;
    int pos = riga.find(';');
    studente.nome = riga.substr(0, pos);
    int pos_prec = pos;
    pos = riga.find(';');
    studente.cognome = riga.substr(pos_prec+1, pos);
    pos_prec = pos;
    pos = riga.find(';');
    studente.matr = riga.substr(pos_prec+1, pos);
    pos_prec = pos;
    return studente;
}


int carica_file(Studente studente[], string filename){
    ifstream in(filename);
    if (!in){
        return -1;
    }
    string temp;
    int contatore = 0;
    while (getline(in, temp)){
        studente[contatore] = parsing(temp);
        contatore++;
    }
    return 0;
}

void Database (Studente studente[], int Nstud, string nomefile){
    ifstream in(nomefile);
    for (int i = 0; i < Nstud; ++i) {
        in >> studente[i].nome;
        in >> studente[i].cognome;
        in >> studente[i].matr;
        for (int j = 0; j < NMATERIE; ++j) {
            in >> studente[i].materie[j];
        }
        for (int j = 0; j < NESAMI; ++j) {
            in >> studente[i].test[j].data;
            in >> studente[i].test[j].materia;
            in >> studente[i].test[j].voto;
        }
    }
}

void ScriviDatabase (Studente studente[], int Nstud, string nomefile){
    ofstream on("nomefile.txt");
    for (int i = 0; i < Nstud; ++i) {
        on << studente[i].nome << endl;
        on << studente[i].cognome<< endl;
        on << studente[i].matr<< endl;
        for (int j = 0; j < NMATERIE; ++j) {
            on << studente[i].materie[j]<< endl;
        }
        for (int j = 0; j < NESAMI; ++j) {
            on << studente[i].test[j].data<< endl;
            on << studente[i].test[j].materia<< endl;
            on << studente[i].test[j].voto<< endl;
        }
    }
}

void Menu (){
    cout << "1) Conoscere il numero di studenti che hanno sostenuto l'esame in una determinata materia" <<endl;
    cout << "2) Visualizzare gli studenti che hanno un voto compreso tra 18 e 25" <<endl;
    cout << "3) Visualizzare le date degli appelli di una materia in un anno" << endl;
    cout << "4) Avere una stampa dei dati dello studente con numero di matricola dato (elenco degli esami sostenuti con data e voto)" << endl;
    cout << "5) Uscita" << endl;
};


int main() {

    int Nstud = carica_file(studente, nomefile);
    string nomefile = "database.txt";
    Studente studente[Nstud];
    if (Nstud = -1){
        cout <<"non è stato trovato alcun file" << endl;
    }
    Database(studente, Nstud, nomefile);
    ScriviDatabase(studente, Nstud, "Scrividatabase.txt");
    Menu();


    return 0;
}
