#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define ll long long
#define vi vector<int>
#define pb push_back
#define return_loser return 0;

const int N = 1e5 + 10;

class Teacher
{
private:
    double salary;

public:
    // Properties / attributes
    string name;
    string dept;
    string subject;

    // Non-Parameterized Constructor
    Teacher()
    {
        cout << "Hello From Constructor" << '\n';
    }

    // Parameterized Constructor
    Teacher(string name, string dept, string subject, double salary)
    {
        cout << "I'm From Constructor" << '\n';
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    // Custom Copy-Constructor
    Teacher(Teacher &orjObj)
    {
        cout << "I'm From Cumtom Constructor..\n";
        this->name = orjObj.name;
        this->dept = orjObj.dept;
        this->subject = orjObj.subject;
        this->salary = orjObj.salary;
    }

    // Methods / member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void getInfo()
    {
        cout << "Name: " << name << '\n';
        cout << "Dept.: " << dept << '\n';
        cout << "Subject: " << subject << '\n';
        cout << "Salary: " << salary << '\n';
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Teacher t1("Jahid", "CSE", "OOPs", 30000); // constructor called automatically by compiler if we don't create

    // Teacher t2(t1); // default copy constructor
    Teacher t2(t1); // Custom Copy-Constructor
    t2.getInfo();

    return_loser;
}