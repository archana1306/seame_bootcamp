#include "SimpleString.hpp"

SimpleString::SimpleString(/* args */)
{
}

SimpleString::~SimpleString()
{
}

void SimpleString::convert(std::string cmd, char const **strs, int str_size) {
  for (size_t i = 0; i < str_size; i++) {
    if (cmd == "up")
      ConvertUppercase(strs[i]);
    else if (cmd == "down")
      ConvertLowercase(strs[i]);
    else
      throw std::invalid_argument("Error: Invalid command");
    if (i != (str_size - 1)) std::cout << " ";
  }
}

void SimpleString::ConvertUppercase(char const * str) {
  size_t len = std::strlen(str);
  for (size_t i = 0; i < len; i++) {
    if (str[i] >= 'a' && str[i] <= 'z')
      std::cout << (char)(str[i] - 32);
    else
      std::cout << str[i];
  }
}

void SimpleString::ConvertLowercase(char const * str) {
  std::size_t len = std::strlen(str);
  for (size_t i = 0; i < len; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z')
      std::cout << (char)(str[i] + 32);
    else
      std::cout << str[i];
  }
}