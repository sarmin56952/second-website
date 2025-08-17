
#include <bits/stdc++.h>
using namespace std;

string process(const string &s) {
    string result;
    for (char c : s) {
        if (c != '#') {
            result.push_back(c);
        } else if (!result.empty()) {
            result.pop_back();
        }
    }
    return result;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
     string str1=process(s1);
     string str2=process(s2);
    if (str1 == str2)
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}
