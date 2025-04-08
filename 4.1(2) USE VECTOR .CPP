
#include<iostream>
#include<vector>
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
    void displayData () const
    {
        cout<<"AREA IS FOR R = "<<radius<<" AREA = "<<area<<endl;
    }
};
int main()
{
    long long choice;
    cout<<"ENTER THE CIRCLES (YOU FIND AREA) ";
    cin>>choice;
    vector<circles> d(choice);
    for(int i=0; i<d.size(); i++)
    {
        cout<<"ENTER THE RADIUS FOR "<<i+1<<" CIRCLES ";
        d[i].getArea();
    }
    for(const auto &s:d)
    {

        s.displayData();
    }

    cout<<endl<<"24CE131_HETVI";
    return 0;
}
