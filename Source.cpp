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

cout << "Ever wonder what your zodiac sign is?"<<endl;
cout <<"Just enter the specified information to calculate your zodiac sign!\n"<<endl;
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
                 cout << "Your sign is CAPRICORN!\n";
              else
                  cout << "Your sign is AQUARIUS!\n";
              break;
         case 2:
              if (day < 19)
                 cout << "Your sign is AQUARIUS!\n";
              else
                  cout << "Your sign is PISCES!\n";
              break;
         case 3:
              if (day < 21)
                 cout << "Your sign is PISCES!\n";
              else
                  cout << "Your sign is ARIES!\n";
              break;
         case 4:
              if (day < 20)
                 cout << "Your sign is ARIES!\n";
              else
                  cout << "Your sign is TAURUS!\n";
              break;
         case 5:
              if (day < 21)
                 cout << "Your sign is TAURUS!\n";
              else
                  cout << "Your sign is GEMINI!\n";
              break;
         case 6:
              if (day < 22)
                 cout << "Your sign is GEMINI!\n";
              else
                  cout << "Your sign is CANCER!\n";
              break;
         case 7:
              if (day < 23)
                 cout << "Your sign is CANCER!\n";
              else
                  cout << "Your sign is LEO!\n";
              break;
         case 8:
              if (day < 23)
                 cout << "Your sign is LEO!\n";
              else
                  cout << "Your sign is VIRGO!\n";
              break;
         case 9:
              if (day < 23)
                 cout << "Your sign is VIRGO!\n";
			 else
                  cout << "Your sign is LIBRA!\n";
              break;
         case 10:
              if (day < 23)
                 cout << "Your sign is LIBRA!\n";
              else
                  cout << "Your sign is SCORPIO!\n";
              break;
         case 11:
              if (day < 22)
                 cout << "Your sign is SCORPIO!\n";
              else
                  cout << "Your sign is SAGITTARIUS!\n";
              break;
         case 12:
              if (day < 22)
                 cout << "Your sign is SAGITTARIUS!\n";
              else
                  cout << "Your sign is CAPRICORN!\n";
			  break;

   }
   cout <<"Do you wish to see your compatible zodiac signs?(y/n)"<< endl;
   cin >> ans;
} while (ans != 'y');

string userInput;  
srand(static_cast<unsigned int>(time(0)));

cout << "Enter the sign you wish to view compatability with."<< endl; 
cin >> userInput; 
	cout << "You are " << ( rand() % 100 + 1 ) << "% compatible with " << userInput << endl; 
	system("pause"); 
return 0; 


}
