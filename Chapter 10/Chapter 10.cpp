#include <iostream>
#include <string>
#include <cmath>
////defining M_PI because its not defined in some compilers because i was using codeblocks in solving it
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;
/////10.10 Class
class MyInteger {
private:
    int value;

public:
    MyInteger(int val) : value(val) {}
    int getValue() const { return value; }

    // Instance
    bool isEven() const { return value % 2 == 0; }
    bool isOdd() const { return value % 2 != 0; }
    bool isPrime() const {
        if (value < 2) return false;
        for (int i = 2; i <= sqrt(value); i++) {
            if (value % i == 0)
                return false;
        }
        return true;
    }

    bool equals(int num) const { return value == num; }
    bool equals(const MyInteger& other) const { return value == other.value; }

    // Static
    static bool isEven(int num) { return num % 2 == 0; }
    static bool isOdd(int num) { return num % 2 != 0; }

    static bool isPrime(int num) {
        if (num < 2) return false;
        for (int i = 2; i <= sqrt(num); i++) {
            if (num % i == 0)
                return false;
        }
        return true;
    }

    static bool isEven(const MyInteger& obj) { return obj.isEven(); }
    static bool isOdd(const MyInteger& obj) { return obj.isOdd(); }
    static bool isPrime(const MyInteger& obj) { return obj.isPrime(); }

    static int parseInt(const string& str) { return stoi(str); }
};
////10.12 Class
class Stock {
private:
    string symbol;
    string name;
    double previousClosingPrice;
    double currentPrice;

public:
    // Constructor
    Stock(string sym, string nm) : symbol(sym), name(nm), previousClosingPrice(0), currentPrice(0) {}

    // Accessor
    string getSymbol() const { return symbol; }
    string getName() const { return name; }
    double getPreviousClosingPrice() const { return previousClosingPrice; }
    double getCurrentPrice() const { return currentPrice; }

    // Mutator
    void setPreviousClosingPrice(double price) { previousClosingPrice = price; }
    void setCurrentPrice(double price) { currentPrice = price; }

    //calculate percentage change
    double getChangePercent() const {
        if (previousClosingPrice == 0) return 0; // Avoid division by zero
        return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;
    }
};
class RegularPolygon {
private:
    int n;
    double side;
    double x, y;
public:
    // Constructors
    RegularPolygon() : n(3), side(1.0), x(0.0), y(0.0) {}
    RegularPolygon(int n, double side) : n(n), side(side), x(0.0), y(0.0) {}
    RegularPolygon(int n, double side, double x, double y) : n(n), side(side), x(x), y(y) {}

    // Getters
    int getN() const { return n; }
    double getSide() const { return side; }
    double getX() const { return x; }
    double getY() const { return y; }
    //Setters
    void setN(int n) { this->n = n; }
    void setSide(double side) { this->side = side; }
    void setX(double x) { this->x = x; }
    void setY(double y) { this->y = y; }
    // Calculate Perimeter
    double getPerimeter() const { return n * side; }
    // Calculate Area
    double getArea() const {
        return (n * side * side) / (4 * tan(M_PI / n));
    }
};

int main() {
    cout << "----------------------------------------------- 10.10 --------------------------------------------------------------" << "\n";
    MyInteger num1(7);
    MyInteger num2(10);

    cout << "num1: " << num1.getValue() << endl;
    cout << "Is num1 even? " << num1.isEven() << endl;
    cout << "Is num1 odd? " << num1.isOdd() << endl;
    cout << "Is num1 prime? " << num1.isPrime() << endl;

    cout << "\nnum2: " << num2.getValue() << endl;
    cout << "Is num2 even? " << MyInteger::isEven(num2) << endl;
    cout << "Is num2 odd? " << MyInteger::isOdd(num2) << endl;
    cout << "Is num2 prime? " << MyInteger::isPrime(num2) << endl;

    cout << "\nComparing num1 and num2: " << num1.equals(num2) << endl;
    cout << "Comparing num1 and 7: " << num1.equals(7) << endl;

    cout << "\nParsing '1234' to int: " << MyInteger::parseInt("1234") << endl;
    cout << "----------------------------------------------- 10.12 --------------------------------------------------------------" << "\n";
    Stock stock("MSFT", "Microsoft Corporation");
    stock.setPreviousClosingPrice(27.5);
    stock.setCurrentPrice(30);
    cout << "Stock: " << stock.getName() << " (" << stock.getSymbol() << ")" << endl;
    cout << "Previous Closing Price: $" << stock.getPreviousClosingPrice() << endl;
    cout << "Current Price: $" << stock.getCurrentPrice() << endl;
    cout << "Price Change Percentage: " << stock.getChangePercent() << "%" << endl;
    cout << "----------------------------------------------- 10.13 --------------------------------------------------------------" << "\n";
    RegularPolygon poly1;
    RegularPolygon poly2(6, 4);
    RegularPolygon poly3(10, 4, 5.6, 7.8);
    cout << "Polygon 1: n=" << poly1.getN() << ", side=" << poly1.getSide() << ", perimeter=" << poly1.getPerimeter() << ", area=" << poly1.getArea() << endl;
    cout << "Polygon 2: n=" << poly2.getN() << ", side=" << poly2.getSide() << ", perimeter=" << poly2.getPerimeter() << ", area=" << poly2.getArea() << endl;
    cout << "Polygon 3: n=" << poly3.getN() << ", side=" << poly3.getSide() << ", perimeter=" << poly3.getPerimeter() << ", area=" << poly3.getArea() << endl;


    return 0;
}
