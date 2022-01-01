#include <iostream>
using namespace std;

class Person
{
  int height, weight;
  string bGroup, country;
  public:
    void getData()
    {
      cout << "Enter the height and weight." << endl;
      cin >> height >> weight;
      cout << "Enter the blood group." << endl;
      cin >> bGroup;
      cout << "Enter the country." << endl;
      cin >> country;
    }

    void display()
    { cout << "Height: " << height << endl << "Weight: " << weight << endl << "Blood group: " << bGroup << endl << "Country: " << country << endl; }
};

class Student: public Person
{
  string age, name, enrollNum;
  int marks[3];
  public:
    void getData()
    {
      Person::getData();
      cout << "Enter the name." << endl;
      cin >> name;
      cout << "Enter the age." << endl;
      cin >> age;
      cout << "Enter enrollment number." << endl;
      cin >> enrollNum;
      for (int i=0; i<3; i++)
      {
        cout << "Enter marks for subject " << i+1 << endl;
        cin >> marks[i];
      }
    }

    void display()
    {
      Person::display();
      cout << "Name: " << name << endl << "Age: " << age << endl << "Enrollment Number: " << enrollNum << endl;
      cout << "Marks:" << endl;
      for (int i=0; i<3; i++)
        cout << marks[i] << endl;
    }
};

class Faculty: public Person
{
  string name, code, dept, age, exp, gender;
  int salary;
  public:
    void getData()
    {
      Person::getData();
      cout << "Enter the name." << endl;
      cin >> name;
      cout << "Enter the faculty code." << endl;
      cin >> code;
      cout << "Enter the department." << endl;
      cin >> dept;
      cout << "Enter age, experience and salary." << endl;
      cin >> age >> exp >> salary;
      cout << "Enter the gender." << endl;
      cin >> gender;
    }

    void display()
    {
      Person::display();
      cout << "Name: " << name << endl << "Faculty Code: " << code << endl << "Department: " << dept << endl << "Age: " << age << endl << "Experience: " << exp << endl << "Gender: " << gender << endl << "Salary: " << salary << endl;
    }
};

int main()
{
  Student s;
  Faculty f;
  s.getData();
  s.display();
  f.getData();
  f.display();
}
