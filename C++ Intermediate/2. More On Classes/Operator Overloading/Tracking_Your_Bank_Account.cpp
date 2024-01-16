// Use operator overloading for your program for a Bank to manage Accounts.

#include <iostream>
using namespace std;

class NewAccount;

class Account {
private:
    int balance = 0;
    int interest = 0;

public:
    Account() {}

    Account(int a) : balance(a) {
        interest += balance / 10;
    }

    int getTotal() const {
        return balance + interest;
    }

    NewAccount& operator+(Account &obj);
};

class NewAccount {
private:
    int total = 0;

public:
    void setTotal(int value) {
        total = value;
    }

    int getTotal() const {
        return total;
    }
};

NewAccount& Account::operator+(Account &obj) {
    NewAccount* ac = new NewAccount;
    ac->setTotal(this->getTotal() + obj.getTotal());
    return *ac;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    Account a(n1);
    Account b(n2);

    NewAccount& res = a + b;

    cout << res.getTotal();

    delete &res;

    return 0;
}