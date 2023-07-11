#include "Cars.hpp"
Cars::Cars(): _top_speed(0), Car1(), Car2() {
  std::cout << "Cars Default Constructor" << std::endl;
  this->_brand = Car1::_brand;
  this->_model = Car2::_model;
  this->_year = Car2::_year;
}

Cars::~Cars() {
    std::cout << "Cars Default Destructor" << std::endl;
}

void Cars::drive() const {
  std::cout << "This is Cars drive() method" << std::endl;
  std::cout << "Brand: " << this->_brand << std::endl;
  std::cout << "Model: " << this->_model << std::endl;
  std::cout << "Year: " << this->_year << std::endl;
  std::cout << "Top Speed: " << this->_top_speed << std::endl;
}
