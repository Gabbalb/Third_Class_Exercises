#include <iostream>
#include <ctime>
#include <unistd.h>

using namespace std;
int main() {
    srand(time(NULL));
    int num, est=100000;
    double a=0, b=0, c=0, d=0, e=0, f=0;
    double a_p=0, b_p=0, c_p=0, d_p=0, e_p=0, f_p=0;


    for (int i = 0; i < est; ++i) {
        num = (rand() % 3 + 1) + (rand()%3 + 1);
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
            case 6:
                f++;
                break;
        }
    }
    cout << "---------------------------------------"<<endl;
    a_p=(a/est)*1000;
    cout<<"a: "<<(a/est)*100<<"%"<<endl;
    for (int i = 0; i < a_p/100; ++i) {
        cout <<"x";

    };
    cout <<endl;
    sleep(1);
    b_p=(b/est)*100;
    cout<<"b: "<<(b/est)*100<<"%"<<endl;
    for (int i = 0; i < (b_p/100); ++i) {
        cout <<"x";
    }
    cout <<endl;
    sleep(1);
    c_p=(c/est)*1000;
    cout<<"c: "<<(c/est)*100<<"%"<<endl;
    for (int i = 0; i < (c_p/100); ++i) {
        cout <<"x";
    }
    cout <<endl;
    sleep(1);
    d_p=(d/est)*100;
    cout<<"d: "<<(d/est)*100<<"%"<<endl;
    for (int i = 0; i < (d_p/100); ++i) {
        cout <<"x";
    }
    cout <<endl;
    sleep(1);
    e_p=(e/est)*1000;
    cout<<"e: "<<(e/est)*100<<"%"<<endl;
    for (int i = 0; i < (e_p/100); ++i) {
        cout <<"x";
    }
    cout <<endl;
    sleep(1);
    f_p=(f/est)*1000;
    cout<<"f: "<<(e/est)*100<<"%"<<endl;
    for (int i = 0; i < (f_p/100); ++i) {
        cout <<"x";
    }
    cout <<endl;

    return 0;
}
