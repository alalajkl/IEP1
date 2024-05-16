#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int i, answer, guess;
	i = 1;

	srand(time(0));

	answer = rand() % 11;

	cout << " \n ** GUESS A NUMBER PROGRAM \n**";

	do
	{
		cout << i;
		cout << ") I'm thinking about a number between [0-10], whats' your guess?\n";
		cin >> guess;
		i++;

		if (guess > answer)
		{
			cout << "That's too high!\n";
		}
		else if (guess < answer)
		{
			cout << "That's too low!\n";
		}
		else
		{
			cout << "Wow! You get the right answer!\n";
			break;
		}
	} while (true);



	return 0;
}
