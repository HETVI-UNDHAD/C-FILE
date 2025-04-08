#include<iostream>
#include<vector>

using namespace std;
class emp
{
    string name;
    double b_salary;
    double bouns;
public:
    emp(string N,double B_salary)
    {
        name=N;
        b_salary=B_salary;
        bouns = 500;



    }

    emp(string N,double B_salary,double B)
    {

        name=N;
        b_salary=B_salary;
        bouns=B;



    }
    double cal_salary()
    {
        return b_salary+bouns;

    }
    void display()
    {

        cout<<"NAME is "<<name<<endl;
        cout<<"SALARY is "<<b_salary<<endl;
        cout<<"BOUNS is "<<bouns<<endl;
        cout<<"TOTAL SALARY IS "<<cal_salary()<<endl;
         cout << "------------------------" << endl;

    }


};
int main()
{
    vector<emp>emp1;
    string Name;
    double b_s,bo;
    int empllll;
    cout<<"Enter Employee Number "<<endl;
    cin>>empllll;
    for(int j=0; j<empllll; j++)
    {

        cout<<"Enter The "<<j+1<<" Employee name ";
        cin>>Name;
        cout<<"Enter The Basic Salary ";
        cin>>b_s;

        char A,Y,N;
        cout<<"YOU WANT GIVE A BOUNS Y/N ";
        cin>>A;
        if(A == 'Y' || A == 'y')
        {
            cout<<"Enter Bouns ";
            cin>>bo;
            emp1.emplace_back(Name,b_s,bo);



        }
        else
        {
            emp1.emplace_back(Name,b_s);
        }

    }

    int i;


 cout << "\nEmployee Details:"<<endl<<endl;
    for(auto&i:emp1)
    {

        i.display();
    }
    cout<<"24CE131_HETVI";
    return 0;
}

