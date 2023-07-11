#pragma once

#include "ACar.hpp"

class Car1 : virtual public ACar
{
protected:
  std::size_t _top_speed;
public:
  Car1();
  ~Car1();
  Car1(std::string model, std::string year, std::size_t top_speed);
  Car1(const Car1 &);
  Car1&operator=(const Car1 &);

  void drive() const;
};
