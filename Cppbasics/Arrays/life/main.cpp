#include <iostream>
using namespace std;

int main() {
    const int DIM = 20;
    bool originale[DIM][DIM], nuova[DIM][DIM];

    for (int i = 0; i < 10; ++i) {

        for (int j = 1; j < DIM-1; ++j) {
            for (int k = 1; k < DIM-1; ++k) {

                if (!originale[j][k]){
                    int vivi = 0;
                    for (int l = j - 1 ; l <= j + 2 ; ++l) {
                        for (int m = k - 1 ; m <= k + 2; ++m) {
                            if (originale[l][m])
                                vivi++;
                        }
                    }
                    if (vivi == 3)
                        nuova[j][k] = true;
                }

                if (originale[j][k]){
                    int vivi = 0;
                    for (int l = j - 1 ; l <= j + 2 ; ++l) {
                        for (int m = k - 1 ; m <= k + 2; ++m) {
                            if (originale[l][m])
                                vivi++;
                        }
                    }
                    vivi--;
                    if (vivi == 2 || vivi ==3 )
                        nuova[j][k] = true;
                    else
                        nuova[j][k] = false;
                }

               /* if (originale[j][k]){
                    int vivi = 0;
                    for (int l = j - 1 ; l <= j + 2 ; ++l) {
                        for (int m = k - 1 ; m <= k + 2; ++m) {
                            if (originale[l][m])
                                vivi++;
                        }
                    }
                    vivi--;
                    if (vivi == 2 || vivi ==3 )
                        nuova[j][k] = true;
                    else
                        nuova[j][k] = false;
               */
            }
        }
    }





    return 0;
}
