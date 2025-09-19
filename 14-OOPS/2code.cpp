#include <iostream>
#include <vector>
using namespace std;

class Student {
private:
    string name;
    string address;
    int age;
    int roll_number;
    int marks;
    string grade;

    // Helper function to assign grade automatically
    void calculateGrade() {
        if (marks >= 90) grade = "A+";
        else if (marks >= 75) grade = "A";
        else if (marks >= 60) grade = "B";
        else if (marks >= 40) grade = "C";
        else grade = "F";
    }

public:
    // Static variable to count total students
    static int studentCount;

    // Constructor
    Student(string n, int r, int a, int m, string addr) {
        setName(n);
        setRoll_Number(r);
        setAge(a);
        setMarks(m);   // also calculates grade
        setAddress(addr);
        studentCount++;
    }

    // Setters
    void setName(string s) {
        if (s.empty()) {
            cout << "Invalid name!" << endl;
            name = "Unknown";
        } else {
            name = s;
        }
    }

    void setAge(int a) {
        if (a < 3 || a > 120) {
            cout << "Invalid age!" << endl;
            age = 0;
        } else {
            age = a;
        }
    }

    void setMarks(int m) {
        if (m < 0 || m > 100) {
            cout << "Invalid marks!" << endl;
            marks = 0;
        } else {
            marks = m;
        }
        calculateGrade();  // auto update grade
    }

    void setRoll_Number(int r) {
        if (r <= 0) {
            cout << "Invalid roll number!" << endl;
            roll_number = -1;
        } else {
            roll_number = r;
        }
    }

    void setAddress(string addr) {
        if (addr.empty()) {
            address = "Not Provided";
        } else {
            address = addr;
        }
    }

    // Getters
    string getName() { return name; }
    int getAge() { return age; }
    int getMarks() { return marks; }
    string getGrade() { return grade; }
    int getRoll_Number() { return roll_number; }
    string getAddress() { return address; }

    // Extra logic
    bool isPassed() { return marks >= 40; }

    void display() {
        cout << "----------------------------------" << endl;
        cout << "Name       : " << name << endl;
        cout << "Roll No    : " << roll_number << endl;
        cout << "Age        : " << age << endl;
        cout << "Marks      : " << marks << endl;
        cout << "Grade      : " << grade << endl;
        cout << "Address    : " << address << endl;
        cout << "Result     : " << (isPassed() ? "Passed ✅" : "Failed ❌") << endl;
        cout << "----------------------------------" << endl;
    }
};

// Initialize static variable
int Student::studentCount = 0;

int main() {
    // Create students
    Student s1("Prithwi Singh", 101, 22, 92, "Chandauli UP");
    Student s2("Rohit Sharma", 102, 20, 55, "Varanasi UP");
    Student s3("Anjali Kumari", 103, 21, 35, "Lucknow UP");

    // Display students
    s1.display();
    s2.display();
    s3.display();

    cout << "Total Students Created: " << Student::studentCount << endl;

    return 0;
}
