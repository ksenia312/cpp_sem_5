#include <iostream>
#include <map>
#include <string>

using namespace std;

// class container

struct StudentGrade {
    StudentGrade(string name_param, char grade_param) {
        name = name_param;
        grade = grade_param;
    }

    string name;
    char grade;
};

int main() {
    cout << "Size of class: " << endl;
    int class_size;
    cin >> class_size;


    map<string, char> class_book;
    int i = 0;
    while (i < class_size) {
        string name;
        cout << "Name of student " << i + 1 << ": ";
        cin >> name;

        char grade;
        cout << "Grade of student " << i + 1 << ": ";
        cin >> grade;

        StudentGrade studentGrade = StudentGrade(name, grade);

        class_book[studentGrade.name] = studentGrade.grade;
        i++;
    }


    for (const auto& student : class_book)
    {
        cout << "Student: " << student.first << " " << ", Grade: " << student.second << endl;
    }
}
//Student: Grigory, Grade: C
//Student: Petr, Grade: A
//Student: Vasya, Grade: B