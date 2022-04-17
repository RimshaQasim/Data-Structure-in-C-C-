#include <iostream>
using namespace std;
class Student
{
public:
    int roll;
    string name;
    int reg_No;
    int id;
    string department;
    Student(string n, string sub);
    ~Student();
    Student(int r, string n, int r_n, int i)
    {
        roll = r;
        name = n;
        reg_No = r_n; 
        id = i;
    }
    Student(Student &obj)
    {
        roll = obj.roll;
        name = obj.name;
        reg_No = obj.reg_No;
        id = obj.id;
    }
    void display()
    {
        cout << "Student name is " << name << endl;
        cout << "Student id is " << id << endl;
        cout << "Student reg_No is " << reg_No << endl;
        cout << "Student roll is " << roll << endl;
        cout << endl;
    }
};
Student::Student(string n, string dep)
{
    name = n;
    department = dep;
}
Student::~Student()
{

    cout << "Dectorator Called "<< "\n";
};

int main()
{
    Student std(12, "Rimsha", 123455, 567);
    Student Std2 = std;
    std.display();
    Std2.display();
    Student std3("Rimsha", "Programming");
    cout << "Student name is " << std3.name << endl;
    cout << "Student Depatment is " << std3.department << endl;
    return 0;
}