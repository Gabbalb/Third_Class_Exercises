#include <iostream>
#include<fstream>

using namespace std;

int main() {
    const int ORA = 60;
    float v[ORA];
    float ris[ORA];

    ofstream fout("miofile.xls");

    for (int i = 0; i < ORA; ++i) {
        v[i] = rand()%30;
    }

    ris[0] =((2*v[0] )+ v[1])/3;
    ris[ORA-1] = ((2 * v[ORA -1 ]) + v[ORA -2])/3;
    for (int i = 1; i < ORA -1; ++i) {
            ris[i] =  (v[i + 1] + v [i] + v [i+1])/3;
    }

    for (int i = 0; i < ORA; ++i) {
        cout << v[i] << " | "<< ris[i] << endl;
        cout << "                      " << endl;
        fout<< v[i] << "    ||    " << ris[i] << endl;
    }

    fout.close();



    return 0;
}
