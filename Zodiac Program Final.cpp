#include <iostream>
#include <conio.h>
#include <ctime>
#include <string>
using namespace std;


int main()
{
	int month;
	int day;
	char ans;



	cout << "Ever wonder what your zodiac sign is?" << endl;
	cout << "Just enter the specified information to calculate your zodiac sign!\n" << endl;
	cout << "Enter an integer (1-12) for the month of your birthday: ";
	cin >> month;
	cout << "Enter the day of that month: ";
	cin >> day;
	cout << endl;

	do
	{
		switch (month)
		{
		case 1:
			if (day < 20)
				cout << "Your sign is CAPRICORN! You are responsible and \n"
				<< "disciplined, but unforgiving " << endl;

			else
				cout << "Your sign is AQUARIUS! You are progressive and \n"
				<< "original, but uncompromising and tempermental " << endl;
			break;
		case 2:
			if (day < 19)
				cout << "Your sign is AQUARIUS! You are progressive and \n"
				<< "original, but uncompromising and tempermental " << endl;
			else
				cout << "Your sign is PISCES! You are intuitive and\n"
				<< "compassionate, but fearful " << endl;
			break;
		case 3:
			if (day < 21)
				cout << "Your sign is PISCES! You are intuitive and\n"
				<< "compassionate, but fearful " << endl;
			else
				cout << "Your sign is ARIES! You are couragous and\n"
				<< "determined, but also impatient " << endl;
			break;
		case 4:
			if (day < 20)
				cout << "Your sign is ARIES! You are couragous and\n"
				<< "determined, but also impatient " << endl;
			else
				cout << "Your sign is TAURUS! You are dependable and\n"
				<< "patient, but stubborn " << endl;
			break;
		case 5:
			if (day < 21)
				cout << "Your sign is TAURUS! You are dependable and\n"
				<< "patient, but stubborn " << endl;
			else
				cout << "Your sign is GEMINI! You are adaptable and\n"
				<< "affectionate, but also nervous " << endl;
			break;
		case 6:
			if (day < 22)
				cout << "Your sign is GEMINI! You are adaptable and\n"
				<< "affectionate, but also nervous " << endl;
			else
				cout << "Your sign is CANCER! You are emotional and\n"
				<< "loving, but changeable and moody " << endl;
			break;
		case 7:
			if (day < 23)
				cout << "Your sign is CANCER! You are emotional and\n"
				<< "loving, but changeable and moody " << endl;
			else
				cout << "Your sign is LEO! You are generous and\n"
				<< "creative, but bossy " << endl;
			break;
		case 8:
			if (day < 23)
				cout << "Your sign is LEO! You are generous and\n"
				<< "creative, but bossy " << endl;
			else
				cout << "Your sign is VIRGO! You are modest and\n"
				<< "shy, but very fussy " << endl;
			break;
		case 9:
			if (day < 23)
				cout << "Your sign is VIRGO! You are modest and\n"
				<< "shy, but very fussy " << endl;
			else
				cout << "Your sign is LIBRA! You are romantic and\n"
				<< "charming, but indecisive " << endl;
			break;
		case 10:
			if (day < 23)
				cout << "Your sign is LIBRA! You are romantic and\n"
				<< "charming, but indecisive " << endl;
			else
				cout << "Your sign is SCORPIO! You are determined and\n"
				<< "powerful, but jealous and resentful " << endl;
			break;
		case 11:
			if (day < 22)
				cout << "Your sign is SCORPIO! You are determined and\n"
				<< "powerful, but jealous and resentful " << endl;
			else
				cout << "Your sign is SAGITTARIUS! You are optimistic and\n"
				<< "honest, but considered careless and irresponsible " << endl;
			break;
		case 12:
			if (day < 22)
				cout << "Your sign is SAGITTARIUS !You are optimistic and\n"
				<< "honest, but considered careless and irresponsible " << endl;
			else
				cout << "Your sign is CAPRICORN! You are responsible and \n"
				<< "disciplined, but unforgiving " << endl;
			break;

			
		}
		
		cout << "Do you want to continue on to the compatibility calculator? (y) or (n): \n";
		cin >> ans;
		if (ans == 'y'){
			string userInput;
			srand(static_cast<unsigned int>(time(0)));

			cout << "Enter the sign you wish to view compatability with." << endl;
			cin >> userInput;
			cout << "You are " << (rand() % 100 + 1) << "% compatible with " << userInput << endl;

			system("pause");
			cout << "Return to the main menu by typing (m):  \n";
			cin >> ans;
			return main();
		}
		else if (ans != 'y')
			cout << "the program will now close, thank you for your participation!" << endl;
		system("pause");
		return 0;
	}while (ans =='m');
}