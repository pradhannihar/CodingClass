#include<iostream>

using namespace std;

void tell(double str);
void tell(int str);
void tell(string str);
int main(){
    int a ;   // Box 1
    double f ; // Box 2  name = f, type = double

    a = 1;
    tell("int :");tell(a);
    f = 1;
    tell("double"); cout<<f<<endl;

   
}

void tell(double str)
{
    cout<<str<<endl;
}


void tell(int str)
{
    cout<<str<<endl;
}

void tell(string str)
{
    cout<<str<<endl;
}