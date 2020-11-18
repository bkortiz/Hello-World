





































#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// Constants for membership rates
	const double ADULT_RATE = 40.0;
	const double CHILD_RATE = 20.0;
	const double SENIOR_RATE = 30.0;

	int choice; //menu choice
	int months; //Number of months
	double charges; //Monthly charges
	
	
		//Display the menu and get the user's choice
	while (choice != 1, 2, 3, 4) {
		cout << "\nHealth Club Membership Menu: \n\n";
		cout << "1. Standard Adult Membership\n";
		cout << "2. Child Membership\n";
		cout << "3. Senior Citizen Membership\n";
		cout << "4. Quit the Program\n\n";
		cout << "Enter your choice:";
		cin >> choice;
		//Set the numeric output formatting
		cout << fixed << showpoint << setprecision(2);
		//Use the menu selection to execute the correct set of actions

		
		if (choice == 1)
		{
			cout << "\nFor how many months?";
			cin >> months;
			charges = months * ADULT_RATE;
			cout << "The total charges are $" << charges << endl;
		}

		else if (choice == 2)
		{
			cout << "\nFor how many months?";
			cin >> months;
			charges = months * CHILD_RATE;
			cout << "The total charges are $" << charges << endl;
		}

		else if (choice == 3)
		{
			cout << "\nFor how many months?";
			cin >> months;
			charges = months * SENIOR_RATE;
			cout << "The total charges are $" << charges << endl;
		}

		else if (choice == 4)
		{
			return 0;
		}
	}
	return 0;
}