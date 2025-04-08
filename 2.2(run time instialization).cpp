A university managing academic data for its students. The administration seeks to digitize the records
of student performance, including personal and academic details. The system must store each
student's roll number, name, and marks in three subjects. Additionally, it should provide
functionalities to calculate and display the average marks for performance analysis.
The institution's IT team proposed a solution where student records could be initialized in two ways:
either with default values for testing purposes or by accepting specific input details for each student.
Once initialized, the system would allow for viewing comprehensive student details, including their
roll number, name, marks, and calculated average. This functionality was designed to help faculty and
administrators track individual student performance efficiently.
To simulate real-world usage, the team decided to create multiple student records. They planned to
populate the system with a mix of students initialized using both default and specific values. The
system's ability to accurately calculate averages and display detailed student information was to be
tested with this data.

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

    for(int i=0; i<3; i++)

    {
        int roll,m1,m2,m3;
        string name;
        if(i==1)
        {
            cout<<endl<<"DEFAULT CONSTUCTER CALL"<<endl;
            cout<<"Student " <<i+1<<" Detail enter "<<endl;
            stduent();
            s[i].Display();


        }
        else
        {
            cout<<"Enter Student " <<i+1<<" Detail "<<endl;
            cout<<"Enter The Roll Number ";
            cin>>roll;
            cout<<"Enter the name ";
            cin>>name;
            cout<<"Enter The Three Subject Mark ";
            cin>>m1>>m2>>m3;
            s[i]=stduent( roll, name, m1, m2, m3);
        }
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
