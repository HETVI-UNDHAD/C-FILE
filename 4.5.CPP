//OVERRIDEING IS RUN TIME
//overloading complie time
#include<iostream>
#include<stack>
#include<vector>
using namespace std;
class student{
  protected :
      int marks;
  public:
    void getmarks(int m)
    {

        marks=m;
    }
    virtual string getgrade()=0;

};
class undergraduate: public student{

public:
    string getgrade(){
        if(marks>=85) return "A";
        else if(marks>=70) return "B";
        else if(marks>=50) return "C";
        else return "F";

    }
};
class postgraduate: public student{

public:
    string getgrade(){
        if(marks>=90) return "A";
        else if(marks>=75) return "B";
        else if(marks>=60) return "C";
        else return "F";

    }
};

int main()
{

    vector<student*>students;
    int n;
    cout<<"ENTER THE STUDENT NUMBER";
    cin>>n;
    for(int i=0;i<n;i++)
    {

        int type;
        int m;
        cout<<endl<<"enter the type (1 FOR UG,2 FOR PG) ";
        cin>>type;
        cout<<"enter the marks ";
        cin>>m;
        student *s=nullptr;
        if(type==1)
        {
          s=new undergraduate;

        }
        else if(type ==2)
        {
          s=new postgraduate;

        }
        else{

            cout<<"ENTER THE VALID NUMBER .........."<<endl;
            continue;
        }

        s->getmarks(m);

        students.push_back(s);


    }
    for(int i=0;i<students.size();i++)
    {
      cout<<"student "<<i+1<<" GRADE "<<students[i]->getgrade()<<endl;

    }
    cout<<endl<<"24ce131_hetvi";
    for (int i=0;i<n;i++)
    {
       delete students[i];
    }


}

