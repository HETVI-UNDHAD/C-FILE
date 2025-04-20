
#include<iostream>
#include<string>

#include<vector>
using namespace std;
class add{

   int real_num;
   int img_num;
   public:
        add() : real_num(0), img_num(0) {}
     add(int real,int img)
     {
        real_num=real;
        img_num=img;

     }
     void display()
     {
         cout<<real_num<<"+"<<img_num<<"i"<<endl;

     }
     add operator+(add &c)
     {

         add result;
         result.real_num=real_num+c.real_num;
         result.img_num=img_num+c.img_num;
         return result;
     }

};

int main()
{
    add c1,c2,c3;
    int a,b,c,d;
    cout<<"enter two complex numbers :"<<endl;
cout<<"(real and imaginary part)"<<endl;
cout<<"(assume that fist entered value is for real part and another one is for imaginary):"<<endl;
cin>>a>>b>>c>>d;

c1=add(a,b);
c2=add(c,d);

c1.display();
c2.display();
c3=c1+c2;
c3.display();
cout<<"24ce131_hetvi";
return 0;

}
