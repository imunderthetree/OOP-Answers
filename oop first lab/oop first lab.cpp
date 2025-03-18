#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string name;
    int id;
    string add;

public:
    void setName(string n) {
        name = n;
    }

    void setID(int ID) {
       this -> id = ID;
    }

    void setAdd(string Add) {
        add = Add;
    }

    string getName() {
        return name;
    }

    int getID() {
        return id;
    }

    string getAddress() {
        return add;
    }
};

int main() {
    Student s1, s2, s3;
    string tempName, tempAddress;
    int tempID;

    cout << "Enter student name: ";
    getline(cin, tempName);
    s1.setName(tempName);

    cout << "Enter student ID: ";
    cin >> tempID;
    s1.setID(tempID);

    cin.ignore();

    cout << "Enter student address: ";
    getline(cin, tempAddress);
    s1.setAdd(tempAddress);

    cout << "\nStudent Details:\n";
    cout << "Name: " << s1.getName() << endl;
    cout << "ID: " << s1.getID() << endl;
    cout << "Address: " << s1.getAddress() << endl;

    return 0;
}
