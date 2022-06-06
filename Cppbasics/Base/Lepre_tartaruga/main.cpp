#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;
int main() {
    srand(time(NULL));
    const int TRAGUARDO = 60;

    int lepre=0, tartaruga = 0;
    cout << "Corsa della lepre e della tartaruga - 2021" <<endl;
    while (lepre < TRAGUARDO && tartaruga < TRAGUARDO){
        int mossa_tartaruga = rand()%100;
        if (mossa_tartaruga < 50){
            tartaruga += 3;
        }
        else if (mossa_tartaruga < 70) {
            tartaruga -= 6;
        }
        else{
            tartaruga++;
        }
        if (tartaruga < 0){
            tartaruga = 0;
        }
        int mossa_lepre = rand()%100;
        if (mossa_lepre < 20){
            lepre +=9;

        }
        else if (mossa_lepre < 30) {
            lepre -= 12;
        }
        else if (mossa_lepre < 60){
            lepre ++;
        }
        else if (mossa_lepre < 80){
            lepre -= 2;
        }
        if (lepre < 0){
                lepre = 0;
        }
        if (tartaruga < 0){
            tartaruga = 0;
        }
        cout << "T : " <<tartaruga <<endl;
        cout << "L : " <<lepre <<endl;
        for (int i = 0; i < tartaruga; ++i) {
            cout << " ";

        }
        cout << "T"<< endl;
        for (int i = 0; i < lepre; ++i) {
            cout << " ";

        }
        cout << "L"<< endl;
        sleep (1);
    }
    if (tartaruga > lepre){
        cout << "Ha vinto la tartaruga" <<endl;
    }
    else if ( tartaruga < lepre)
        cout << "Ha vinto la lepre" <<endl;
    else
        cout << "pareggio" <<endl;


    return 0;
}
