#include <iostream>
#include <string>
using namespace std;

class BankAccount {

public:
BankAccount();
BankAccount(double, double, int, string);
double getBalance();
void deposit(double);
void withdraw(double);
void addInterest();
void displayAccountSummary();


private:
double balance;
int accountNumber;
string ownerName;
double interestRate;
};