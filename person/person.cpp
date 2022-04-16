#include <iostream>
using namespace std;

class Person{
    private:
    string email;
    string name;
    string surname;
    string birthdate;
    string role;
    string password;
    int id;


    Person(string email,string name,string surname,string birthdate,string role){
        this->email = email;
        this->name = name;
        this->surname = surname;
        this->birthdate = birthdate;
        this->role = role;
    };

    string getDetails(){
        return "Email: " + this->email + '\n' + "Full Name: " + this->name + " " + this->surname + '\n' + "Birthdate: " + this->birthdate + '\n';
    };

    string getRole(){
        return "Role: " + this->role;

    }
};