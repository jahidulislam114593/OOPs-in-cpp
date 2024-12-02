#include <bits/stdc++.h>
using namespace std;

#define PI acos(-1.0)
#define ll long long
#define vi vector<int>
#define pb push_back
#define return_loser return 0;

const int N = 1e5 + 10;

class Person
{
public:
    string name;
    int age;

    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
};

class Student : public Person
{
public:
    int rollno;

    Student(string name, int age, int rollno) : Person(name, age)
    {
        this->rollno = rollno;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << rollno << endl;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    Student s1("Jahid", 25, 123);

    s1.getInfo();

    return_loser;
}