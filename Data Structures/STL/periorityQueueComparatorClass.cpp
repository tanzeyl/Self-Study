#include <iostream>
#include <queue>
using namespace std;

class Person
{
  public:
  int age;
  string name;
  Person(){}
  Person(string n, int a) { name = n; age = a; }
};

class PersonComp
{
  public:
  bool operator()(Person A, Person B)
  { return A.age > B.age; }
};

int main()
{
  priority_queue<Person, vector<Person>, PersonComp> pq;
  int n, age, k;
  string name;
  cin >> n;
  for (int i=0; i<n; i++)
  {
    cin >> name >> age;
    Person p(name, age);
    pq.push(p);
  }
  cin >> k;
  for (int i=0; i<k; i++)
  {
    Person p = pq.top();
    cout << p.name << " " << p.age << endl;
    pq.pop();
  }
}
