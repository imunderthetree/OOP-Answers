#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "------------------------------------------------------- Chapter 1 -----------------------------------------------------" << endl;
    cout << "----------------------------------------------------------- 1.1 -------------------------------------------------------" << endl;
    cout << "Introduction to Computers and Welcome to Object-Oriented Programming." << endl;

    cout << "----------------------------------------------------------- 1.2 -------------------------------------------------------" << endl;
    // Method 1
    cout << "Welcome to C++!" << endl;
    cout << "Welcome to C++!" << endl;
    cout << "Welcome to C++!" << endl;
    cout << "Welcome to C++!" << endl;
    cout << "Welcome to C++!" << endl;

    // Method 2
    for (int i = 0; i < 5; i++) {
        cout << "Welcome to C++!" << endl;
    }

    cout << "----------------------------------------------------------- 1.3 -------------------------------------------------------" << endl;
    // Method 1
    cout << "      *      " << endl;
    cout << "     ***     " << endl;
    cout << "    *****    " << endl;
    cout << "   *******   " << endl;
    cout << "  *********  " << endl;

    // Method 2
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5 - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    cout << "----------------------------------------------------------- 1.4 -------------------------------------------------------" << endl;
    cout << "p     p*5     p*10" << endl;
    cout << "5     25       50" << endl;
    cout << "10    50       100" << endl;
    cout << "25    125       250" << endl;
    cout << "50    250       500" << endl;

    cout << "----------------------------------------------------------- 1.5 -------------------------------------------------------" << endl;
    cout << "((1.2*0.1)+(3.3*0.3))/(0.09+0.001) = " << ((1.2 * 0.1) + (3.3 * 0.3)) / (0.09 + 0.001) << endl;

    cout << "----------------------------------------------------------- 1.6 -------------------------------------------------------" << endl;
    int sum = 0;
    for (int i = 1, count = 0; count < 10; i += 2, count++) {
        sum += i;
    }
    cout << "The sum of the first ten odd numbers is: " << sum << endl;

    cout << "----------------------------------------------------------- 1.7 -------------------------------------------------------" << endl;
    cout << "The sum of the first 100 positive integers is: " << (100 * 101) / 2 << endl;
    double pi = sqrt(6 * (1 + 1 / 4.0 + 1 / 9.0 + 1 / 16.0 + 1 / 25.0 + 1 / 36.0));
    cout << "The value of pi is: " << pi << endl;

    cout << "----------------------------------------------------------- 1.8 -------------------------------------------------------" << endl;
    const double side1 = 9.2;
    double area = (1.732 * pow(side1, 2)) / 4;
    double perimeter = 3 * side1;
    cout << "The area of the triangle is: " << area << endl;
    cout << "The perimeter of the triangle is: " << perimeter << endl;

    cout << "----------------------------------------------------------- 1.9 -------------------------------------------------------" << endl;
    double side2 = 5.2;
    double areaa = 4 * side2;
    cout << "The area of the square is: " << areaa << endl;

    cout << "----------------------------------------------------------- 1.10 -------------------------------------------------------" << endl;
    double kg = 6.0;
    double t1 = 15.0;
    double t2 = 30.0;
    double t3 = 30.0;
    t3 = t3 / 60.0;
    double totalmin = t1 + t2 + t3;
    double totalhr = totalmin / 60.0;
    double grams = kg * 1000.0;
    double avg = grams / totalhr;
    cout << "Average sales in grams per hour: " << avg << " g/h" << endl;

    cout << "----------------------------------------------------------- 1.11 -------------------------------------------------------" << endl;
    long long pop = 312032486;
    int secondsyear = 365 * 24 * 60 * 60;

    for (int year = 1; year <= 5; year++) {
        long long births = secondsyear / 7;
        long long deaths = secondsyear / 13;
        long long immigrants = secondsyear / 45;
        pop += births - deaths + immigrants;
        cout << "Year " << year << ": " << pop << endl;
    }

    cout << "----------------------------------------------------------- 1.12 -------------------------------------------------------" << endl;
    double gramss = 5553;
    double hourss = 2;
    double minutess = 9;
    double secondss = 30;

    double totaltimehours = hourss + (minutess / 60) + (secondss / 3600);
    double kilograms = gramss / 1000;
    double avg2 = kilograms / totaltimehours;
    cout << "Average sales in kilograms per hour: " << avg2 << " kg/h" << endl;

    return 0;
}