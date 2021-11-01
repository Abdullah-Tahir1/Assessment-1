#include <iostream>
#include <string>
using namespace std;
int main()
{
	int m1, m2;
	string n;
	cout << "Enter your full name: ";
	getline(cin, n);
	cout << "Enter the marks of two subjects;" << endl;
	cin >> m1 >> m2;
	if (!cin.fail() && m1 <= 100 && m1 >= 0 && m2 <= 100 && m2 >= 0)
	{
			switch (((m1 + m2) / 2) / 10)
			{
			case 10:
			case 9:
			case 8:
			case 7:
			{
				cout << n << " your grade is A." << endl;
				break;
			}
			case 6:
			{
				cout << n << " your grade is B." << endl;
				break;
			}
			case 5:
			{
				cout << n << " your grade is C." << endl;
				break;
			}
			case 4:
			{
				cout << n << " your grade is D." << endl;
				break;
			}
			case 3:
			case 2:
			case 1:
			case 0:
			{
				cout << n << " your grade is F." << endl;
				break;
			}
			default:
			{
				cout << "Invalid" << endl;
				break;
			}
			}
			return 0;
	}
	else
	{
			cout << "You didn't enter the correct numbers\nTry again." << endl;
	}
	
}