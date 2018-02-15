#include<iostream>
using namespace std;


void findPrimes(int x, int y)
{
	
	for (int counter = x; counter <= y; counter++)
	{
		bool prime = true;
		for (int i = counter - 1; i > 1; i--)
			if (counter % i == 0)
			{
				prime = false;
			}

		if (prime == true)
		cout << counter << endl;
	}
}

void findLCM(int x, int y)
{
	int xMultiples = x;
	int yMultiples = y;
	bool test_again = true;
	while (test_again == true)
	{
		if (xMultiples == yMultiples)
		{
			cout << "The least common multiple is " << xMultiples << endl;
			test_again = false;
		}
		else if (xMultiples < yMultiples)
		{
			xMultiples = xMultiples + x;
		}
		else if (yMultiples < xMultiples)
		{
			yMultiples = yMultiples + y;
		}
		else
		{
			test_again = false;

		}
	}

}

int main ()
{

	char play_again = 'y';
	while (play_again == 'y')
	{
		int x, y;
		char symbol;

		cout << "Enter the first positive, whole number: ";
		cin >> x;
		cout << "Enter the second positive, whole number: ";
		cin >> y;
		cout << "Find all (p)rime numbers between them, or print the (l)east common denominator? (type p or l): ";
		cin >> symbol;
		switch (symbol)
		{
		case 'p':
			findPrimes(x, y);
			break;
		case 'l':
			findLCM(x, y);
			break;
		default:
			cout << "I didn't get that. Use p or l please.";
		}

		// ask to restart
		cout << "Play again? (Type y for yes.) ";
		cin >> play_again;
		cout << endl;
	}
return 0;
}
