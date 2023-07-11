#include "Car1.hpp"

Car1::Car1(): _top_speed(0), ACar("Car1", "unknow", "unknow") {
  std::cout << "car1 Default Constructor" << std::endl;
}

Car1::~Car1() {
  std::cout << "car1 Default Destructor" << std::endl;
}

Car1::Car1(std::string model, std::string year, std::size_t top_speed): _top_speed(top_speed), ACar("Car1", model, year) {
  std::cout << "car1 Custom Constructor" << std::endl;
}

Car1::Car1(const Car1 &rhs) {
  std::cout << "car1Copy Constructor" << std::endl;

  *this = rhs;
}

Car1 &Car1::operator=(const Car1 &rhs) {
  std::cout << "car1 Copy Assignment Operator" << std::endl;
  this->_top_speed = rhs._top_speed;
  this->_brand = rhs._brand;
  this->_model = rhs._model;
  this->_year = rhs._year;

  return *this;
}

void Car1::drive() const {
  std::cout << "This is Car1 drive() method" << std::endl;
  std::cout << "Brand: " << this->_brand << std::endl;
  std::cout << "Model: " << this->_model << std::endl;
  std::cout << "Year: " << this->_year << std::endl;
  std::cout << "Top Speed: " << this->_top_speed << std::endl;
}
