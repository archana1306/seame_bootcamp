#pragma once

#include "ACar.hpp"

class Car2: virtual public ACar {
protected:
  std::size_t _top_speed;
public:
  Car2();
  ~Car2();

  Car2(std::string model, std::string year, std::size_t top_speed);
  Car2(const Car2 &);
  Car2 &operator=(const Car2 &);

  void drive() const;
};
