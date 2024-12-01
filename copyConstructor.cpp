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

    // copy-constructor
    Student(Student &obj)
    {
        this->name = obj.name;
        this->cgpaPtr = obj.cgpaPtr;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Cgpa: " << *cgpaPtr << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Student s1("Jahid", 3.30);
    // Student s2(s1); // default copy construtor (shallow copy)
    Student s2(s1); // Custom copy construtor (shallow copy)
    s1.getInfo();
    *(s2.cgpaPtr) = 3.9;
    s1.getInfo();

    return_loser;
}