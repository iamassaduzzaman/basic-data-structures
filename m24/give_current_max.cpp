#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};

class cmp
{
public:
    bool operator()(Student a, Student b)
    {
        if (a.marks < b.marks)
        {
            return true;
        }
        else if (a.marks > b.marks)
        {
            return false;
        }
        else
        {
            if (a.roll > b.roll)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
};
int main()
{
    priority_queue<Student, vector<Student>, cmp> p;
    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        Student obj(name, roll, marks);
        p.push(obj);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            Student obj(name, roll, marks);
            p.push(obj);

            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
            }
        }

        if (x == 1)
        {
            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
            }
        }

        if (x == 2)
        {
            if (p.empty())
            {
                cout << "Empty" << endl;
            }
            else
            {
                p.pop();
                if (p.empty())
                {
                    cout << "Empty" << endl;
                }
                else
                {
                    cout << p.top().name << " " << p.top().roll << " " << p.top().marks << endl;
                }
            }
        }
    }

    return 0;
}