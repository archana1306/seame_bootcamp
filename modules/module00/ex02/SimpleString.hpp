#pragma once

#include <iostream>
#include <string>
#include <cstring>

class SimpleString
{
private:
  void ConvertUppercase(char const *);
  void ConvertLowercase(char const *);
public:
  SimpleString();
  ~SimpleString();
  void convert(std::string, char const **, int);
};