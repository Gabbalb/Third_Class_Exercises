#include <iostream>
using namespace std;
const int MAX = 1000;
int c[MAX][MAX];


int main() {

    int n, s, m;


    cin >> n;
    cin >> m;
    cin >> s;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> c[i][j];
        }
    }

    //controllo

    int max = c[0][0];
    int min = c[0][0];
    int riga = 0;
    int colonna = 0;
    int rigam = 0;
    int colonnam = 0;

        if (s == 1) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (max < c[i][j]) {
                        max = c[i][j];
                        riga = i;
                        colonna = j;
                    }
                }
            }
            cout << max << " " << riga << " " << colonna << endl;
        }

        else if (s == 2) {
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (min > c[i][j]) {
                        min = c[i][j];
                        riga = i;
                        colonna = j;
                    }
                }
            }
            cout << min << " " << riga << " " << colonna << endl;
        }
        else if ( s == 3 ){

            //max
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (max < c[i][j]){
                        max = c[i][j];
                        riga = i;
                        colonna = j;
                    }
                }
            }

            //min
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < m; ++j) {
                    if (min > c[i][j]){
                        min = c[i][j];
                        rigam = i;
                        colonnam = j;
                    }
                }
            }

            //ricerca chi più in alto e chi più a sx
            int alto, sx, basso, dx;

            if (riga < rigam){
                alto = riga;
                basso = rigam;
            } else {
                alto = rigam;
                basso = riga;
            }

            if (colonna < colonnam){
                sx = colonna;
                dx = colonnam;
            } else {
                sx = colonnam;
                dx = colonna;
            }

            int area = 0;

            for (int i = alto; i <= basso; ++i) {
                for (int j = sx; j <= dx; ++j) {
                    area += c[i][j];
                }
            }

            cout << area;
    }





    return 0;
}
