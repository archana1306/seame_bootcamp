#include"Car.hpp"
using namespace std;
Car::Car(){

}

Car::Car(string _make, string _model, int _year): make(_make), model(_model), year(_year) 
       {
            cout << "Car: constructor called" << endl;
        }

Car::Car( Car &obj) : make(obj.make),model(obj.model),year(obj.year)
       {
           cout << "Car: copy constructor called" << endl; 
        }

Car &Car:: operator = ( Car &obj)
         {
            make = obj.make;
            model = obj.model;
            year = obj.year;
          cout << "Car Copy Assignment Operator" << std::endl;
         }


 
        string Car::makeGetter()
        {
            return make;
        }

        string Car::modelGetter()
        {
            return model;
        }

        int Car::yearGetter()
        {
            return year;
        }

        void Car::makeSetter(string _make)
        {
            make = _make;
        }

        void Car::modelSetter(string _model)
        {
            model = _model;
        }

        void Car::yearSetter(int _year)
        {
            year = _year;
        }

        void Car::drive()
        {
            cout << "Drive! " << make << ' ' << model << ' ' << year << endl;
        }

Car::~Car()
        {
            cout << "Car: destructor called" << endl;
        }

