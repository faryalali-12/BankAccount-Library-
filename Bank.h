#pragma once
#include<iostream>
#include<string>
using namespace std;
class Account {
private:
	int accno;
	string name;
protected:
	float balance;
public:
	Account() {} // default constructor
	Account(int a, string n, float b) {
		accno = a;
		name = n;
		balance = b;
	}
	float getBalance() const {
		return balance;
	}
	void setBalance(float b) {
		balance = b;
	}
	void display() {
		cout << "Account No: " << accno << endl;
		cout << "Name: " << name << endl;
		cout << "Balance: " << balance << endl;
	}
};
class CurrentAccount : public Account {
private:
	float overdraftLimit;
public:
	CurrentAccount() {} // default constructor
	CurrentAccount(int a, string n, float b, float o) : Account(a, n, b) {
		overdraftLimit = o;
	}
	void display() {
		Account::display();
		cout << "Overdraft Limit: " << overdraftLimit << endl;
	}
};
class SavingsAccount : public Account {
	private:
		float interestRate;
public:
	SavingsAccount() {} // default constructor
	SavingsAccount(int a, string n, float b, float i) : Account(a, n, b) {
		interestRate = i;
	}
	bool operator==(const Account& other) {
		return balance == other.getBalance();
	}
	void display() {
		Account::display();
	}
};
class deposit :public Account {
private:
	float amount;
public:
	deposit() {} // default constructor
	deposit(int a, string n, float b, float am) : Account(a, n, b) {
		amount = am;
	}
	int depositamm(int amount) {
		balance += amount;
		return balance;
	}

	double depositamm(double amount) {
		balance += amount;
		return balance;
	}
	Account operator+(const Account& other) {
		Account temp;
		temp.setBalance(balance + other.getBalance());
		return temp;
	}
	void depositnote(int amount, string note) {
		balance += amount;
		cout << "Deposit note: " << note << endl;
	
	}
};
	class withdraw :public Account {
	private:
		float amount;
	public:
		withdraw() {} // default constructor
		withdraw(int a, string n, float b, float am) : Account(a, n, b) {
			amount = am;
		}
		void withdrawamm(int amount) {
			if (amount < balance) {
				balance -= amount;
			}
			else {
				cout << "Insufficient funds for withdrawal." << endl;
			}
		}
		Account operator-(double amount) {
			Account temp = *this;
			temp.setBalance(temp.getBalance() - amount);
			return temp;
		}
		float withdrawamm(int amount, string note) {
			balance -= amount;
			cout << "Withdraw note: " << note << endl;
		}
};
class createAccount {
	private:
	int accno;
	string name;
	float balance;
public:
	createAccount() {} // default constructor
	createAccount(int a, string n, float b) {
		accno = a;
		name = n;
		balance = b;
	}
	Account createAcc(int accno, string name, float balance) {
		return Account(accno, name, balance);
	}
};