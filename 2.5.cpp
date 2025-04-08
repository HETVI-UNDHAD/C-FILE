

#include<iostream>
#include<cmath>
using namespace std;
class Loan
{
    int loanID;
    string applicantName;
    float loanAmount;
    float interestRate;
    float loanTerm ;
    float claculate_EMI()
    {
     float P = loanAmount;
        float T = loanTerm;
        float R = interestRate / 100 / 12;

        if (R == 0)
            return P / T;


        float numerator = P * R * pow(1 + R, T);
        float denominator = pow(1 + R, T) - 1;

        return numerator / denominator;
    }



public:
    Loan()
    {
        loanID = 0;
        applicantName = "N/A";
        loanAmount = 0.0;
        interestRate = 0.0;
        loanTerm = 0;
        claculate_EMI();


    }
    Loan(int Id,string Name,float money,float rate,float month)
    {
       loanID = Id;
        applicantName =Name;
        loanAmount = money;
        interestRate = rate;
        loanTerm = month;
        claculate_EMI();

    }
    void display()
    {

        cout<<"YOUR ID IS "<<loanID<<endl;
        cout<<"NAME IS "<<applicantName<<endl;
        cout<<"LOAN  IS "<<loanAmount<<endl;
        cout<<"INTREST IS "<<interestRate<<"%"<<endl;
        cout<<"TOTAL MONTH IS "<<loanTerm<<endl;
        cout<<"EMI   "<<claculate_EMI()<<endl;
    }

};
int main()
{
    Loan L;
    cout<<"default Constructor is call "<<endl;
    L.display();

    int ID;
    string name;
    float Rate,money,time;
    cout<<endl<<"ENTER ID ";
    cin>>ID;
    cout<<"ENTER NAME ";
    cin>>name;
    cout<<"ENTER RATE ";
    cin>>Rate;
    cout<<"ENTER MONEY $ ";
    cin>>money;
    cout<<"ENTER TIME (IN MONTHS) ";
    cin>>time;
    cout<<endl;

    Loan l(ID,name,money,Rate,time);
    l.display();

 cout<<"24CE131_HETVI";
    return 0;
}
