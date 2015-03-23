#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main()
{
    string author, email;
    string gender;
    string name;
    int quantity;
    float price;

    cout<<"Enter the name, gender and email address of author:";
    cout << endl;

    getline(cin,author);
    cin >> gender;
    cin.get();
    getline(cin,email);

    cout<< "Enter the name, price and quantity of book: ";
    getline(cin, name);
    cin>> price;
    cin>> quantity;

    Author newAuthor(author, gender, email);
    Book book1 (name, newAuthor, price);
    Book book2 (name, newAuthor, price, quantity);

    cout<<"Author and book information: "<< endl;
    cout<< book2.toString();
}

