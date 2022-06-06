#include <iostream>
using namespace std;

void scambio_max_min(int v[], int dim){
    int min = 0;
    int max = 1;

    for (int i = 0; i < dim; ++i) {
        if (v[i] > v[max]){
            max = i;
        }
        if (v[i] < v[min]){
            min = i;
        }
    }

    int flag;
    flag = v[max];
    v[max] = v[min];
    v[min] = flag;

}

int main() {
    const int DIM = 10;
    int v[DIM];
    for (int i = 0; i < DIM; ++i) {
        v[i]= i;
    }

    scambio_max_min(v, DIM);

    for (int i = 0; i < DIM; ++i) {
        cout << v[i] << " ";
    }
    return 0;
}
