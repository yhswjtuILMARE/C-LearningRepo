//
// Created by Administrator on 2018/12/11.
//

#include "Person.h"
#include <iostream>
Person::Person(const string &name, p_gender gen, int age): name(name), gen(gen), age(age){
    this->p = new char[20];
    strcpy(p, "I love my country");
}
void Person::get_name() const {
    cout << this->name << endl;
}
ostream &operator<<(ostream &os, const Person &p){
    os << "{name: \"" << p.name << "\", age:" << p.age << "}";
    return os;
}
void Person::func() {
    cout << "This is Person, this is " << this << endl;
}
void Person::func_1() {
    cout << "This is Person::func_1(), this is " << this << endl;
}

void Person::show() {
    cout << "This is Person show()" << endl;
}