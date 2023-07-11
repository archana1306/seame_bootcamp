#include "ACar.hpp"

ACar::ACar() : _brand("Default"), _model("Default"),_year("default"){
  std::cout << "ACar Default Constructor" << std::endl;
  
}

ACar::ACar(std::string brand, std::string model, std::string year) : _brand(brand), _model(model), _year(year) {
  std::cout << "ACar Custom Constructor" << std::endl;
}

ACar::~ACar() {
  std::cout << "ACar Default Destructor" << std::endl;
}

ACar::ACar(const ACar& rhs) {
  std::cout << "ACar Copy Constructor" << std::endl;

  *this = rhs;
}

ACar &ACar::operator=(const ACar &rhs) {
  std::cout << "ACar Copy Assignment Operator" << std::endl;

  this->_brand = rhs._brand;
  this->_model = rhs._model;
  this->_year = rhs._year;

  return *this;
}

void ACar::drive() const {
  std::cout << "Brand: " << this->_brand << std::endl;
  std::cout << "Model: " << this->_model << std::endl;
  std::cout << "Year: " << this->_year << std::endl;
}

std::string ACar::getBrand() const { return this->_brand; }
std::string ACar::getModel() const { return this->_model; }
std::string ACar::getYear() const { return this->_year; }


