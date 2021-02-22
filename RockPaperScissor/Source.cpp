#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main()
{
	int score = 0;
	cout << "\t\t\t\t\tWelcome to the Rock-Paper-Scissors Game!" << endl;
	for (int i = 1; i <= 3; i++)
	{
		string s;
		do
		{
			cout << endl << "Please enter one of: Rock, Paper, Scissors" << endl;
			cin >> s;
		} while (s != "Rock" && s != "Paper" && s != "Scissors");
	
		int random;
		srand(time(0));
		random = rand() % 31 - 15;
		//cout << random << endl;

		string systm;

		if (random < -5)
			systm = "Rock";
		else if (random > 5)
			systm = "Paper";
		else
			systm = "Scissors";

		cout << "System Answer: " << systm << endl;
	
		if (systm == "Rock")
		{
			if (s == "Rock")
				cout << "Its a TIE!" << endl;
			else if (s == "Paper")
			{
				cout << "You Win!" << endl;
				score++;
			}
			else
				cout << "You Loose!" << endl;
		}
		else if (systm == "Paper")
		{
			if (s == "Rock")
				cout << "You Loose!" << endl;
			else if (s == "Paper")
				cout << "Its a TIE!" << endl;
			else
			{
				cout << "You Win!" << endl;
				score++;
			}
		}
		else if (systm == "Scissors")
		{
			if (s == "Rock")
			{
				cout << "You Win!" << endl;
				score++;
			}
			else if (s == "Paper")
				cout << "You Loose!" << endl;
			else
				cout << "Its a TIE!" << endl;
		}
		cout << "Your score is " << score << endl;
	}
	cout << endl << "Your final score is " << score << endl;

	system("pause");
	return 0;
}