#include <iostream>
using namespace std;

int main() {
    /*char stringac2[] = "ci";
    cin >> stringac2;
    cout << " ciao " << stringac2 << endl;

    string stringaccp = "ciao";


    //concatenazione C
    char concatenazione[100];
    char nome[20];
    */

    //concatenazione c++
    string risultatocpp;
    string nomecpp = "gay";
    risultatocpp = "ciao " + nomecpp;
    cout << risultatocpp <<endl;
    risultatocpp += nomecpp;
    cout << risultatocpp <<endl;

    for (int i = 0; i < 10; ++i) {
        risultatocpp += " - " + nomecpp;
    }
    cout << risultatocpp <<endl;

    string eco = "ga";
    for (int i = 0; i < 10; ++i) {
        eco += "y ";
        cout << eco << endl;
    }

    string primaCpp = "gayyyyy";
    string vetti="vetti";

    if (vetti < primaCpp){
        cout << "vetti sei etero" << endl;
    } else{
        cout << "vetti sei gay" << endl;
    }

    return 0;
}
