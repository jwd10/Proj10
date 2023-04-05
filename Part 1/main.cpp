/*
* Author: John Devine
* Course: 16365 COP2334 202301
* Editor: Replit
* Description: Takes input from user, uses it to calculate and output operations. Reports the number of loops and exits after -1 is entered
*/

#include <iostream>
using namespace std;

int main() {
  //VARIABLES
  int counter = 0; //loop counter
  double input; //stores user input

  //main loop
  while (true) {
    cout << "Please enter a number(-1 to exit):";

    //input check loop, program loops endlessly on invalid input without it 
    while (!(cin >> input)) {
			cout << "Error, please enter a number" << endl;
			
			cin.clear();
			
			cin.ignore(256, '\n');			
		}

    //exit if input is -1
    if(static_cast<int>(input) == -1) break;

    //output operations
    cout << input * input << endl;
    cout << input / input << endl; //outputs -nan if input is 0
    cout << (input + 3.0) / 5.0 << endl;
    cout << ((input + 3.0) / 5.0) + ((input + 7.0) / 2.0) << endl;
    ++counter; //increment counter
  }

  //output counter
  cout << counter << " loops" << endl;

  return 0;
}