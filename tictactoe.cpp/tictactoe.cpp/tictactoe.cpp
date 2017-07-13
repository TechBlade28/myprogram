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
	int gameended;
	bool afilled = false;
	bool bfilled = false;
	bool cfilled = false;
	bool dfilled = false;
	bool efilled = false;
	bool ffilled = false;
	bool gfilled = false;
	bool hfilled = false;
	bool ifilled = false;
	bool afilledX = false;
	bool bfilledX = false;
	bool cfilledX = false;
	bool dfilledX = false;
	bool efilledX = false;
	bool ffilledX = false;
	bool gfilledX = false;
	bool hfilledX = false;
	bool ifilledX = false;
	bool afilledO = false;
	bool bfilledO = false;
	bool cfilledO = false;
	bool dfilledO = false;
	bool efilledO = false;
	bool ffilledO = false;
	bool gfilledO = false;
	bool hfilledO = false;
	bool ifilledO = false;
	bool playerwins = false;
	int columnnumberentered;
	int rownumberentered;
	int player1moves = 0;
	int player2moves = 0;
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


	for (int boxes = 0; boxes < 9; boxes +=2)
	{
		//ask the player a row then a column
		cout << player1name << " please enter a row." << endl;
		cin >> rownumberentered;
		cout << player1name << " now please enter a column." << endl;
		cin >> columnnumberentered;
		cout << endl;
		cout << endl;
		cout << endl;

		if (player1turn == true)
		{
			//row 1
			if (rownumberentered == 1 && columnnumberentered == 1) {
				if (afilled == false)
				{
					a = x;
					player1moves += 1;
					afilledX = true;
				}
				else if (afilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;

				}
				afilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 2) {
				if (bfilled == false)
				{
					b = x;
					player1moves += 1;
					bfilledX = true;
				}
				else if (bfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				bfilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 3) {
				if (cfilled == false)
				{
					c = x;
					player1moves += 1;
					cfilledX = true;
				}
				else if (cfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				cfilled = true;
			}
			//row 2
			if (rownumberentered == 2 && columnnumberentered == 1) {
				if (dfilled == false)
				{
					d = x;
					player1moves += 1;
					dfilledX = true;
				}
				else if (dfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				dfilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 2) {
				if (efilled == false)
				{
					e = x;
					player1moves += 1;
					efilledX = true;
				}
				else if (efilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				efilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 3) {
				if (ffilled == false)
				{
					f = x;
					player1moves += 1;
					ffilledX = true;
				}
				else if (ffilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ffilled = true;
			}
			//row 3
			if (rownumberentered == 3 && columnnumberentered == 1) {
				if (gfilled == false)
				{
					g = x;
					player1moves += 1;
					gfilledX = true;
				}
				else if (gfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				gfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 2) {
				if (hfilled == false)
				{
					h = x;
					player1moves += 1;
					hfilledX = true;
				}
				else if (hfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				hfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 3) {
				if (ifilled == false)
				{
					i = x;
					player1moves += 1;
					ifilledX = true;
				}
				else if (ifilled == true)
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

		if (afilledX == true && bfilledX == true && cfilledX == true || dfilledX == true && efilledX == true && ffilledX == true || gfilledX == true && hfilledX == true && ifilledX == true || afilledX == true && dfilledX == true && gfilledX == true || bfilledX == true && efilledX == true && hfilledX == true || cfilledX == true && ffilledX == true && ifilledX == true || afilledX == true && efilledX == true && ifilledX == true || cfilledX == true && efilledX == true && gfilledX == true)
		{
			cout << player1name << " won this game of Tic Tac Toe!!!" << endl;
			cin >> gameended;
			cin >> gameended;
			cin >> gameended;
		}
		if (afilled == true && bfilled == true && cfilled == true && dfilled == true && efilled == true && ffilled == true && gfilled == true && hfilled == true && ifilled == true)
		{
			cout << endl; 
			cout << endl; 
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << "This game ended as a draw" << endl;
			cin >> gameended;
			cin >> gameended;
			cin >> gameended;
		}
		//ask the player a row then a column
		cout << player2name << " please enter a row." << endl;
		cin >> rownumberentered;
		cout << player2name << " now please enter a column." << endl;
		cin >> columnnumberentered;
		cout << endl;
		cout << endl;
		cout << endl;

		if (player1turn == false)
		{
			//row 1
			if (rownumberentered == 1 && columnnumberentered == 1) {
				if (afilled == false)
				{
					a = o;
					player2moves += 1;
					afilledO = true;
				}
				else if (afilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				afilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 2) {
				if (bfilled == false)
				{
					b = o;
					player2moves += 1;
					bfilledO = true;

				}
				else if (bfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				bfilled = true;
			}
			if (rownumberentered == 1 && columnnumberentered == 3) {
				if (cfilled == false)
				{
					c = o;
					player2moves += 1;
					cfilledO = true;
				}
				else if (cfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				cfilled = true;
			}
			//row 2
			if (rownumberentered == 2 && columnnumberentered == 1) {
				if (dfilled == false)
				{
					d = o;
					player2moves += 1;
					dfilledO = true;
				}
				else if (dfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				dfilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 2) {
				if (efilled == false)
				{
					e = o;
					player2moves += 1;
					efilledO = true;
				}
				else if (efilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				efilled = true;
			}
			if (rownumberentered == 2 && columnnumberentered == 3) {
				if (ffilled == false)
				{
					f = o;
					player2moves += 1;
					ffilledO = true;
				}
				else if (ffilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				ffilled = true;
			}
			//row 3
			if (rownumberentered == 3 && columnnumberentered == 1) {
				if (gfilled == false)
				{
					g = o;
					player2moves += 1;
					gfilledO = true;
				}
				else if (gfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				gfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 2) {
				if (hfilled == false)
				{
					h = o;
					player2moves += 1;
					hfilledO = true;
				}
				else if (hfilled == true)
				{
					cout << "Sorry, that coordinate is already filled..." << endl;
					cout << "Like I said if you enter a coordinate that's already filled, you skip your turn." << endl;
				}
				hfilled = true;
			}
			if (rownumberentered == 3 && columnnumberentered == 3) {
				if (ifilled == false)
				{
					i = o;
					player2moves += 1;
					ifilledO = true;
				}
				else if (ifilled == true)
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

		if (afilledO == true && bfilledO == true && cfilledO == true || dfilledO == true && efilledO == true && ffilledO == true || gfilledO == true && hfilledO == true && ifilledO == true || afilledO == true && dfilledO == true && gfilledO == true || bfilledO == true && efilledO == true && hfilledO == true || cfilledO == true && ffilledO == true && ifilledO == true || afilledO == true && efilledO == true && ifilledO == true || cfilledO == true && efilledO == true && gfilledO == true)
		{
			cout << player2name << " won this game of Tic Tac Toe!!!" << endl;
			cin >> gameended;
			cin >> gameended;
			cin >> gameended;
		}
	}
}