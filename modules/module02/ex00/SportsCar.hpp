#pragma once

#include "Car.hpp"
using namespace std;
class SportsCar : public Car
{
private:
  int topSpeed;
public:
  SportsCar();
  ~SportsCar();
  SportsCar(string, string, int, int);
  SportsCar( SportsCar &obj);
  SportsCar &operator=(SportsCar &obj);
  int topSpeedGetter();
  void topSpeedSetter(int);

  void drive()  ;
};