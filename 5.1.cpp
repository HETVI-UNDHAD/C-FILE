#include<iostream>

#include<vector>
using namespace std;
class calculator
{

public:
    int add(int a,int b)
    {

        return a+b;

    }
    double add(double a,double b)
    {

        return a+b;

    }
    double add(int a,double b)
    {

        return a+b;

    }
};
int main()
{

    cout<<"USING VECTOR FIRST"<<endl;

calculator c;
    vector<double>result;

    result.push_back(c.add(10,70));
    result.push_back(c.add(10.9,70.6));
    result.push_back(c.add(10,70.3));
    for(int i=0;i<result.size();i++)
    {

        cout<< "result " << i+1 <<" : "<<  result[i]<<endl;
    }

    cout<<"use array and user give value"<<endl;
     int choice = 3;
    double userResults[3];

    for (int i = 0; i < choice; i++)
    {
        double a, b;
        cout << "Enter value of a and b: ";
        cin >> a >> b;
        userResults[i] = c.add(a, b);
    }

    for (int i = 0; i < choice; i++)
    {
        cout << "User Result " << i + 1 << " : " << userResults[i] << endl;
    }


    cout<<endl<<endl<<"24ce131_hetvi"<<endl;
return 0;



}
