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
    string name;
    string dept;
    string subject;

    Teacher()
    {
        cout << "I'm Non-parameterized Constructor\n";
    }

    Teacher(string name, string dept, string subject)
    {
        // this is a special pointer in c++ that points to the current objects
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "Dept.: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Teacher t1();
    Teacher t2("Jahid", "CSE", "C++");

    t2.getInfo();

    return_loser;
}