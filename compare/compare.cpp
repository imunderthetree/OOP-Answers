#include <iostream>

using namespace std;

int maxOfThree(int a, int b, int c) {
    int maxNum = a;
    if (b > maxNum) {
        maxNum = b;
    }
    if (c > maxNum) {
        maxNum = c;
    }
    return maxNum;
}

int main() {
    int x, y, z;
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "The maximum number is: " << maxOfThree(x, y, z) << endl;

    return 0;
}
