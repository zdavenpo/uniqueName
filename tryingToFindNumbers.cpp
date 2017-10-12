#include <iostream>
using namespace std;
#include <math.h>

float numberToBeCalc;
float multiplier;

float truncNumMin;
float truncNumMax;
float roundNumMin;
float roundNumMax;
float floorNumMin;
float floorNumMax;
float cielNumMin;
float cielNumMax;

int main() {
	// your code goes here
	
	cout << "Enter a number: " << endl;
	cin >> numberToBeCalc;
	cout << "Enter the multiplier: " << endl;
	cin >> multiplier;
	
	numberToBeCalc = trunc(numberToBeCalc);
	truncNumMin = numberToBeCalc + .001;
	truncNumMax = numberToBeCalc + .999;
	roundNumMin = numberToBeCalc - .5;
	roundNumMax = numberToBeCalc + .499;
	floorNumMin = numberToBeCalc;
	floorNumMax = numberToBeCalc + .999;
	cielNumMin = numberToBeCalc - .999;
	cielNumMax = numberToBeCalc;
	
	cout << "After Multiplier (trunc):\n" << trunc(truncNumMin*multiplier) << " to "
	    << trunc(truncNumMax*multiplier) << endl << trunc(roundNumMin*multiplier) <<
	    " to " << trunc(roundNumMax*multiplier) << endl << trunc(floorNumMin*multiplier) <<
	    " to " << trunc(floorNumMax*multiplier) << endl << trunc(cielNumMin*multiplier) <<
	    " to " << trunc(cielNumMax*multiplier) << "\n\n";
	    
	cout << "After Multiplier (round):\n" << round(truncNumMin*multiplier) << " to "
	    << round(truncNumMax*multiplier) << endl << round(roundNumMin*multiplier) <<
	    " to " << round(roundNumMax*multiplier) << endl << round(floorNumMin*multiplier) <<
	    " to " << round(floorNumMax*multiplier) << endl << round(cielNumMin*multiplier) <<
	    " to " << round(cielNumMax*multiplier) << "\n\n";
	    
	cout << "After Multiplier (floor):\n" << floor(truncNumMin*multiplier) << " to "
	    << floor(truncNumMax*multiplier) << endl << floor(roundNumMin*multiplier) <<
	    " to " << floor(roundNumMax*multiplier) << endl << floor(floorNumMin*multiplier) <<
	    " to " << floor(floorNumMax*multiplier) << endl << floor(cielNumMin*multiplier) <<
	    " to " << floor(cielNumMax*multiplier) << "\n\n";
	    
	cout << "After Multiplier (ceil):\n" << ceil(truncNumMin*multiplier) << " to "
	    << ceil(truncNumMax*multiplier) << endl << ceil(roundNumMin*multiplier) <<
	    " to " << ceil(roundNumMax*multiplier) << endl << ceil(floorNumMin*multiplier) <<
	    " to " << ceil(floorNumMax*multiplier) << endl << ceil(cielNumMin*multiplier) <<
	    " to " << ceil(cielNumMax*multiplier) << "\n\n";
	
	return 0;
}
