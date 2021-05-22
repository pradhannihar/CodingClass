#include<iostream>

using namespace std;

void tell(double str);
void tell(int str);
void tell(string str);

int main()
{
    string Name;  // Box 1
    int Temp;    //  Box 2

    tell("What is your name ?");
    cin >> Name;

    tell("What is your Body Temp in deg celcius ? ");
    cin >> Temp;

    if( Temp > 36){
        tell("Dear"); tell(Name);tell("GO TO A DOCTOR!!!");

    }
    else{
        tell("Dear"); tell(Name);tell("You are fine");
    }


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