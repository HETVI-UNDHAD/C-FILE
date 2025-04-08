#include<iostream>
using namespace std;
class stduent
{
    int RollNum;
    string name;
    float mark[3];
public:
    /* default constucter */
    stduent()
    {
        RollNum=0;
        name="default name";
        mark[0]=mark[1]=mark[2]=0;
    }
    stduent(int roll,string n,float m1,float m2,float m3)
    {


        RollNum=roll;
        name=n;
        mark[0]=m1;
        mark[1]=m2;
        mark[2]=m3;
    }

    double AveregeMark()
    {

        return (mark[0]+mark[1]+mark[2])/3.0;
    }

    void Display()
    {
        cout<<"The Roll Number Is "<<RollNum<<endl;
        cout<<"The Name Is "<<name<<endl;
        cout<<"The Mark Is "<<mark[0]<<" "<<mark[1]<<" "<<mark[2]<<endl;
        cout<<"The Average of Mark Is "<<  AveregeMark()<<endl;
        cout<<endl;

    }

};


int main()
{
    stduent s[3];
     cout<<endl<<"DEFAULT CONSTUCTER CALL"<<endl;
     stduent S1;
     S1.Display();

    for(int i=0; i<3; i++)

    {
        int roll,m1,m2,m3;
        string name;


            cout<<"Enter Student " <<i+1<<" Detail "<<endl;
            cout<<"Enter The Roll Number ";
            cin>>roll;
            cout<<"Enter the name ";
            cin>>name;
            cout<<"Enter The Three Subject Mark ";
            cin>>m1>>m2>>m3;
            s[i]=stduent( roll, name, m1, m2, m3);

        }
    for(int i=0; i<3; i++)
    {
        cout<<"---------------------------------"<<endl;
        cout<<"stduent " <<i+1<<" detail "<<endl;
        s[i].Display();
    }

    cout<<"24CE131_HETVI";
    cout<<endl;
}
