#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;
int main() {
    srand(time(NULL));
    int num, est=100000;
    double a=0, b=0, c=0, d=0, e=0;

    for (int i = 0; i < est; ++i) {
        num = rand() % 5 + 1;
        switch (num) {
            case 1:
                a++;
                break;
            case 2:
                b++;
                break;
            case 3:
                c++;
                break;
            case 4:
                d++;
                break;
            case 5:
                e++;
                break;
        }
    }
    cout << "---------------------------------------"<<endl;
    cout<<"a: "<<(a/est)*100<<"%"<<endl;
    sleep(1);
    cout<<"b: "<<(b/est)*100<<"%"<<endl;
    sleep(1);
    cout<<"c: "<<(c/est)*100<<"%"<<endl;
    sleep(1);
    cout<<"d: "<<(d/est)*100<<"%"<<endl;
    sleep(1);
    cout<<"e: "<<(e/est)*100<<"%"<<endl;

    return 0;
}
