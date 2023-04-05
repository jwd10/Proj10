/*
* Author: John Devine
* Course: 16365 COP2334 202301
* Editor: Replit
* Description: 
*/

#include <iostream>
using namespace std;

int main() {
  int input; //stores user input

  //main loop
  while(true){
    //input loop
    while (true) {
      //ask user for input
      cout << "Please enter a positive number(-1 to exit):";

      //gets user input, outputs error and loops if invalid type is entered
      while (!(cin >> input)) {
		    cout << "Error, please enter a positive number(-1 to exit):";
			
		    cin.clear();
			
		    cin.ignore(256, '\n');
      }

      //exit loop of input is positive number or -1
      if (input > 0 || input == -1) break;

      //invalid input, continue loop
      cout << "Invalid number" << endl;
    }

    //exit main loop if -1 is entered
    if (input == -1) break;

    //NOTE: currently only reliable till 100
    //ordinal printing loop
    for(int i = 1; i <= input; ++i) { //start at 1 for easier printing
      
      //special case if 11, 12, 13
      if (i == 11 || i == 12 || i == 13) cout << i << "th Hello";
      else {
        //determine ending with switch statement
        switch(i % 10) {
          case 1:
            cout << i << "st Hello";
            break;
          case 2:
            cout << i << "nd Hello";
            break;
          case 3:
            cout << i << "rd Hello";
            break;
          default:
            cout << i << "th Hello";
        }
      }
      cout << endl;
    }
    cout << endl;
  }  
  return 0;
}