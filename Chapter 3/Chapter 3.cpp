#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    cout << "------------------------------------------------------- Chapter 3 -----------------------------------------------------" << endl;
    cout << "----------------------------------------------------------- 3.1 -------------------------------------------------------" << endl;
    cout << "Enter a : ";
    double a;
    cin >> a;
    cout << "Enter b : ";
    double b;
    cin >> b;
    cout << "Enter c : ";
    double c;
    cin >> c;
    double discriminant = pow(b, 2) - 4 * a * c;
    if (discriminant > 0) {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        double r2 = (-b - sqrt(discriminant)) / (2 * a);
        cout << "The roots are " << r1 << " and " << r2 << endl;
    }
    else if (discriminant == 0) {
        double r1 = (-b + sqrt(discriminant)) / (2 * a);
        cout << "The root is " << r1 << endl;
    }
    else {
        cout << "The equation has no real roots" << endl;
    }

    cout << "----------------------------------------------------------- 3.2 -------------------------------------------------------" << endl;
    cout << "Enter two integers: ";
    int num1, num2;
    cin >> num1 >> num2;
    if (num1 % num2 == 0) {
        cout << num1 << " is a multiple of " << num2 << endl;
    }
    else {
        cout << num1 << " is not a multiple of " << num2 << endl;
    }

    cout << "----------------------------------------------------------- 3.3 -------------------------------------------------------" << endl;
    cout << "Enter a , b , c , d , e , f : ";
    double a1, b1, c1, d1, e1, f1;
    cin >> a1 >> b1 >> c1 >> d1 >> e1 >> f1;
    if (a1 * d1 - b1 * c1 == 0) {
        cout << "The equation has no solution" << endl;
    }
    else {
        double x = (e1 * d1 - b1 * f1) / (a1 * d1 - b1 * c1);
        double y = (a1 * f1 - e1 * c1) / (a1 * d1 - b1 * c1);
        cout << "x is " << x << " and y is " << y << endl;
    }

    cout << "----------------------------------------------------------- 3.4 -------------------------------------------------------" << endl;
    cout << "Enter Speed :  ";
    int speed;
    cin >> speed;
    if (speed <= 20) {
        cout << "Too slow" << endl;
    }
    else if (speed <= 79) {
        cout << "Just right" << endl;
    }
    else {
        cout << "Too fast" << endl;
    }

    cout << "----------------------------------------------------------- 3.5 -------------------------------------------------------" << endl;
    cout << "Enter today's day: ";
    int today;
    cin >> today;
    cout << "Enter the number of days elapsed since today: ";
    int elapsed;
    cin >> elapsed;
    int future = (today + elapsed) % 7;
    cout << "Today is ";
    switch (today) {
    case 0: cout << "Sunday"; break;
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    default: cout << "Invalid day"; break;
    }
    cout << " and the future day is ";
    switch (future) {
    case 0: cout << "Sunday"; break;
    case 1: cout << "Monday"; break;
    case 2: cout << "Tuesday"; break;
    case 3: cout << "Wednesday"; break;
    case 4: cout << "Thursday"; break;
    case 5: cout << "Friday"; break;
    case 6: cout << "Saturday"; break;
    default: cout << "Invalid day"; break;
    }
    cout << endl;

    cout << "----------------------------------------------------------- 3.6 -------------------------------------------------------" << endl;
    cout << "Enter weight in pounds: ";
    double weight;
    cin >> weight;
    cout << "Enter height in inches: ";
    double height;
    cin >> height;
    double bmi = weight * 0.45359237 / pow(height * 0.0254, 2);
    cout << "BMI is " << bmi << endl;
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    }
    else if (bmi < 25) {
        cout << "Normal" << endl;
    }
    else if (bmi < 30) {
        cout << "Overweight" << endl;
    }
    else {
        cout << "Obese" << endl;
    }

    cout << "------------------------------------------------------- 3.11 -----------------------------------------------------" << endl;
    double loanAmount;
    cout << "Enter loan amount: ";
    cin >> loanAmount;
    loanAmount /= 100000.0;

    if (loanAmount < 0.1 || loanAmount > 50)
        cout << "Loan cannot be provided." << endl;
    else if (loanAmount > 0.1 && loanAmount <= 1)
        cout << "Rate of interest: 15%" << endl;
    else if (loanAmount > 1 && loanAmount <= 5)
        cout << "Rate of interest: 13.5%" << endl;
    else if (loanAmount > 5 && loanAmount <= 10)
        cout << "Rate of interest: 12.5%" << endl;
    else
        cout << "Rate of interest: 11%" << endl;

    cout << "------------------------------------------------------- 3.12 -----------------------------------------------------" << endl;
    srand(time(0));
    int num = rand();
    int remainder = num % 2;

    cout << "Guess whether the number is Even (0) or Odd (1): ";
    int guess;
    cin >> guess;

    if (guess == remainder) {
        cout << "Correct! The number was " << num << " and it is " << (remainder == 0 ? "Even." : "Odd.") << endl;
    }
    else {
        cout << "Incorrect. The number was " << num << " and it is " << (remainder == 0 ? "Even." : "Odd.") << endl;
    }
    cout << "------------------------------------------------------- 3.13 -----------------------------------------------------" << endl;
    int status;
    double income, tax = 0;

    cout << "(0 - Single filer, 1 - Married jointly or qualifying widow(er), "
        << "2 - Married separately, 3 - Head of household)" << endl;
    cout << "Enter the filing status: ";
    cin >> status;

    if (status < 0 || status > 3) {
        cout << "Error: Invalid status" << endl;
        return 0;
    }

    cout << "Enter the taxable income: ";
    cin >> income;

    if (income < 0) {
        cout << "Error: Invalid income" << endl;
        return 0;
    }

    if (status == 0) { 
        if (income <= 8350) tax = income * 0.10;
        else if (income <= 33950) tax = 8350 * 0.10 + (income - 8350) * 0.15;
        else if (income <= 82250) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25;
        else if (income <= 171550) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (income - 82250) * 0.28;
        else if (income <= 372950) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (171550 - 82250) * 0.28 + (income - 171550) * 0.33;
        else tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (82250 - 33950) * 0.25 + (171550 - 82250) * 0.28 + (372950 - 171550) * 0.33 + (income - 372950) * 0.35;
    }
    else if (status == 1) { 
        if (income <= 16700) tax = income * 0.10;
        else if (income <= 67900) tax = 16700 * 0.10 + (income - 16700) * 0.15;
        else if (income <= 137050) tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (income - 67900) * 0.25;
        else if (income <= 208850) tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (137050 - 67900) * 0.25 + (income - 137050) * 0.28;
        else if (income <= 372950) tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (137050 - 67900) * 0.25 + (208850 - 137050) * 0.28 + (income - 208850) * 0.33;
        else tax = 16700 * 0.10 + (67900 - 16700) * 0.15 + (137050 - 67900) * 0.25 + (208850 - 137050) * 0.28 + (372950 - 208850) * 0.33 + (income - 372950) * 0.35;
    }
    else if (status == 2) { 
        if (income <= 8350) tax = income * 0.10;
        else if (income <= 33950) tax = 8350 * 0.10 + (income - 8350) * 0.15;
        else if (income <= 68525) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (income - 33950) * 0.25;
        else if (income <= 104425) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (68525 - 33950) * 0.25 + (income - 68525) * 0.28;
        else if (income <= 186475) tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (68525 - 33950) * 0.25 + (104425 - 68525) * 0.28 + (income - 104425) * 0.33;
        else tax = 8350 * 0.10 + (33950 - 8350) * 0.15 + (68525 - 33950) * 0.25 + (104425 - 68525) * 0.28 + (186475 - 104425) * 0.33 + (income - 186475) * 0.35;
    }
    else if (status == 3) { 
        if (income <= 11950) tax = income * 0.10;
        else if (income <= 45500) tax = 11950 * 0.10 + (income - 11950) * 0.15;
        else if (income <= 117450) tax = 11950 * 0.10 + (45500 - 11950) * 0.15 + (income - 45500) * 0.25;
        else if (income <= 190200) tax = 11950 * 0.10 + (45500 - 11950) * 0.15 + (117450 - 45500) * 0.25 + (income - 117450) * 0.28;
        else if (income <= 372950) tax = 11950 * 0.10 + (45500 - 11950) * 0.15 + (117450 - 45500) * 0.25 + (190200 - 117450) * 0.28 + (income - 190200) * 0.33;
        else tax = 11950 * 0.10 + (45500 - 11950) * 0.15 + (117450 - 45500) * 0.25 + (190200 - 117450) * 0.28 + (372950 - 190200) * 0.33 + (income - 372950) * 0.35;
    }

    cout << "Tax is $" << static_cast<int>(tax * 100) / 100.0 << endl;

    cout << "------------------------------------------------------- 3.14 -----------------------------------------------------" << endl;
    srand(time(0));
    int genNum = rand() % 90 + 10, userNum;
    cout << "Enter your two-digit prediction: ";
    cin >> userNum;

    if (userNum < 10 || userNum > 99) {
        cout << "Invalid input! Enter a two-digit number." << endl;
        return 1;
    }

    int gT = genNum / 10, gO = genNum % 10, uT = userNum / 10, uO = userNum % 10, acc = 0;
    if (userNum == genNum) acc = 100;
    else if (uT == gT || uO == gO || uT == gO || uO == gT) acc = 50;

    cout << "Generated: " << genNum << "\nYour Prediction: " << userNum << "\nAccuracy: " << acc << "%" << endl;
    cout << "------------------------------------------------------- 3.15 -----------------------------------------------------" << endl;
    srand(time(0));
    int comp = rand() % 3, user;

    cout << "Enter 0 (Scissor), 1 (Rock), or 2 (Paper): ";
    cin >> user;

    if (user < 0 || user > 2) {
        cout << "Invalid input! Enter 0, 1, or 2." << endl;
        return 1;
    }

    string choices[] = { "Scissor", "Rock", "Paper" };
    cout << "Computer chose: " << choices[comp] << "\nYou chose: " << choices[user] << endl;

    if (user == comp)
        cout << "It's a draw!" << endl;
    else if ((user == 0 && comp == 2) || (user == 1 && comp == 0) || (user == 2 && comp == 1))
        cout << "You win!" << endl;
    else
        cout << "You lose!" << endl;

    cout << "------------------------------------------------------- 3.16 -----------------------------------------------------" << endl;
    float s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    if ((s1 == s2) && (s2 == s3)) {
        float are = ((sqrt(3) / 4) * pow(s1, 2));
        cout << "The are of the equilateral trinagle is = " << are << endl;
    }
    else {
        cout << "The input is invalid" << endl;
    }

    cout << "------------------------------------------------------- 3.17 -----------------------------------------------------" << endl;
    int num;
    cout << "Enter a three-digit integer: ";
    cin >> num;

    if (num < 100 || num > 999) {
        cout << "Invalid input. Please enter a three-digit number." << endl;
    }
    else {
        int sum = 0;
        int temp = num;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        cout << "The sum of the digits is " << sum << endl;
    }
    cout << "------------------------------------------------------- 3.18 -----------------------------------------------------" << endl;
    srand(time(0));
    int n1 = rand() % 5;
    int n2 = rand() % 5;
    int n3 = rand() % 5;
    int n4 = rand() % 5;
    cout << "What is " << n1 << " * " << n2 << " * " << n3 << " * " << n4 << "? ";
    int answer;
    cin >> answer;
    int product = n1 * n2 * n3 * n4;
    if (product == answer)
        cout << "You are correct!" << endl;
    else
        cout << "Your answer is wrong. " << n1 << " * " << n2 << " * " << n3 << " * " << n4 << " should be " << product << endl;
    cout << "------------------------------------------------------- 3.19 -----------------------------------------------------" << endl;
    double x, y;
    const double RADIUS = 10.0;

    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    double distance = sqrt(pow(x, 2) + pow(y, 2));

    if (distance <= RADIUS) {
        cout << "Point (" << x << ", " << y << ") is inside the circle." << endl;
    }
    else {
        cout << "Point (" << x << ", " << y << ") is outside the circle." << endl;
    }
    cout << "------------------------------------------------------- 3.20 -----------------------------------------------------" << endl;
    double x, y;
    const double HALF_WIDTH = 10.0 / 2;
    const double HALF_HEIGHT = 5.0 / 2;

    cout << "Enter the coordinates (x, y): ";
    cin >> x >> y;

    if (x >= -HALF_WIDTH && x <= HALF_WIDTH && y >= -HALF_HEIGHT && y <= HALF_HEIGHT) {
        cout << "Point (" << x << ", " << y << ") is inside the rectangle." << endl;
    }
    else {
        cout << "Point (" << x << ", " << y << ") is outside the rectangle." << endl;
    }
    cout << "------------------------------------------------------- 3.21 -----------------------------------------------------" << endl;
    srand(time(0));

    string ranks[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King" };
    string suits[] = { "Clubs", "Diamonds", "Hearts", "Spades" };

    int rankIndex = rand() % 13;
    int suitIndex = rand() % 4;

    cout << "The card you picked is " << ranks[rankIndex] << " of " << suits[suitIndex] << "." << endl;
    cout << "------------------------------------------------------- 3.22 -----------------------------------------------------" << endl;

    return 0;
}
