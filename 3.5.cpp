#include<iostream>
using namespace std;
int SuperDigit(int x)
{

    if(x<10)
    {

        return x;
    }
    else
    {
        int Sum=0;
       while(x>0)
        {

            Sum+=x%10;
            x/=10;
        }
        return SuperDigit(D);

    }
}
int main()
{

    int number,k;


    cout<<"ENTER THYE NUMBER AND HOW MANY IT REPEAT";
    cin>>number>>k;
int    result=sum(number);
int    final=result*k;

    cout<<" ANS IS  "<<sum(final);
     cout<<"24CE131_HETVI";
}
