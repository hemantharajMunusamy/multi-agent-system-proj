// ***********************
// C++ demo program 1
// To show:
//        1) Use the given code (bankAccount) and play around with the
//        instantiation of the object, so that you invoke un-parameterized
//        constructor. 2) Add some more functionality to the program: include a
//        withdraw method into the bankAccount class, taking care to not allow
//        the user to
//           withdraw money if they don't have sufficient funds.
//        3) Add another withdraw method (an overloading method) which allows
//        the user to withdraw more money that they have in their bank account
//           (to emulate an overdraft).

#include <iostream>

class BankAccount {
 private:
  double balance;

 public:
  BankAccount() { balance = 0.0; }

  BankAccount(double init_balane) { balance = init_balane; }

  void deposit(double amount) { balance += amount; }

  double getBalance() { return balance; }

  bool withdraw(double amount) {
    if(balance > amount) {
      balance -= amount;
      return true;
    }
    return false; 
  }

  bool withdraw(double amount, int overdraft) {
    balance -= amount;
    return true;
  }
};

int main() {
  char sterling = 156;  // ACSI for pound

  BankAccount myAcct;
  std::cout << "Balance is " << sterling << myAcct.getBalance() << std::endl;

  myAcct.deposit(750);
  std::cout << "Balance is " << sterling << myAcct.getBalance() << std::endl;

  std::cout << "Withdraw 850 from account " << myAcct.withdraw(850) << " new balance " << myAcct.getBalance() << std::endl;
  std::cout << "Withdraw 250 from account " << myAcct.withdraw(250) << " new balance " << myAcct.getBalance() << std::endl;

  std::cout << "Withdraw 600 from account using overdraft " << myAcct.withdraw(600, 1) << " new balance " << myAcct.getBalance() << std::endl;
}