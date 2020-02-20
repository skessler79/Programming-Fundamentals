#include <iostream>

using namespace std;

class SavingsAccount
{
public:
    //SavingAccount();
    //~SavingAccount();
    
    void openAccount(float d, float c);
    void deposit(float d, float c);
    void withdraw(float d, float c);
    void showBalance();

private:
    float dollars;
    float cents;
};

void SavingsAccount::openAccount(float d, float c)
{
    dollars = d;
    cents = c;
    while(cents >= 100)
    {
        cents-=100;
        dollars++;
    }
}

void SavingsAccount::deposit(float d, float c)
{
    dollars+=d;
    cents+=c;
    while(cents >= 100)
    {
        cents-=100;
        dollars++;
    }
}

void SavingsAccount::withdraw(float d, float c)
{
    dollars-=d;
    cents-=c;
    while(cents < 0)
    {
        cents+=100;
        dollars--;
    }
}

void SavingsAccount::showBalance()
{
    printf("balance : %.0f.%.0f", dollars, cents);
}

int main()
{
    SavingsAccount bank1;
    bank1.openAccount(200, 50);
    bank1.deposit(40, 50);
    bank1.withdraw(100, 98);
    bank1.showBalance();
}






