#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string name;
    int age;
    int id;
    double grade1;
    double grade2;
    double grade3;
    double grade4;
    int avg_grade;
public:
    Student(string name_, int age_, int id_, double g1, double g2, double g3, double g4) {
        name = name_;
        age = age_;
        id = id_;
        grade1 = g1;
        grade2 = g2;
        grade3 = g3;
        grade4 = g4;
        avg_grade = (grade1 + grade2 + grade3 + grade4) / 4;
    }
    void printInfo() {
        cout << name << ',' << age << ',' << id << ',' << avg_grade << endl;
    }
};

int main(int argc, char * argv[]) {
    string name;
    int age, id, g1, g2, g3, g4;
    char c2, c3, c4, c5, c6;
    getline(cin, name, ',');
    cin >> age >> c2 >> id >> c3 >> g1 >> c4 >> g2 >> c5 >> g3 >> c6 >> g4;
    Student student = Student(name, age, id, g1, g2, g3, g4);
    student.printInfo();
}