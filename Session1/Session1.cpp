#include <iostream>
using namespace std;
int main()
{
	/*
	int x = 0;
	double y = 42.5;
	bool Answer = true;

	//x = x + 19;
	x = x + 9.5;
	cout << "The value of x is " << x << endl;
	cout << "This is a section of text" << " And this is another" << endl;
	cout << "The value of y is " << y << endl;
	cout << "The value of Answer is " << Answer << endl;
	*/
	double BMI;
	double height = 1.9;
	double weight = 90;
	BMI = weight / (pow(height, 2));
	cout << BMI;

}
