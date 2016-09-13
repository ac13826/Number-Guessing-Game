//comment check
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

      
      if (guess>100, guess<(number-number)) //if the number is greater than 100 or less than 0
	{
	  cout << "That is not a number between 0 and 100" << endl;
	}
      if (guess>number)//if the user's guess is greater than the random number
	    {
	      cout << "Your guess was too big!" << endl;
	    }
      if (guess<number)//if the user's guess is less than the random number
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

      
      num = num + 1; //add 1 for each time this loop occurs
    }
 
  cout << "CONGRATS!!!! you got the number!" << endl;
  cout << "you guessed " << num << " times" << endl; //the number of times the person guessed
  cout << "Would you like to restart (y/n)?" << endl;
  //system("pause");

  char again;//does the person want to try again? if so it's a y/n question

  cin >> again;
  if (again == 'y')//if y restart, if not... end
    {
      goto start;
    }




  return 0;

}
