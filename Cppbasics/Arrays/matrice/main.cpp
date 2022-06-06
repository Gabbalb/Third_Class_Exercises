#include <iostream>
#include <ctime>

using namespace std;


int main() {
    const int DIM = 9;
     int m[DIM][DIM];
    srand(time(NULL));

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            m[i][j] = rand()%10;
        }
    }

    int zeri = 0;

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            if (m[i][j] == 0) {
                zeri++;

            }
        }
    }


    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            cout << m[i][j] << "  ";
        }
        cout << endl;
    }

    cout << "---------------------------" << endl;
    cout << "Gli zeri sono: " << zeri << endl;
    cout << "---------------------------" << endl;
    return 0;
}
