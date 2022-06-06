#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream in("covid.csv");
    if (!in){
        cout << "Apertura fallita" << endl;
        return 1;
    }
    string riga;
    int numeroriga = 1;
    getline(in, riga);
    while(getline(in, riga)){
        //estraggo la data
        string data;
        int pos = riga.find(',');
        data = riga.substr(0, pos);
        riga.erase(0, pos + 1); //+1 pk tolgo anche la virgola
        cout << "Data: " << data.substr(0, 10);
        //elimino la nazione
        pos = riga.find(',');
        riga.erase(0, pos + 1); //+1 pk tolgo anche la virgola

        //recupero i ricoverati con sintomi
        string ricoverati_str;
        pos = riga.find(',');
        ricoverati_str = riga.substr(0, pos);
        riga.erase(0, pos + 1);

        cout << " | Ricoverati: " << ricoverati_str;
        int ricoverati = stoi(ricoverati_str);

        //recupero i malati di terapia intensiva
        //recupero i ricoverati con sintomi
        string intensiva_str;
        pos = riga.find(',');
        intensiva_str = riga.substr(0, pos);
        riga.erase(0, pos + 1);

        cout << " | Intensiva: " << intensiva_str << endl;

        numeroriga++;
    }
    in.close();
    return 0;
}
