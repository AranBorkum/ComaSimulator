// ----------------------------------
// COMA SIMULATOR LITE version 0.0.1
// Authors: A. Borkum, M. Nirkko
// Updated: 23 Jan 2019
// ----------------------------------
#include <iostream>  // cout, flush, endl
#include <cmath>     // round
#include <unistd.h>  // usleep
using std::cout;
using std::endl;
using std::flush;

// Declare function
void progress(float);

// Main program 
int main() {
  cout << "You are in a coma. Attempting to wake up:" << endl;
  float prog = 0.0;
  while (prog <= 1.0) {
    progress(prog);  // display progress bar (should not be called every iteration!)
    prog += 0.01;    // increase progress by 1% (for demonstration only)
    usleep(5e4);     // wait for N microseconds (to artificially slow down loop)
  }
  cout << endl;
  cout << "Unable to wake up from a coma. You have died alone." << endl;
  usleep(1e6);
  cout << "*** GAME OVER *** Thanks for playing!" << endl;
  return 0;
}

// Display a dynamic progress bar
void progress(float prog) {
  int barWidth = 60;
  cout << "[";
  int pos = barWidth * prog;
  for (int i = 0; i < barWidth; ++i) {
      if (i < pos) cout << "=";			// passed this point
      else if (pos+1==barWidth) cout << "=";	// last entry (100%)
      else if (i == pos) cout << ">";		// current point
      else cout << " ";				// future point
  }
  cout << "] " << (int)round(100.*prog) << " %\r" << flush;
}

