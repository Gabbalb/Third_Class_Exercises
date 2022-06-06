#include <iostream>
using namespace std;

void meta_secondo (int &n1, int &n2, int &n3){

    if((n1 >= n2) && (n1 >= n3)){
        //n1
        if (n2 < n1)
            n1 -= n2/2;
        else
            n1 -= n3/2;
    }
    else if ((n2 >= n1) && (n2 >= n3)){
        //n2
        if (n1 < n3)
            n2 -= n1/2;
        else
            n2 -= n3/2;
    }
    else{
        //n3
        if (n1 < n2)
            n3 -= n1/2;
        else
            n3 -= n2/2;
    }
    }

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    meta_secondo(a, b, c);
    meta_secondo(a, b, c);
    meta_secondo(a, b, c);
    cout << a << " " << b << " " << c <<endl;
    return 0;
}
