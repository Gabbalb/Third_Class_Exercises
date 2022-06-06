#include <iostream>
#include <fstream>

using namespace std;

int main() {
    //Esempio con input
    ifstream in("input.txt");
    ofstream out("output.txt");
    //se l'apertura del file non è riuscita
    if (!in) {
        cout << "[ERROR 404] File impossibile da aprire; " << endl;
        return 404;
    }
    if (!out){
        cout << "[ERROR 403] File non presente da aprire, generazione di un file sostitutivo in corso... " << endl;
    }
    int n;
    in >> n;

    for (int i = 0; i < n; ++i) {
        float temp;
        in >> temp;
        cout << i+1 << " -> " << temp << endl;
        out << i+1 << " -> " << temp/3 << endl;
    }



    return 0;
}
