#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main ()
{

	double B, S, P, GA;

	cout << "Tickets sold for Box" << endl;
	cin >> B;
	cout << "Tickets sold for Sideline" << endl;
	cin >> S;
	cout << "Tickets sold for Premium" << endl;
	cin >> P;
	cout << "Tickets sold for General Admission" << endl;
	cin >> GA;
	cout << "Ticket Price     ""Number of Ticket Sold     ""Total Ticket Sales"<< endl;  
	cout << "Box = 250                 "<< B <<  "                "                                                             << 250 * B << endl; 
	
	cout << "Sideline = 100            "<< S <<  "                "                                                             << 100 * S << endl; 
	
	cout << "Premium = 50              "<< P <<  "                "                                                               << 50 * P <<endl; 
	
	cout << "General Admission = 25    "<< GA << "                "                                                              << 25 * GA << endl; 
	
	
	
	
_getch();
	return 0;
}
