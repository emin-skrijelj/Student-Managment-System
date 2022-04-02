#include <iostream>
#include <vector>
#include "person.cpp"
#include "GradesCalc.cpp"
using namespace std;

class Student : private Person{
    private:
    int id;
    vector<int> eng_marks,math_marks,bio_marks,science_marks;
    double averageGrades;
    double averageGrade;
    char grade;
    public:

    void getGrades();
};


void Student::getGrades(){
    cout << "English grades: ";
    showGrades(eng_marks);
    cout << "\nMath grades : ";
    showGrades(math_marks);
    cout << "\nBiology grades : " ;
    showGrades(bio_marks);
    cout << "\nScience grades : ";
    showGrades(science_marks);
};