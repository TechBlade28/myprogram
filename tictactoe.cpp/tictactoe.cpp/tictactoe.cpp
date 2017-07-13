#include "Main.h"

int main()
{
	string player1name;
	string player2name;
	bool player1turn = true;
	string x = "X";
	string o = "O";
	string a = " ";
	string b = " ";
	string c = " ";
	string d = " ";
	string e = " ";
	string f = " ";
	string g = " ";
	string h = " ";
	string i = " ";
	bool afilled = false;
	bool bfilled = false;
	bool cfilled = false;
	bool dfilled = false;
	bool efilled = false;
	bool ffilled = false;
	bool gfilled = false;
	bool hfilled = false;
	bool ifilled = false;
	bool playerwins = false;
	int columnnumberentered; 
	int rownumberentered;
	cout << "Hello, player 1, please enter your first name..." << endl;
	cin >> player1name;
	cout << "Hello " << player1name << "." << endl;
	cout << "Hello, player 2, please enter your first name..." << endl;
	cin >> player2name;
	cout << "Hello " << player2name << "." << endl; 
	cout << "Let's play a game of Tic Tac Toe..." << endl;
	cout << player1name << " is the X, the cross, he starts first." << endl;
	cout << "Players, If you put in a coordinate that's already filled, you will skip your turn." << endl;
	
	cout << "-|---|---|---|-" << endl;
	cout << " | " << a << " | " << b << " | " << c << " |" << endl;
	cout << "-|---|---|---|-" << endl;
	cout << " | " << d << " | " << e << " | " << f << " |" << endl;
	cout << "-|---|---|---|-" << endl;
	cout << " | " << g << " | " << h << " | " << i << " |" << endl;
	cout << "-|---|---|---|-" << endl;
	
	//row 1
	for (int boxes = 1; boxes <=9; boxes +=2)
	{
		//ask the player a row then a column
		cout << player1name << " please enter a row." << endl;
		cin >> rownumberentered;
		cout << player1name << " now please enter a column." << endl;
		cin >> columnnumberentered;

		if (player1turn == true)
		{
			if (rownumberentered == 1 && columnnumberentered == 1) {
				if (afilled = false)
				{
					a = x;
				}
				else if (afilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				afilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 2) {
				if (bfilled = false)
				{
					b = x;
				}
				else if (bfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				bfilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 3) {
				if (cfilled = false)
				{
					c = x;
				}
				else if (cfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				cfilled = true;
			}
			//row 2
			if (rownumberentered == 2 && columnnumberentered == 1) {
				if (dfilled = false)
				{
					d = x;
				}
				else if (dfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				dfilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 2) {
				if (efilled = false)
				{
					e = x;
				}
				else if (efilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				efilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 3) {
				if (ffilled = false)
				{
					f = x;
				}
				else if (ffilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ffilled = true;
			}
			//row 3
			if (rownumberentered == 3 && columnnumberentered == 1) {
				if (gfilled = false)
				{
					g = x;
				}
				else if (gfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				gfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 2) {
				if (hfilled = false)
				{
					h = x;
				}
				else if (hfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				hfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 3) {
				if (ifilled = false)
				{
					i = x;
				}
				else if (ifilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ifilled = true;
			}
			player1turn = false;
		}
		//the design
		cout << "-|---|---|---|-" << endl;
		cout << " | " << a << " | " << b << " | " << c << " |" << endl;
		cout << "-|---|---|---|-" << endl;
		cout << " | " << d << " | " << e << " | " << f << " |" << endl;
		cout << "-|---|---|---|-" << endl;
		cout << " | " << g << " | " << h << " | " << i << " |" << endl;
		cout << "-|---|---|---|-" << endl;

		//ask the player a row then a column
		cout << player2name << " please enter a row." << endl;
		cin >> rownumberentered;
		cout << player2name << " now please enter a column." << endl;
		cin >> columnnumberentered;

		if (player1turn == false)
		{
			if (rownumberentered == 1 && columnnumberentered == 1) {
				if (afilled = false)
				{
					a = o;
				}
				else if (afilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				afilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 2) {
				if (bfilled = false)
				{
					b = o;
				}
				else if (bfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				bfilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 3) {
				if (cfilled = false)
				{
					c = o;
				}
				else if (cfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				cfilled = true;
			}
			//row 2
			if (rownumberentered == 2 && columnnumberentered == 1) {
				if (dfilled = false)
				{
					d = o;
				}
				else if (dfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				dfilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 2) {
				if (efilled = false)
				{
					e = o;
				}
				else if (efilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				efilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 3) {
				if (ffilled = false)
				{
					f = o;
				}
				else if (ffilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ffilled = true;
			}
			//row 3
			if (rownumberentered == 3 && columnnumberentered == 1) {
				if (gfilled = false)
				{
					g = o;
				}
				else if (gfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				gfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 2) {
				if (hfilled = false)
				{
					h = o;
				}
				else if (hfilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				hfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 3) {
				if (ifilled = false)
				{
					i = o;
				}
				else if (ifilled = true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ifilled = true;
			}
			player1turn = true;
		}
		//the design
		cout << "-|---|---|---|-" << endl;
		cout << " | " << a << " | " << b << " | " << c << " |" << endl;
		cout << "-|---|---|---|-" << endl;
		cout << " | " << d << " | " << e << " | " << f << " |" << endl;
		cout << "-|---|---|---|-" << endl;
		cout << " | " << g << " | " << h << " | " << i << " |" << endl;
		cout << "-|---|---|---|-" << endl;
	}

}