/*A team of engineers was tasked with developing a program to calculate and manage the areas of

multiple circles for a design project. To achieve this, they devised a solution using a structured, object-
oriented approach. At the foundation of their solution was a base class that represented a generic

shape, responsible for storing and managing the radius of the circle. Building upon this, a specialized
class for circles was created to extend functionality by introducing a method for calculating the area
of a circle based on its radius. Using this framework, the team designed a system to handle multiple
circles, ensuring that the process of storing, calculating, and displaying the areas was efficient and
adaptable. They explored two different approaches for managing the collection of circles—one
focusing on flexibility and dynamic handling, while the other used a more static structure. By
implementing and comparing these methods, the engineers gained insights into the benefits of using
efficient techniques for organizing and processing geometric data, enhancing their problem-solving
capabilities.*/

#include<iostream>
#define PI 3.14
using namespace std;
class R
{
protected:

    double radius;
public:
    void getR()
    {
        cin>>radius;
    }
    double displayR()
    {
        return radius;
    }
};
class circles: public R
{
    double area;
public:
    void getArea()
    {
        getR();
        area = PI*radius*radius;
    }
    void displayData()
    {
        cout<<"AREA IS FOR R = "<<radius<<" AREA = "<<area<<endl;
    }
};
int main()
{
    long long choice;
    cout<<"ENTER THE CIRCLES (YOU FIND AREA) ";
    cin>>choice;
    circles d[choice];
    for(int i=0; i<choice; i++)
    {
        cout<<"ENTER THE RADIUS FOR "<<i+1<<" CIRCLES ";
        d[i].getArea();
    }
    for(int i=0; i<choice; i++)
    {
        cout<<"AREA OF CIRCLE "<<i+1<<endl;
        d[i].displayData();
    }
    cout<<"24CE131_HETVI";
}
