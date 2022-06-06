#include <iostream>

using namespace std;


//definisco la struttura prima di qualsiasi cosa con la prima lettera maiuscola per *convenzione*
struct Persona{
    string nome;
    string cognome;
    string telefono;
};


//funzione di stampa *facoltativa*
//stampa i dati di una persona come lo ritiene opportuno
void stampa_struct(const Persona &p){
    cout << "Nome: " << p.nome << endl;
    cout << "Cognome: " << p.cognome << endl;
    cout << "Telefono: " << p.telefono << endl;
}

int main() {
    int n;
    Persona p;
    Persona r;
    //assegnamento
    //si può fare campo per campo, dove ogni campo è un attributo specifico della struttura
    cin >> p.nome;
    cin >> p.cognome;
    cin >> p.telefono;
    stampa_struct(p);
    r = p;
    r.nome = "Giovanni";
    //per I/0 nn si può usare direttamente cin cout ma bisogna fare una funzione con i dati nativi;
    stampa_struct(r);
    //a seconda di come li ho dichiarati i campi si comportano come tali
    //oppure posso assegnare una variabile di un tipo a un'altra variabile dello stesso tipo
    cout << p.nome.size() << endl;

    return 0;
}