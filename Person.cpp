#include <iostream>
#include <string>

using namespace std;

class Person {
string lname; // Person’s last name
string fname; // Person’s first name

public:
Person() {lname = "" ; fname = "" ;}
Person(const string & ln) {lname=ln;}
Person(const string & ln, const string & fn) { lname=ln;  fname=fn; }

// the following methods display lname and fname
void Show() { cout<<fname<<" "<<lname<<endl; }
void FormalShow() { cout<<lname<<" "<<fname<<endl; }
};

int main()
{
    Person one; // use default constructor
    Person two("Smythecraft"); // use #2 with one default argument
    Person three("Dimwiddy", "Sam"); // use #2, no defaults

    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;

    return 0;
}
