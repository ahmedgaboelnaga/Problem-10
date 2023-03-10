#include<iostream>

using namespace std;

int main()
{
	int choice;
	double n1, n2;

	cout << "List of options:" << endl;
	cout << "1) Additioin" << endl;
	cout << "2) Subtraction" << endl;
	cout << "3) Multiplication" << endl;
	cout << "4) Division" << endl;
	cout << "5) Modulus" << endl;
	cout << "6) Exit" << endl;

	cout << "Enter your choice:" << endl;
	cin >> choice;


	while (choice > 1 || choice < 6)
	{
		if (choice == 6)
		{
			break;
		}

		cout << "Enter the numbers" << endl;
		cin >> n1 >> n2;

		if (choice == 1)
		{
			cout << "The sum is: " << n1 + n2 << endl;
			break;
		}
		else if (choice == 2)
		{
			cout << "The result is: " << n1 - n2 << endl;
			break;
		}
		else if (choice == 3)
		{
			cout << "The product is: " << n1 * n2 << endl;
			break;
		}
		else if (choice == 4)
		{
			if (n2 != 0)
			{
				cout << "The quotent is: " << n1 / n2 << endl;
				break;

			}
			else
			{
				cerr << "Error: Can't be devided by zero." << endl;
			}
		}
		else if (choice == 5)
		{
			if (n2 != 0)
			{
				cout << "The modulus is: " << (int)n1 % (int)n2;
				break;
			}
			else
			{
				cerr << "Error: Can't be devided by zero." << endl;
			}
		}
	}



	return 0;
}