#include"SportsCar.hpp"
using namespace std;

       SportsCar:: SportsCar(){}

       SportsCar:: SportsCar(string _make, string _model, int _year, int _topSpeed)
            : Car(_make, _model, _year), topSpeed(_topSpeed)
        {
            cout << "SportsCar: constructor called" << endl;
        }

        SportsCar::SportsCar(  SportsCar &obj)
        {
            Car (obj.makeGetter(), obj.modelGetter(), obj.yearGetter());
            topSpeed = obj.topSpeed;
            
            cout << "SportsCar: copy constructor called" << endl;
        }

        SportsCar &SportsCar:: operator=( SportsCar &obj)
        {
            Car::makeSetter(obj .makeGetter());
            Car::modelSetter(obj.modelGetter());
            Car::yearSetter(obj.yearGetter());
            topSpeed = obj.topSpeed;
            cout << "SportsCar: copy assignment operator override called" << endl;
        }

        int SportsCar:: topSpeedGetter()
        {
            return topSpeed;
        }

        void SportsCar:: topSpeedSetter(int _topSpeed)
        {
            topSpeed = _topSpeed;
        }

        void SportsCar::drive  ()
        {
            Car::drive();
            cout << "topSpeed: " << topSpeed << endl;
        }

        SportsCar::~SportsCar()
        {
            cout << "SportsCar: destructor called" << endl;
        }