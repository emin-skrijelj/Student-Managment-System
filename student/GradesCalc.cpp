#include <iostream>
#include <vector>
using namespace std;

void showGrades(vector<int>marks){
    for(auto &grade: marks){
        cout << grade << "," << " ";
    };
};

float averageGrade(vector<int>marks){
    float avg;
    float cnt;
    for(auto grade: marks){
        avg += grade;
        cnt += 1;
    };
    return avg/cnt;
};


