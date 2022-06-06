#include <iostream>

using namespace std;
int main() {
    float temp;
    char udm, convertitore;
    cout << "inserisci la temperatura" <<endl;
    cin >> temp;
        do {
            cout << "Inserisci l'unità di misura selezionando 'C' se in Celsius, 'F' se in Fahrenheit, 'K' se in Kelvin" <<endl;
            cin >> udm;
        } while (udm !='C' && udm !='F' && udm !='K');

    do {
        cout << "Inserisci l'unità di misura selezionando 'C' se in Celsius, 'F' se in Fahrenheit, 'K' se in Kelvin" <<endl;
        cin >> convertitore;
    } while (convertitore !='C' && convertitore !='F' && convertitore !='K');

    switch (udm) {
        case 'C':
            switch (convertitore) {
                case 'C':
                    cout << temp << endl;
                    break;
                case 'F':
                    temp = (temp * 9 / 5) + 32;
                    cout << temp << endl;
                    break;
                case 'K':
                    temp = temp + 273.15;
                    cout << temp << endl;
                    break;
                    break;
            }
        case 'F':
            switch (convertitore) {
                case 'C':
                    temp = (temp - 32) * 5 / 9;
                    cout << temp << endl;
                    break;
                case 'F':
                    cout << temp << endl;
                    break;
                case 'K':
                    temp = (temp - 32) * 5 / 9 + 273.15;
                    cout << temp << endl;
                    break;
                    break;
            }
        case 'K':
            switch (convertitore) {
                case 'C':
                    temp = temp - 273.15;
                    cout << temp << endl;
                    break;
                case 'F':
                    temp = (temp - 273.15) * 9 / 5 + 32;
                    cout << temp << endl;
                    break;
                case 'K':
                    cout << temp << endl;
                    break;
                    break;
            }
    }
    return 0;
}
