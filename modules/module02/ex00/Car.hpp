#pragma once
#include <iostream>
#include<string>
using namespace std;
class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car();
   
    Car(string,string,int);
    Car( Car &obj);
    Car &operator=( Car &obj);
    ~Car();
     void drive();
     string makeGetter();
     string modelGetter();
     int yearGetter();
     void makeSetter(string _make);
     void modelSetter(string _model);
     void yearSetter(int _year);
   
};

