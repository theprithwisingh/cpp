#include <iostream>
using namespace std;

class Student {
private:
    string name;
    string address;
    int age, roll_number, marks;
    string grade;

public:
    // Setters
    void setName(string s) {
        if (s.size() == 0) {
            cout << "Invalid name!" << endl;
            return;
        }
        name = s;
    }

    void setAge(int a) {
        if (a < 0 || a > 100) {
            cout << "Invalid age!" << endl;
            return;
        }
        age = a;
    }

    void setMarks(int m) {
        marks = m;
    }

    void setGrade(string g) {
        grade = g;
    }

    void setRoll_Number(int r) {
        roll_number = r;
    }

    void setAddress(string addr) {
        address = addr;
    }

    // Getters
    string getName() { return name; }
    int getAge() { return age; }
    int getMarks() { return marks; }
    string getGrade() { return grade; }
    int getRoll_Number() { return roll_number; }
    string getAddress() { return address; }
};

int main() {
    // first instance
    Student s1;
    s1.setName("Tony");
    s1.setRoll_Number(34);
    s1.setMarks(34);
    s1.setGrade("A+");
    s1.setAge(22);
    s1.setAddress("NewYork");

    cout << "Student 1 -> " << s1.getName() << ", " 
         << s1.getAge() << ", " 
         << s1.getRoll_Number() << ", " 
         << s1.getMarks() << ", " 
         << s1.getGrade() << ", " 
         << s1.getAddress() << endl;

    // second instance
    Student s2;
    s2.setName("Prithwi Singh");
    s2.setRoll_Number(24);
    s2.setMarks(44);
    s2.setGrade("A++");
    s2.setAge(24);
    s2.setAddress("Chandauli UP");

    cout << "Student 2 -> " << s2.getName() << ", " 
         << s2.getAge() << ", " 
         << s2.getRoll_Number() << ", " 
         << s2.getMarks() << ", " 
         << s2.getGrade() << ", " 
         << s2.getAddress() << endl;
}
