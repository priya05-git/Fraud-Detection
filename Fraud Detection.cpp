#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n==2||n==3||n==5||n==7)
    return true;
    return false;
}

int factorial(int n)
{
    int f=1;
    for(int i=1;i<=n;i++)
    f=f*i;
    return f;
}

int tableSum(int n)
{
    int sum=0;
    for(int i=1;i<=10;i++)
    sum=sum+(n*i);
    return sum;
}

int main()
{
    int num,digit;
    int riskScore=0;

    cout<<"Enter Transaction ID: ";
    cin>>num;

    while(num>0)
    {
        digit=num%10;

        if(isPrime(digit))
        {
            riskScore+=tableSum(digit);
        }
        else if(digit>1)
        {
            riskScore+=factorial(digit);
        }

        num=num/10;
    }

    cout<<"Risk Score = "<<riskScore<<endl;

    if(riskScore<100)
    cout<<"Risk Level: LOW RISK"<<endl;
    else if(riskScore<=1000)
    cout<<"Risk Level: MEDIUM RISK"<<endl;
    else
    cout<<"Risk Level: HIGH RISK"<<endl;

    return 0;
}
