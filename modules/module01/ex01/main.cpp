#include "Car.hpp"
#include "SportsCar.hpp"
using namespace std;

int main()
{
    SportsCar seame("aa", "bb", 2023, 100);
    SportsCar seame2;
    seame2 = seame;
    seame2.drive();
    return 0;
}