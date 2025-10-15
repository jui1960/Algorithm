#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if(b==c && a>b && a>c)
        cout<<"b and c are equal "<<b<<" and the largerst number is " << a;

    else if (a > b && a > c)
        cout << " a is large number " << a;

    else if(a == c && b>a && b>c)
        cout<<"a and c are equal "<<a<<" and the largerst number is " << b;

    else if (b > c )
        cout << "b is large number " << b;

    else if(a == b && c>a && c>b)
        cout<<"a and b are equal "<<a<<" and the largerst number is " << c;

    else if (c > a && c > b)
        cout << "c is large number " << c;

    else if (a == b && a == c)
        cout<< "a,b and c are equal and the largerst number is " << a;

    else if (a == b)
        cout<< "a and b are equal and the largerst number is " << a;
    else if (a == c)
        cout<< "a and c are equal and the largerst number is " << a;

    else if (b == c)
        cout << "b and c are equal and the largerst number is " << b;     
    return 0;
}