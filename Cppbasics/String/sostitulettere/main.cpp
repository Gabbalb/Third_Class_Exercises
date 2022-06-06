#include <iostream>

using namespace std;

int main() {
    string s;
    string t;
    cin >> s >> t;

    string flag;

    flag = s.at(s.size()-2);
    flag += s.at(s.size()-1);

    s.erase(s.size()-2);

    s += t.at(t.size()- 2);
    s += t.at(t.size() -1);

    t.erase(t.size()-2);

    t += flag;

    cout << s << endl << t << endl;
    return 0;
}
