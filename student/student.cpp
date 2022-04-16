#include <iostream>
#include <vector>
#include "person.cpp"
#include "showGrades.cpp"
using namespace std;

class Student : private Person{
    private:
    int id;
    vector<int> eng_marks,math_marks,bio_marks,science_marks;
    public:
    void getGrades();
    float avgGrade();
};

float Student::avgGrade(){
    float average;
    average = (averageGrade(eng_marks)+averageGrade(math_marks)+averageGrade(bio_marks)+averageGrade(science_marks))/4;
    cout << "Your average grade is:" << average;
    return average;
}

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

