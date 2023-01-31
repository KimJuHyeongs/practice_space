#include <string>

using namespace std;

class Student{
    private:
        int grade;
        char* name;

    public:
        Student(char*, int);
        int get_grade();
        char* get_name();
        bool operator <(const Student&) const;
};