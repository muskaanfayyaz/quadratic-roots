#include<iostream>
using namespace std;
#include<math.h>
int main()
{
	int a,b,c,discriminant;
	float x1,x2,realPart,imaginaryPart;
	cout<<"enter the values";
	cin>>a>>b>>c;
	discriminant= (b*b)-(4*a*c); //calculating discriminant
	if(discriminant>=0) // discriminant if greater than discriminant
	{
        x1 = (-b + sqrt(discriminant)) / (2*a); // calculating x1
        x2 = (-b - sqrt(discriminant)) / (2*a); // calculating x2
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
	 else if (discriminant == 0) // discriminant equal to 0
	 {
        cout << "Roots are real and same." << endl;
        x1 = -b/ (2*a); // calculating x1 , x1 is equal to x2
        cout << "x1 = x2 =" << x1 << endl;
	}
	else { // discriminant if less than zero
        realPart = -b/ (2*a); // calculating real part
        imaginaryPart =sqrt(-discriminant)/ (2*a); //calulating imaginary part
        cout << "Roots are complex and different." << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;// calculating x1
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl; // calculating x2
    }

    return 0;
}


