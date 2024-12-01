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
private: // data & method accessable inside class only
    double salary;

public: // data & method accessable by everyone
    // Properties / attributes
    string name;
    string dept;
    string subject;

    // Methods / member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    // setter
    void setSalary(double s)
    {
        salary = s;
    }

    // getter
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Teacher t1;
    t1.name = "Jahidul islam";
    t1.dept = "CSE";
    t1.subject = "OOPS";
    t1.setSalary(70000);

    cout << t1.getSalary() << endl;

    return_loser;
}