#include <iostream>

using namespace std;

int main ()
{
	double box, sideline, premium, general, total;
	double a, b, c, d;

	cout << "Type how much ticket will be bought per ticket" << endl;

	cout << "No. of Box Ticket (250)" << endl;
	cin >> a;
	cout << "No. of Sideline Ticket (100)" << endl;
	cin >> b;
	cout << "No. of Premium Ticket (50)" << endl;
	cin >> c;
	cout << "No. of General Ticket (25)" << endl;
	cin >> d;

	box = 250*a;
	sideline = 100*b;
	premium = 50*c;
	general = 25*d;

	cout << "Ticket Price and No. of Tickets Sold" << endl;


		cout << "box" << box << endl;
		cout << "sideline" << sideline << endl;
		cout << "premium" << premium << endl;
		cout << "general" << general << endl;
		total = box + sideline + premium + general;
	cout <<" Total Price " << total << endl;

	system("pause");
	return 0;
}