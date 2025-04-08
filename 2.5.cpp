A regional banking institution sought to improve its loan management process by developing a system
that could efficiently handle loan details for applicants. The system was expected to streamline the
calculation of monthly EMIs (Equated Monthly Instalments) and provide detailed loan summaries for
customers. This initiative aimed to enhance customer experience by offering accurate and transparent
information about their loans.

To meet these requirements, the bank's technology team was tasked with designing a solution. They
envisioned a system where each loan would be uniquely identified by a loan ID, and additional details
such as the applicant's name, total loan amount, annual interest rate, and loan tenure in months
would be stored. The team also emphasized the importance of accurately calculating the EMI using a
standard formula based on the loan amount, interest rate, and tenure. The formula incorporated
compound interest principles to determine the fixed monthly payment for the loan term.

EMI=
P ∗ R ∗ (1 + R)^T
((1+R)^T) −1

As part of the implementation, the developers planned to initialize loans either with default values for
testing purposes or with actual customer data provided at the time of application. The system needed

to include a feature to display comprehensive loan details, including the calculated EMI, in a customer-
friendly format. This functionality was intended to aid both customers and bank staff in managing
loan-related queries effectively.




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
