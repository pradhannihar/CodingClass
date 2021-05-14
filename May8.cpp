#include<iostream>

using namespace std;

void tell(int str);

int main(){
    int a ;   // Box 1
    int b ;   // Box 2
    int result ; // Box 3
    int c ;    // Remindeer, Bhagasesha


    a = 16;
    b = 4;

    result = a / b;  // Division

    c = a - b*result;

    tell(result);
    tell(c);

    



   
}




void tell(int str)
{
    cout<<str<<endl;
}