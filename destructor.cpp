#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define ll long long
#define vi vector<int>
#define pb push_back
#define return_loser return 0;

const int N = 1e5 + 10;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // parameterized constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // destructor
    ~Student()
    {
        cout << "I'm Deconstructor i delete everything\n";
        delete cgpaPtr;
    }
    void getInfo()
    {
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Student s1("Jahid", 3.32);
    s1.getInfo();

    return_loser;
}