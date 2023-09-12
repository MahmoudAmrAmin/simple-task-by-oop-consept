#include<bits/stdc++.h>
using namespace std;
const char ESC = 27;
#define ll long long
#define Endl endl
class Student
{
private:
    int Id ; string first_name , last_name;
public:
    Student():Id(0),first_name("no name"),last_name("no name"){};
    void SetId(int Id);
    void SetFirstName(string first_name);
};
void Student ::SetId(int Id)
{
    this-> Id = Id;
}
void Student ::SetFirstName(string  first_name)
{
    this -> first_name =first_name;
}
int main () {

}

