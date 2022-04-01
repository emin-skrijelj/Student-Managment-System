#include <iostream>
#include "person.cpp"
using namespace std;

int main(){
    Person person("e@mail. om","nes","prez","13.1.203.","teacher");
    cout << person.getDetails();

}