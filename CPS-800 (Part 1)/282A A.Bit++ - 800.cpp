#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    if (!(cin >> n))
    return 0;

    int x = 0;
    for (int i = 0; i < n; ++i) {
        string s;
        cin >> s; 
        if (s.find("++") != string::npos) ++x;
        else if (s.find("--") != string::npos) --x;
    }

    cout << x << "\n";
    return 0;
}