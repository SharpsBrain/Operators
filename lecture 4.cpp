#include <iostream>

using namespace std;

int main()
{
    // working of increment and decrement operator
   /* int a = 10, b=100;
    float c = 10.5, d = 100.5;

    cout<<"Example of increment and decrement operator"<<endl;
    cout<<"++a = "<<++a<<endl;
    cout<<"--b = "<<--b<<endl;
    cout<<"++c = "<<++c<<endl;
    cout<<"--d = "<<--d<<endl;
*/
/*
// working of assignment operator
    int a = 5, c;

    cout<<"Examples of Assignment Operators"<<endl;
    c = a; // c is 5
    cout<<"c is "<<c<<endl;
    c += a; // c is 10
    cout<<"c is "<<c<<endl;
    c -= a; // c is 5
    cout<<"c is "<<c<<endl;
    c *= a; // c is 25
    cout<<"c is "<<c<<endl;
    c /= a; // c is 5
    cout<<"c is "<<c<<endl;
    c %= a; // c is 0
    cout<<"c is "<<c<<endl;

    */
    // working of Relational Operator
    /*
    int a = 5, b = 5, c = 10;

    cout<<"Examples of Relational Operators"<<endl;
    cout<<a<<" == "<<b<<" is "<<(a==b)<<endl;
    cout<<a<<" == "<<c<<" is "<<(a==c)<<endl;
    cout<<a<<" > "<<b<<" is "<<(a>b)<<endl;
    cout<<a<<" > "<<c<<" is "<<(a>c)<<endl;
    cout<<a<<" < "<<b<<" is "<<(a<b)<<endl;
    cout<<a<<" < "<<c<<" is "<<(a<c)<<endl;
    cout<<a<<" != "<<b<<" is "<<(a!=b)<<endl;
    cout<<a<<" != "<<c<<" is "<<(a!=c)<<endl;
    cout<<a<<" >= "<<b<<" is "<<(a>=b)<<endl;
    cout<<a<<" >= "<<c<<" is "<<(a>=c)<<endl;
    cout<<a<<" <= "<<b<<" is "<<(a<=b)<<endl;
    cout<<a<<" <= "<<c<<" is "<<(a<=c)<<endl;
    */

    // working of Logical Operator

    int a = 5, b = 5, c = 10, result;

    cout<<"Examples of Logical Operators"<<endl;
    result = (a == b) && (c > b);
    cout<<" (a == b) && (c > b) is "<<result<<endl;

    result = (a == b) && (c < b);
    cout<<" (a == b) && (c < b) is "<<result<<endl;

    result = (a == b) || (c < b);
    cout<<" (a == b) || (c < b) is "<<result<<endl;

    result = (a != b) || (c < b);
    cout<<" (a != b) || (c < b) is "<<result<<endl;

    result = !(a != b);
    cout<<" !(a != b) is "<<result<<endl;

    result = !(a == b);
    cout<<" !(a == b) is "<<result<<endl;

    return 0;
}
