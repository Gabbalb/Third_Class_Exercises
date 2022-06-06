#include <iostream>
#include <ctime>
using namespace std;


int main() {
    srand(time(NULL));
    const int DIM = 6;
    int originale[DIM][DIM];
    int pari[DIM/2][DIM/2];
    int dispari[DIM/2][DIM/2];

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            originale[i][j] = rand()%100 + 1;
        }
    }
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
           if (originale[i][j]%2 == 0){
               pari[k][l] = originale[i][j];
               if (k == (DIM)-1) {
                   k = 0;
                   l++;
               } else{
                   k++;
               }
           }
           else {
               dispari[m][n] = originale [i][j];
               if (m == (DIM)-1) {
                   m = 0;
                   n++;
               } else{
                   m++;
               }
           }
        }
    }

    //unisco matrici

    for (int i = 0; i < DIM/2; ++i) {
        for (int j = 0; j < DIM/2; ++j) {
            originale[i][j] = pari[i][j];
        }
    }

    for (int i = DIM/2 + 1; i < DIM; ++i) {
        for (int j = DIM/2 + 1; j < DIM; ++j) {
            originale[i][j] = dispari[i][j];
        }
    }

    for (int i = 0; i < DIM; ++i) {
        for (int j = 0; j < DIM; ++j) {
            cout << originale [i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
