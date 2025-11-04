#include <iostream>
using namespace std;

// Abstract base class
class Student {
protected:
    string name;
    int roll;
public:
    virtual void getdata() = 0;   // Pure virtual function
    virtual void display() = 0;   // Pure virtual function
};

// Derived class Engineering
class Engineering : public Student {
    string branch;
public:
    void getdata() {
        cout << "Enter Engineering student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter branch: ";
        cin >> branch;
    }
    void display() {
        cout << "\n--- Engineering Student ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Branch: " << branch << endl;
    }
};

// Derived class Medicine
class Medicine : public Student {
    string specialization;
public:
    void getdata() {
        cout << "Enter Medicine student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter specialization: ";
        cin >> specialization;
    }
    void display() {
        cout << "\n--- Medicine Student ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Specialization: " << specialization << endl;
    }
};

// Derived class Science
class Science : public Student {
    string subject;
public:
    void getdata() {
        cout << "Enter Science student name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter subject: ";
        cin >> subject;
    }
    void display() {
        cout << "\n--- Science Student ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll: " << roll << endl;
        cout << "Subject: " << subject << endl;
    }
};

// Main function
int main() {
    Student* students[3];   // Array of base class pointers

    Engineering e;
    Medicine m;
    Science s;

    students[0] = &e;
    students[1] = &m;
    students[2] = &s;

    cout << "=== Enter Student Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        students[i]->getdata();  // runtime polymorphism
    }

    cout << "\n=== Displaying Student Details ===" << endl;
    for (int i = 0; i < 3; i++) {
        students[i]->display();  // runtime polymorphism
    }

    return 0;
}
