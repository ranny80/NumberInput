#include <iostream>

using namespace std;

char response;
int number;

int main()
{
	cout << "Are you ready to input the number? (y/n) ";
	cin >> response;

	if ((response == 'y') || (response == 'Y'))
	{
		cout << "Enter a number between 1 through 15: ";
		cin >> number;

		if ((number >= 1) && (number <= 15))
		{
			cout << "You have successfully inputted the number.";
		}
		else
		{
			cout << "Invalid number. Please try again.";

			cout << "Enter a number between 1 through 15: ";
			cin >> number;

			if ((number >= 1) && (number <= 15))
			{
				cout << "You have successfully inputted the number.";
			}
			else
			{
				cout << "Invalid number. Please try again.";

				cout << "Enter a number between 1 through 15: ";
				cin >> number;

				if ((number >= 1) && (number <= 15))
				{
					cout << "You have successfully inputted the number.";
				}
				else
				{
					cout << "Too many attempts.";
				}
			}
		}
	}
	else
	{
		cout << "Successfully cancelled.";
	}

	return 0;
}