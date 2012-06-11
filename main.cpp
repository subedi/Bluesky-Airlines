#include <iostream>
#include "bluesky.cpp"
using namespace std;

int main()
{
	
	system("clear");	// clean the terminal
	cout<<"\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::"<<endl;
	cout<<"-------------------------------------------------------------------"<<endl;
	cout << "\n\t WELCOME TO BLUESKY AIRLINE RESERVATION SYSTEM \n";
	cout<<"-------------------------------------------------------------------"<<endl;
	cout<<":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::\n"<<endl;
	cout<<"\n ..................... MENU OPTIONS .............................\n"<<endl;

	cout << "::::::::::::: Please Select the Options ::::::::::::::::::::::::::\n\n ";



	menu();	//calling the menu function.
	seat_fill();	// initialize seat array.

	return 0;


}



