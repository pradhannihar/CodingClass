#include<iostream>

using namespace std;

void tell(double str);
void tell(int str);
void tell(string str);

int ask(string str){
    cout<<str<<endl;
    int a;
    cin >> a;
    return a;
}


int main()
{
   int a = ask("Tell a number");


   tell("You have entered : ");
   tell(a);
 

   





}



// Output tyep Name (input type)
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

