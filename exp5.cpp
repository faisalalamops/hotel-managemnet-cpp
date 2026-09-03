// #include<iostream>
// using namespace std;
// class Student
// {
//     int rollno;
    
// public:
//     Student(int r)
//     {
//         rollno = r;
//     }
//     Student()
//     {
//         rollno = 0;
//     }
//     void display();{
//         cout << "Roll No;"
//     }
// };
#include<iostream>  
using namespace std;

class wall
{
    double length;
    
public:
    void setWall( )
    {
        length = 20;
        cout << "Length: " << length << endl;
    }
};
int main()
{
    wall w1;
    w1.setWall();
    return 0;
}

