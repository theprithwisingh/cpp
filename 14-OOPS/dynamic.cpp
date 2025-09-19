#include<iostream>
using namespace std;

class Student{
    string name; 
    int age;

    public:
    Student(string n, int a){
        name = n;
        age = a;
    }
    void show{
        cout<<"name :"<<name<<"age :"<<age<<endl;
    }
}

int main(){
   // Single object dynamically created
    Student* s1 = new Student("Prithwi", 20);
    s1->show();

    // Array of objects dynamically created
    Student* arr = new Student[2] {
        Student("Rahul", 21),
        Student("Aman", 22)
    };

    arr[0].show();
    arr[1].show();

    // Free memory
    delete s1;
    delete[] arr;

    return 0; 
}