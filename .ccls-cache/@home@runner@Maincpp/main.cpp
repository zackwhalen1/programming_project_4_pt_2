// Zack Whalen
//  COP2334 202301
// replit C++
// Programming Project 4 PT 2  -
#include <iostream>
#include <climits> //Needed to obtain INT_MAX for input check
using namespace std;

int main() { 
  int userNum;
  int numRemainder;
  string postFix;
  int i;

  cout << "Please enter a number, then press enter:" << endl;
  cin >> userNum;

  while (cin.fail() || userNum == 0) { //cin fails when a non-integer is entered into an int variable
    cin.clear(); // clears and fixes cin
    cin.ignore(INT_MAX, '\n'); // ignores previous invalid input
    cout << "\nInvalid input." << endl;
    cout << "Please input a number, then press enter:" << endl;
    cin >> userNum;
  }
 
  for (i = 1; i <= userNum; ++i) {
    numRemainder = i % 10;

    if (numRemainder == 1) {
      postFix = "st"; 
    }
    else if (numRemainder == 2) {
      postFix = "nd";
    }
    else if (numRemainder == 3) {
      postFix = "rd";
    }
    else {
      postFix = "th";
    }
    
    cout << i << postFix << " Hello" << endl;
  }
  
  return 0;
}
