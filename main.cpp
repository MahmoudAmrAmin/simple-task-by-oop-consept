#include<bits/stdc++.h>
using namespace std;
const char ESC = 27;
#define ll long long
#define Endl endl
class Student
{
private:
    int Id ; string first_name , last_name ,full_name;
public:
    Student():Id(0),first_name("no name"),last_name("no name"),full_name("no name"){};
    void SetId(int Id);
    void SetFirstName(string first_name);
    void SetLastName(string last_name);
    string GetFullName();
};
void Student ::SetId(int Id)
{
    this-> Id = Id;
}
void Student ::SetFirstName(string  first_name)
{
    this -> first_name =first_name;
}
void Student ::SetLastName(std::string last_name)
{
    this -> last_name =last_name;
}
string Student ::GetFullName() {
    full_name=first_name+" "+last_name;
    return full_name;
}
int main () {
     Student ob1;
     int id ;string FirstName ,LastName;
     cout<<"enter student of id "<<endl;
     cin>>id;
     ob1.SetId(id);
     cout<<"enter first name of  student "<<endl;
     cin>>FirstName;
     ob1.SetFirstName(FirstName);
     cout<<"enter last name of student "<<endl;
     cin>>LastName;
     ob1.SetLastName(LastName);
     cout<<"full name of student is "<<ob1.GetFullName()<<Endl;

}
