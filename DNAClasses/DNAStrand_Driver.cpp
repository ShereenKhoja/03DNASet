//**************************************************************************** 
// File name:		DNAStrand_Driver.cpp
// Author:			chadd williams
// Date:				2/26/2020
// Class:				CS 250
// Assignment:  04_DNASet
// Purpose:			Demonstrate the DNA class
//****************************************************************************

#include "DNAStrand.h"
#include <fstream>

using namespace std;

//****************************************************************************
// Function:	  main
//
// Description:	Demonstrate the use of class DNAStrand
//
// Parameters:  None
//
// Returned:	  EXIT_SUCCESS
//***************************************************************************
int main() {
	DNAStrand cDNA1, cDNA2, cDNA3;

	bool bIsValid  = false;

	do {
		cout << "DNA1 > ";
		bIsValid = cDNA1.read(cin);
	} while (!bIsValid);

	do {
		cout << "DNA2 > ";
		bIsValid = cDNA2.read(cin);
	} while (!bIsValid);

	cout << " DNA 1 " << endl;
	cDNA1.print(cout);
	cout << endl;
	cout << endl;

	cDNA3 = cDNA1.complement();
	cout << " DNA 1 Complement" << endl;
	cDNA3.print(cout);
	cout << endl;
	cout << endl;

	cDNA3 = cDNA1.reverse();
	cout << " DNA 1 Reverse" << endl;
	cDNA3.print(cout);
	cout << endl;
	cout << endl;

	cout << "P Stat is zero: ";
	cout << cDNA1.pstat(cDNA1) << endl;
	cout << endl;

	cout << " P Stat: " << cDNA1.pstat(cDNA3);
	cout << " == " << cDNA3.pstat(cDNA1) << endl;
	cDNA1.print(cout);
	cout << endl;
	cDNA3.print(cout);
	cout << endl;

	return EXIT_SUCCESS;
}
