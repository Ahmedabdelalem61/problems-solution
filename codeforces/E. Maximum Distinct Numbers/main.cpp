#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long long a=1, b=1, c, x1, x2, discriminant, realPart, imaginaryPart;
    cin >>  c;
    c*=-2;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
      //  cout << "x1 = " << x1 << endl;
    //    cout << "x2 = " << x2 << endl;
        if(x1>x2)
        cout<<(int)x1;
        else
        cout<<(int)x2;
    }

    else if (discriminant == 0) {
        x1 = -b/(2*a);
      // cout << "x1 = x2 =" << x1 << endl;
        cout<<x1;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
       //cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        //cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;

    }

    return 0;
}
