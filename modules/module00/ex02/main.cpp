#include "SimpleString.hpp"

int main(int argc, char const *argv[])
{
  SimpleString simpleString;

  if (argc < 3) {
    std::cout << "Error: Invalid number of arguments" << std::endl;
    return 1;
  }
  simpleString.convert(argv[1], &argv[2], argc - 2);
  return 0;
}
