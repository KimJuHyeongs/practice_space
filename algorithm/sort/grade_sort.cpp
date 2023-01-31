#include "grade_sort.h"
#include <iostream>
#include <algorithm>
#include <string>

#define STUDENT_NUM (5)

using namespace std;

Student::Student(char* name, int grade){
    this->name = name;
    this->grade = grade;
}

int Student::get_grade(){
    return this->grade;
}

char* Student::get_name(){
    return this->name;
}

bool Student::operator <(const Student &s) const{
    return (this->grade < s.grade);
}

int main(void){
    Student student[STUDENT_NUM] = {
        Student("first",92),
        Student("second",15),
        Student("third",100),
        Student("fourth",46),
        Student("fifth",91)
    };

    sort(student, student+STUDENT_NUM);

    for (int idx=0; idx<STUDENT_NUM; idx++){
        printf("Name : %s, Grade : %d\n", student[idx].get_name(), student[idx].get_grade());
    }

    return 0;
}