#include <bits/stdc++.h>
using namespace std;
#define Endl endl
//sec6
class cstring
{
private:
    string x;
public:
    cstring():x(""){};
    cstring(string x){this->x=x;}
    cstring operator+(cstring ob)
    {
        x+=" "+ob.x;
        return *this;
    }
    friend ostream&operator<<(ostream&cout,cstring ob)
    {
        cout<<ob.x;
        return cout;
    }
    friend istream&operator>>(istream&cin,cstring &ob);
    bool operator==(cstring ob)
    {
        return (x==ob.x);
    }
};
istream&operator>>(istream&cin,cstring &ob)
{
    cin>>ob.x;
    return cin;
}
class binary{
private:
    float x;
public:
    binary():x(0.0){};
    binary(float y):x(y){};
    binary operator +(binary ob);
    binary operator -(binary ob);
    binary operator /(binary ob);
    binary operator++();
    binary operator++(int);
    binary operator +=(binary ob)
    {
        x+=ob.x;
        return *this;
    }
    friend ostream&operator<<(ostream&cout,binary ob)
    {
        cout<<ob.x;return cout;
    }
    friend istream&operator>>(istream &cin,binary &ob);
};
binary binary:: operator+(binary ob) {
    x+=ob.x;
    return *this;
}
binary binary::operator-(binary ob) {
    x-=ob.x;
    return *this;
}
binary binary::operator/(binary ob) {
    x/=ob.x;
    return *this;
}
istream&operator>>(istream &cin,binary &ob)
{
    cin>>ob.x;
    return cin;
}
binary binary:: operator++()
{
    x++;
    return x;
}
binary binary ::operator++(int) {
    binary temp;
    temp.x=x;
    x++;
    return temp;
}
class rec;
class square{
private:
    int l,area;
public:
    square(int x=0):l(x){};
    int Get_arae(){return l*l;}
    friend rec;
};
class rec{
private:
    int l,w;
public:
    rec(int x=0,int  y=0):l(x),w(y){};
    int get_area(){return l*w;}
    friend int operator +(square s,rec r);
    friend void largest (square s, rec r);
};
int operator +(square s,rec r)
{
    int add_area;
    add_area=s.Get_arae()+r.get_area();
    return add_area;
}
void largest (square s, rec r)
{
    if(s.Get_arae()>r.get_area())
    {
        cout<<s.Get_arae()<<endl;
    }
    else
    {
        cout<<r.get_area()<<endl;
    }
}
int main()
{
   square ob1(5);rec ob2(7,7);
   cout<<ob1+ob2<<endl;
    largest(ob1,ob2);
}