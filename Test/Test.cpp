#include <iostream>

using namespace std;

class Rectangle {
private:
    double width;
    double height;

public:
    Rectangle() : width(0), height(0) {}

    double getWidth(){                              
        return width; 
    }

    double getHeight() { 
        return height; 
    }

    void setWidth(double w) { 
        width = w; 
    }

    void setHeight(double h) { 
        height = h; 
    }

    double getArea() const { 
        return width * height; 
    }
};

int main() {
    Rectangle rect;
    double width, height;

    cout << "Enter width of the rectangle: ";
    cin >> width;
    rect.setWidth(width);

    cout << "Enter height of the rectangle: ";
    cin >> height;
    rect.setHeight(height);

    cout << "Width: " << rect.getWidth() << ", Height: " << rect.getHeight() << endl;
    cout << "Area: " << rect.getArea() << endl;

    return 0;
}