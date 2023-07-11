#pragma once

#include <string>
#include <iostream>

class ACar {
public:
  ~ACar();
  ACar(const ACar& src);
  ACar &operator=(const ACar& src);

  virtual void drive() const = 0;

  /** getter setter */
  std::string getBrand() const;
  std::string getModel() const;
  std::string getYear() const;

protected:
  ACar();
  ACar(std::string, std::string, std::string);

  std::string _brand;
  std::string _model;
  std::string _year;
};
