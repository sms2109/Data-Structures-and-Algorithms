#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcab";
    int n = str.size();

    for (int st = 0; st < n; st++) {
        for (int end = st; end < n; end++) {
            string temp = "";
            for (int i = st; i <= end; i++) {
                temp += str[i];
            }
            if (temp[0] == temp[temp.size() - 1]) {
                cout << "*" << temp << "* "; // Marked with stars
            } else {
                cout << temp << " ";
            }
        }
        cout << endl;
    }
    return 0;
}