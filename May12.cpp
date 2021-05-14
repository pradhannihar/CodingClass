#include<iostream>

using namespace std;

void tell(int str);

int main(){
    int a ;   // Box 1
    int b ;   // Box 2
    int result ; // Box 3
    int c ;    // Remindeer, Bhagasesha

    bool z;   // Box type Boolean

    a = 5;
    b = 8;
    //1. 
    z = bool( a > b );
    tell(z);
    //2. 
    z = bool( a < b );
    tell(z);
    //3. 
    z = bool( a >= b ); // Jadi a = b kimba a > b
    tell(z);
    //4. 
    z = bool( a <= b ); // Jadi a = b kimba a <  b
    tell(z);
    //5. 
    z = bool( a == b );
    tell(z);

    a = 10589;
    b = 2;

    result = a / b;  // Division

    c = a - b*result;

    if(c == 0 ) tell(100);

    if(c != 0)  tell(-100); 
 

    


    



   
}




void tell(int str)
{
    cout<<str<<endl;
}