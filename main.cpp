#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string>
using namespace std;

string entrybody[500];
string expirydate[20];


int main()
{
	const char *mainmenu[4] = { "AddEntry", "UpdateEntry", "DeleteEntry", "CloseDiary" };
	cout << "THIS IS A DIARY PROGRAM" << endl;
	cout << "MAIN MENU:" << endl;
	for(int i = 0; i < 4; i++)
	cout << mainmenu[i] << endl;


cout << "\n\nPLEASE MAKE A SELECTION" << endl;
int choice;
cin >> choice;
if (choice == 1)
{
	system("CLS"); 
cout << "ADD ENTRY MENU:" << endl;
	system("CLS");

cout << "YOUR DESIRED ENTRY:";

cout << "\n\nENTER YOUR BODY:";

//code block to initialize, input and display user's body

{
	string entrybody[1];
    cout << "\nEnter your desired body : ";
    for(int i = 0; i < 1; i++)
    {
        getline(cin, entrybody[i]);
    }
    for(int i = 0; i < 1; i++)
    {
        cout << "\nYou entered : " << entrybody[i];
    }
}
    
    //code block for displaying the exact current time of the body entered.
time_t now = time(0);
char* date_time = ctime(&now);
	cout << "Your entry date is: " << date_time << endl;



cout << "\nInsert your DUE DATE";
char expirydate;
	cin >> expirydate;

}

else if(choice ==2)
{
	system("CLS");
	cout << "UPDATE ENTRY MENU" 
	"\nSelect an Entry to update";
	cout << "\n\nDISPLAYING EXISTING ENTRIES:";
	cout << entrybody;
}
else if(choice == 3)
{
	system("CLS");
	cout << "DELETE ENTRY MENU:"
	"\nSelect an Entry to delete:";
}
else if(choice == 6)
{
	return EXIT_SUCCESS;
}
}
	


	
