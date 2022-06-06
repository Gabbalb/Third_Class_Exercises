#include <iostream>
using namespace std;
int main() {
    int num_1, num_2, cont=2;
    cout << "inserisci un numero: " <<endl;
    cin >> num_1;
    num_2 = num_1 + 1;
    cout << "inserisci un numero: " <<endl;
    cin >> num_2;
    while (num_1 < num_2){
            num_1=num_2;
            cout << "inserisci un numero: " <<endl;
            cin >> num_2;
        cont++;
    }
    cout << "sono stat inseriti "<< cont << " numeri" <<endl;

    return 0;
}
