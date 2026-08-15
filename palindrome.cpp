#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string str, rev_str;
    cout << "Enter a string: ";
    cin >> str;

    rev_str = str;
    reverse(rev_str.begin(), rev_str.end());

    if (str == rev_str) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}
