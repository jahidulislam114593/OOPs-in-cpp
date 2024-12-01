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
    string program;
    double studentId;
    string session;

    void changeProgram(string newProgram)
    {
        string program = newProgram;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Student s1;
    s1.name = "Jahidul Islam";
    s1.program = "Bsc. in CSE";
    s1.studentId = 2003810202074;
    s1.session = "Fall 2020";
    cout << s1.studentId << endl;

    return_loser;
}