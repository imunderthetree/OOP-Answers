#include <iostream>
#include <string>

using namespace std;

int count(const string& s, char a) {
    int count = 0;
    for (char c : s) {
        if (c == a) {
            count++;
        }
    }
    return count;
}

string swapCase(const string& s) {
    string result = s;
    for (char& c : result) {
        if (c >= 'a' && c <= 'z')
            c = c - 'a' + 'A';
        else if (c >= 'A' && c <= 'Z')
            c = c - 'A' + 'a';
    }
    return result;
}

int product(const int array[], int size) {
    int result = 1;
    for (int i = 0; i < size; i++) {
        result *= array[i];
    }
    return result;
}

// Overloaded function for double arrays
double product(const double array[], int size) {
    double result = 1.0;
    for (int i = 0; i < size; i++) {
        result *= array[i];
    }
    return result;
}

int indexOfTheLargestElement(double array[], int size) {
    if (size <= 0) return -1;

    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (array[i] >= array[maxIndex]) {
            maxIndex = i;
        }
    }
    return maxIndex;
}

enum Color { RED, ORANGE, GREEN, BLUE };

struct Car {
    string carMake;
    string carModel;
    int yearModel;
    double cost;
};

int main() {
    cout << "          ----Lab ----          " << endl;
    cout << "------------------------------------------------------- 6.44 -----------------------------------------------------" << endl;

    string text;
    char character;

    cout << "Enter a string: ";
    getline(cin, text);

    cout << "Enter the character to count: ";
    cin >> character;
    cin.ignore(); 

    cout << "Count of " << character << " in " << text << " : " << count(text, character) << endl;

    cout << "------------------------------------------------------- 6.46 -----------------------------------------------------" << endl;

    string textt;

    cout << "Enter a string: ";
    getline(cin, textt);

    cout << "New String : " << swapCase(textt) << endl;

    cout << "------------------------------------------------------- 7.8 -----------------------------------------------------" << endl;
    int intArray[] = { 1, 2, 3, 4, 5 };
    double doubleArray[] = { 1.5, 2.0, 3.5, 4.0 };

    cout << "Product of integer array: " << product(intArray, 5) << endl;
    cout << "Product of double array: " << product(doubleArray, 4) << endl;

    cout << "------------------------------------------------------- 7.10-----------------------------------------------------" << endl;
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }

    double* array = new double[size];
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    int largestIndex = indexOfTheLargestElement(array, size);
    cout << "The index of the largest element is: " << largestIndex << endl;

    delete[] array;

    cout << "------------------------------------------------------- enum 34-----------------------------------------------------" << endl;
    cout << "A) The name of the data type declared is: Color" << endl;
    cout << "B) The enumerators for this type are: RED, ORANGE, GREEN, BLUE" << endl;
    cout << "C) Color mycolor = GREEN;" << endl;

    cout << "------------------------------------------------------- enum 35-----------------------------------------------------" << endl;
    enum { DOG, CAT, BIRD, HAMSTER } petType;

    petType = CAT;

    cout << "Pet type value: " << petType << endl;

    cout << "------------------------------------------------------- struct 19-----------------------------------------------------" << endl;
    Car myCar = { "Ford", "Mustang", 1968, 20000.0 };

    cout << "Car Details:" << endl;
    cout << "Make: " << myCar.carMake << endl;
    cout << "Model: " << myCar.carModel << endl;
    cout << "Year Model: " << myCar.yearModel << endl;
    cout << "Cost: $" << myCar.cost << endl;

    cout << "------------------------------------------------------- struct 21 and 22-----------------------------------------------------" << endl;
    Car cars[] = {
        {"Ford", "Taurus", 1997, 21000.0},
        {"Honda", "Accord", 1992, 11000.0},
        {"Lamborghini", "Countach", 1997, 200000.0}
    };

    for (int i = 0; i < 3; i++) {
        cout << "Car " << i + 1 << " Details:" << endl;
        cout << "Make: " << cars[i].carMake << endl;
        cout << "Model: " << cars[i].carModel << endl;
        cout << "Year Model: " << cars[i].yearModel << endl;
        cout << "Cost: $" << cars[i].cost << endl;
        cout << "----------------------" << endl;
    }

    cout << "------------------------------------------------------- 7.15-----------------------------------------------------" << endl;
    const int numLockers = 100;
    bool lockers[numLockers] = { false };

    for (int student = 1; student <= numLockers; student++) {
        for (int locker = student - 1; locker < numLockers; locker += student) {
            lockers[locker] = !lockers[locker];
        }
    }

    cout << "Open lockers: ";
    for (int i = 0; i < numLockers; i++) {
        if (lockers[i]) {
            cout << (i + 1) << " ";
        }
    }

    cout << endl;
}
return 0;
