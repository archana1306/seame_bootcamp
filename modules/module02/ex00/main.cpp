#include "Car.hpp"
#include "SportsCar.hpp"
#include <memory>
using namespace std;

int main()
{
    
    unique_ptr<Car> tesla(new Car("Tesla", "t1", 2019));
    tesla->drive();

    
   
  

  shared_ptr<Car> bmw(new Car("bmw", "V2", 2019));
  shared_ptr<Car> abc = bmw;
  bmw->drive();
  abc->drive();

  cout << "shared count is " << bmw.use_count() << std::endl; 

  

  
  

  shared_ptr<Car> ferrari(new Car("ferrari", "V2", 2019));
  weak_ptr<Car> maserati = ferrari;
  ferrari->drive();
  maserati.lock()->drive();

  cout << "shared count is " << ferrari.use_count() << std::endl; 




  return 0;
}