#include "Car2.hpp"

Car2::Car2(): _top_speed(0), ACar("Car2", "unknow", "year") {
  std::cout << "Car2 Default Constructor" << std::endl;
}

Car2::~Car2() {
  std::cout << "Car2 Default Destructor" << std::endl;
}

Car2::Car2(std::string model, std::string year, std::size_t top_speed): _top_speed(top_speed), ACar("Car2", model, year) {
  std::cout << "Car2 Custom Constructor" << std::endl;
}

Car2::Car2(const Car2 &rhs) {
  std::cout << "Car2Copy Constructor" << std::endl;

  *this = rhs;
}

Car2 &Car2::operator=(const Car2 &rhs) {
  std::cout << "Car2 Copy Assignment Operator" << std::endl;
  this->_top_speed = rhs._top_speed;
  this->_brand = rhs._brand;
  this->_model = rhs._model;
  this->_year = rhs._year;

  return *this;
}

void Car2::drive() const {
  std::cout << "This is Mercedes drive() method" << std::endl;
  std::cout << "Brand: " << this->_brand << std::endl;
  std::cout << "Model: " << this->_model << std::endl;
  std::cout << "Year: " << this->_year << std::endl;
  std::cout << "Top Speed: " << this->_top_speed << std::endl;
}
