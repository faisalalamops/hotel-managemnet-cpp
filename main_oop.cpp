// #include<iostream>
// #include<string>
// using namespace std;
// class Student
// {
//     public:
//     //attributes
//     int id;
//     int age;
//     string name;
//     int nos;

// private:
//     int *gpa;
//     string gf;  
// public:
//      //ctor: Default ctor
//     Student()
//     {
//         cout << "Default ctor called" << endl;
//     } 
    
//     // ctor: Parameterized ctor
//     Student(int id, int age, string name, int nos , float gpa, string gf)  

//     {
//         cout << "Parameterized ctor called" << endl;
//         this ->id = id;
//         this ->age = age;
//         this ->name = name;
//         this ->nos = nos;
//         this ->gpa = new int(gpa);
//         this ->gf = gf;
//     }
//     // copy ctor
//     Student(const Student &srcobj) // srcobj => A
//     {
//         cout << "Copy ctor called" << endl;
//         this->id = srcobj.id;
//         this->age = srcobj.age;
//         this->name = srcobj.name;
//         this->nos = srcobj.nos;
//         this->gpa = new int(*(srcobj.gpa));
//     }
//     //behaviors /methods / functions
//     void study()
//     {
//         cout << this->name << " is studying." << endl;
//     }
//     void sleep()
//     {
//         cout << this->name << " is sleeping." << endl;

//     }
//     void bunk()
//     {
//         cout << this->name << " is bunking." << endl;
//     }
// private:
//     void gfchatting()
//     {
//         cout << this->name << " is chatting with gf." << endl;
//     }
 

// };
// int main()
// {

//   Student s1(1, 20, "John", 5, 3.5, "Jane");

//   s1.study();
//   s1.sleep();
//   s1.bunk();
  


//   return 0;
 
// }
//implemnenting inheritance in cpp    
#include<iostream>
#include<string>

using namespace std;
class vehicle
{
public:    
    string name;
    string model;
    int noOftyers;
 //constructor
    vehicle(string _name, string _model, int _noOftyers)
    {
        this->name = _name;
        this->model = _model;
        this->noOftyers = _noOftyers;
    }   

public:
    void start_engine()

    {
        cout << "Engine started" << endl;
    }
    void stop_engine()
     
    {
        cout << "Engine stopped"  << endl;
    }
}; 

class car : public vehicle
{
public:
    int noOfDoors;
    string transmission;

//constructor
    car(string _name, string _model, int _noOftyers, int _noOfDoors, string _transmission) : vehicle(_name, _model, _noOftyers)
    {
        this->noOfDoors = _noOfDoors;
        this->transmission = _transmission;
    }

    void startAC()
    {
        cout << "AC started" << endl;
    }
    
    {
        cout << "" << endl;
    }
}



int main()
{
    return 0;
}
