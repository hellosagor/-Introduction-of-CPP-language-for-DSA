#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string sortcharacter(string s) {
    sort(s.begin(), s.end());
    return s;
}

int main() {
    string s;
    while (getline(cin, s)) {
        cout << sortcharacter(s) << endl;
    }
    return 0;
}
