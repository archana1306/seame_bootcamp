#pragma once

#include "Car1.hpp"
#include "Car2.hpp"

class Cars : public Car1, public Car2
{
private:
  std::size_t _top_speed;
public:
 Cars();
  ~Cars();

  void drive() const;
};
