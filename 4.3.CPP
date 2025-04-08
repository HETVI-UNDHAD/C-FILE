/*A vehicle manufacturing company sought to create a robust system to organize and manage the
details of various cars produced under its brand. To accomplish this, a hierarchical structure was
conceptualized, reflecting the essential components of a vehicle. At the foundation, a class was
designed to represent the type of fuel a vehicle uses. Another class was created to capture the brand
name of the vehicle. These two foundational elements were then combined into a derived class
specifically representing cars, integrating both fuel type and brand information.
Constructors were used at each level to ensure proper initialization of attributes, allowing seamless
integration of all details. Additionally, the ability to display complete information about a car, including
its fuel type and brand, was incorporated into the system. To simulate a real-world scenario such as a
service queue, multiple cars were organized and processed sequentially using a structured approach.
This not only streamlined the handling of cars but also provided an opportunity to compare different
methods of managing the collection and processing of vehicle data.*/



#include<iostream>
#include<queue>
using namespace std;

class Brand
{

    string BrandName;
public:
    Brand(string BrnName){
        BrandName=BrnName;


    }
    void DisplayBrand()
    {

        cout<<"Brand Name "<<BrandName<<endl;
    }
};
class Fuel
{
    string FuelName;
public:
   Fuel(string F_Name)
   {
    FuelName= F_Name;


   }
    void DisplayFuel()
    {

        cout<<"Fuel Name "<<FuelName<<endl;
    }

};
class Car:public Brand,public Fuel
{

    string ModelOfCar;

public:
    Car(string BrnName,string F_Name,string mdl ):Brand(BrnName),Fuel(F_Name)
    {
      ModelOfCar=  mdl;


    }
    void displayCar()
    {
     DisplayBrand();
       DisplayFuel();
       cout<<"Model Of Car " <<ModelOfCar<<endl;
    }
};
int main()
{
int choice;
  queue<Car>CQ;
  CQ.push(Car("toyto","petrol","suzuki"));
  /*cout<<"ENTER THE CHOICE";
  cin>>choice;
  for(int i=0;i<choice;i++)
  {


  string BN,FN,CN;
  cout<<"ENTER THE BrandName";
  cin>> BN>>FN>>CN;
  CQ.push(Car(BN,FN,CN));
  }*/
  while(!CQ.empty())
  {

      Car c=CQ.front();
      c.displayCar();
      cout<<"-----------------------"<<endl;
      CQ.pop();
  }
   cout<<endl<<"24CE131_HETVI";
  return 0;
}

