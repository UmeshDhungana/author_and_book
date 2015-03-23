#include <iostream>

using namespace std;

class Author{
private:
    string name;
    string gender;
    string email;

public:
    Author(string authorName, string authorGender, string authorEmail);
    Author();
    void setEmail(string authorEmail);
    string getName();
    string getGender();
    string getEmail();
    string toString();
};
