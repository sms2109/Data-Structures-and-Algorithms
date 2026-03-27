#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle;

    for(int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);  // fill with 1

        for(int j = 1; j < i; j++) {
            row[j] = triangle[i-1][j-1] + triangle[i-1][j];
        }

        triangle.push_back(row);
    }

    return triangle;
}

int main() {
    int n = 5;
    vector<vector<int>> result = generate(n);

    cout << "Pascal's Triangle with " << n << " rows:\n";

    for(auto row : result) { //auto lets the compiler automatically detect the data type of a variable.
        for(int x : row) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}