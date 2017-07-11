#include "Main.h"

using namespace std; 

int main() {
	string name;
	string behavior;
	string taxpercentage;
	string cost;
	cout << "Hello, What is your first name?" << endl;
	cin >> name;
	cout << "Hello " << name << " How are you today?... bad? okay? good? excellent? or superb?" << endl;
	cin >> behavior;
	if (behavior == "bad")
	{
	cout << "Well then, " << name << " I hope I will make you feel better..." << endl;
	}
	else if (behavior == "okay")
	{
		cout << "'okay' ill take that a 'I had to pay a drink at 20 dollors because the tax was a rip off... I am here to make you feel better..." << endl;
	}
	else if (behavior == "good")
	{
		cout << "thats good enough for today..." << endl;
	}
	else if (behavior == "excellent")
	{
		cout << "well that great that you feel like that..." << endl;
	}
	else if (behavior == "superb")
	{
		cout << "Well that must be the best day of your life! I'm  truly happy to here that!..." << endl;
	}
	cout << "I am here to tell you what a product costs with the tax of your country/town. " << endl;
	cout << "Please tell me the tax percentage of the country you are on." << endl;
	cin >> taxpercentage;
	cout << "Thank you, now please tell me the cost of a product you want to purchase without the tax" << endl;
	cin >> cost;
	s
}