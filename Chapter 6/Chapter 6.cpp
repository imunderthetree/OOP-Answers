#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

////// question 6.2 function
double calculateAverageDigits(long inputNumber) {
    int digitSum = 0;
    int digitCount = 0;

    while (inputNumber != 0) {
        int lastDigit = inputNumber % 10;
        digitSum += lastDigit;
        digitCount++;
        inputNumber = inputNumber / 10;
    }
    return static_cast<double>(digitSum) / digitCount;
}

//// question 6.3 function
int sumOfCubesOfDigits(int inputNumber) {
    int cubeSum = 0;

    while (inputNumber != 0) {
        int lastDigit = inputNumber % 10;
        cubeSum += lastDigit * lastDigit * lastDigit;
        inputNumber = inputNumber / 10;
    }

    return cubeSum;
}

void checkArmstrong(int calculatedSum, int originalNumber) {
    if (calculatedSum == originalNumber) {
        cout << originalNumber << " is an Armstrong integer." << endl;
    }
    else {
        cout << originalNumber << " is not an Armstrong integer." << endl;
    }
}

//// 6.13 function
double computeFunctionF(int limit) {
    double seriesSum = 0.0;
    for (int index = 1; index <= limit; ++index) {
        seriesSum += 1.0 / (index * index);
    }
    return sqrt(6 * seriesSum);
}
//// 6.16 function
void generateMatrix(int size) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            cout << rand() % 2 << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "------------------------------------------------------- 6.2 -----------------------------------------------------" << endl;
    long userNumber;
    cout << "Enter an integer: ";
    cin >> userNumber;

    double averageDigitValue = calculateAverageDigits(userNumber);
    cout << "The average of the digits is: " << averageDigitValue << endl;

    cout << "------------------------------------------------------- 6.3 -----------------------------------------------------" << endl;
    int inputValue;
    cout << "Enter an integer: ";
    cin >> inputValue;

    int computedCubeSum = sumOfCubesOfDigits(inputValue);
    checkArmstrong(computedCubeSum, inputValue);

    cout << "------------------------------------------------------- 6.13 -----------------------------------------------------" << endl;
    cout << "| n  | f(n)    |" << endl;
    cout << "|----|---------|" << endl;

    for (int numberLimit = 2; numberLimit <= 20; numberLimit += 2) {
        double computedValue = computeFunctionF(numberLimit);
        cout << "| " << numberLimit << "  | " << computedValue << " |" << endl;
    }

    cout << "------------------------------------------------------- 6.16 -----------------------------------------------------" << endl;
    int matrixSize;
    srand(time(0));

    cout << "Enter n: ";
    cin >> matrixSize;

    generateMatrix(matrixSize);

    return 0;
}
