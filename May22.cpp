#include<iostream>

using namespace std;

void tell(double str);
void tell(int str);
void tell(string str);

int add_5(int a){
    int b ;
    b = a + 5;
    return 9;
}


int main()
{
    int i  ;
    i = 1;

    while(i <= 5){
        tell(i);
        i = i+5;   // 6 + 5 = 11
                   // 11 + 5 = 16
                   // 16 + 5 = 21

    }
  int c;
  c = add_5(5);
  tell(c);

   





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