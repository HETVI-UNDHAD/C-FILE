A growing organization sought to enhance its payroll process to improve accuracy and efficiency in
calculating employee salaries. The goal was to manage details such as the employee's name, basic
salary, and bonus amount. While most employees would receive a default bonus, there was a need
for flexibility to provide customized bonuses for exceptional performers or those in specialized roles.
To ensure real-time computation of each employee's total salary, the system would dynamically
calculate the total salary by adding the basic salary and the bonus. An inline function was chosen for
this task, allowing the system to compute the total salary instantly during processing. The system was
designed to initialize employee records using a constructor, where the bonus could either be set to a
default value or adjusted according to specific employee criteria.
As the organization expanded, managing employee records efficiently became a key consideration.
The solution involved storing employee details dynamically, ensuring the system could handle a
growing number of records while maintaining scalability and flexibility. Each employee record would
include their personal details, basic salary, and bonus information, with the system displaying a
breakdown of each employee’s details along with their total salary.


    
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

