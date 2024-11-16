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
public:
    // Properties / attributes
    string name;
    string dept;
    string subject;
    double salary;
    // Methods / member function
    void changeDept(string newDept)
    {
        dept = newDept;
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
    t1.salary = 90000;

    cout << t1.salary << endl;

    return_loser;
}