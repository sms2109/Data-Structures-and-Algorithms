#include <iostream>
using namespace std;

// Count number of 1 bits
int countBits(int n) {
    int count = 0;
    while(n) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

// Next largest number
int nextLargest(int n) {
    int count = countBits(n);
    int i = n + 1;

    while(true) {
        if(countBits(i) == count)
            return i;
        i++;
    }
}

// Next smallest number
int nextSmallest(int n) {
    int count = countBits(n);
    int i = n - 1;

    while(i > 0) {
        if(countBits(i) == count)
            return i;
        i--;
    }
    return -1;
}

int main() {
    int num = 5;

    cout << "Number = " << num << endl;
    cout << "Next Largest = " << nextLargest(num) << endl;
    cout << "Next Smallest = " << nextSmallest(num) << endl;

    return 0;
}