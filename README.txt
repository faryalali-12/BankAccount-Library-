Name: Faryal Ali
Roll No: BSCS-14-F25-34
Course: OOP
Project Title: Bank Management System

Description:
This project is a system made using C++ OOP concepts:
It includes:
Class:
 Account
 CurrentAccount
 SavingsAccount
 deposit
 withdraw
 CreateAccount
Constructors:(only adding names and parameters if any)
Account() 
Account(int a, string n, float b)
CurrentAccount() 
CurrentAccount(int a, string n, float b, float o) : Account(a, n, b) 
SavingsAccount() 
SavingsAccount(int a, string n, float b, float i) : Account(a, n, b)
deposit()  
deposit(int a, string n, float b, float am) : Account(a, n, b)
withdraw() 
withdraw(int a, string n, float b, float am) : Account(a, n, b) 
createAccount() {} 
createAccount(int a, string n, float b) 
Operators:
bool operator==(const Account& other)
Account operator+(const Account& other)
Account operator-(double amount)
Concepts:
Abstraction
Polymorphism
Inheritance
Encapsulation