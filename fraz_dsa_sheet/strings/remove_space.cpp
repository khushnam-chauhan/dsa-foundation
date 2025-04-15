//Remove leading, trailing, and extra spaces in a string.
#include <iostream>
#include <string>
using namespace std;

void trimAndCollapseSpaces(string &s) {
    int n = s.length();
    int i = 0, j = 0;

    // Skip leading spaces
    while (i < n && s[i] == ' ') i++;

    bool inSpace = false;

    while (i < n) {
        if (s[i] != ' ') {
            s[j++] = s[i++];
            inSpace = false;
        } else {
            if (!inSpace) {
                s[j++] = ' ';
                inSpace = true;
            }
            i++;
        }
    }

    // Remove trailing space
    if (j > 0 && s[j - 1] == ' ') j--;

    s.resize(j); // resize string to the new length
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    trimAndCollapseSpaces(s);

    cout << "Cleaned string: \"" << s << "\"" << endl;

    return 0;
}
