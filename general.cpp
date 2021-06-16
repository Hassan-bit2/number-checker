// Write a program in C++ to check whether a number is positive, negative or zero
#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Please enter a number" << endl;
	cin >> a;
	
	if(a < 0)
	{
		cout << "You entered a negative number";
	}
	else if(a > 0)
	{
		cout << "You entered a positive number";
	}
	else
	{
		cout << "Your number is zero";
	}
}
