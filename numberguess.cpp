
// Guessing Game project

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{

 start:
  cout << "I'm thinking of a number between 0 and 100!" << endl; // Console out (display), end of line
  cout << "Try to guess it! I'll let you know if you are too high or too low." <<endl;

  int num, guess, number; //declaring a new integer
  
  srand (time(NULL));//get variable for time

  number = rand() % 100 + 0;
  num = 0;

  //cout << number << endl; to verify for actual number

  while (guess!=number)
    {
      
      cout << "Type a guess and press enter" << endl;
      cout << "Your guess: ";
      cin >> guess; //console in, whatever the user puts in goes to the variable, guess

      
      if (guess>100, guess<(number-number))
	{
	  cout << "That is not a number between 0 and 100" << endl;
	}
      if (guess>number)
	    {
	      cout << "Your guess was too big!" << endl;
	    }
      if (guess<number)
	    {
	      cout << "Your guess was too small!" << endl;
	    }



      

      /*if (guess>number)
	{
	  cout << "Your guess was too big!" << endl;
	}
      if (guess<number)
	{
	  cout << "Your guess was too small!" <<endl;
	} */

      
      num = num + 1;
    }
 
  cout << "CONGRATS!!!! you got the number!" << endl;
  cout << "you guessed " << num << " times" << endl;
  cout << "Would you like to restart (y/n)?" << endl;
  //system("pause");

  char again;

  cin >> again;
  if (again == 'y')
    {
      goto start;
    }
  return 0;

}
