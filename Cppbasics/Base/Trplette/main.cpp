#include <iostream>
using namespace std;

int Inter (int n1, int n2, int n3){
    if ((n1 == n2) || (n2 == n3 ))
        return n2;
    else if (n1 == n3)
        return n3;
    else
        return -1;
}

int main() {
    int n1, n2, n3, n4, n5, n6;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;
    if (Inter(n1, n2, n3) > Inter(n4, n5, n6)){
        cout << Inter(n1, n2, n3);
    }
    else
        cout << Inter(n4, n5, n6);
    return 0;
}
