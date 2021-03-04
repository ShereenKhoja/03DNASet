#pragma once
//**************************************************************************** 
// File name:		DNAStrand.h
// Author:			chadd williams
// Date:				2/26/2020
// Class:				CS 250
// Assignment:  04_DNASet
// Purpose:			Demonstrate the DNA class
//****************************************************************************


#include <string>
#include <iostream>

using namespace std;

class DNAStrand {

	public:
		
		DNAStrand reverse() const;
		DNAStrand complement() const;

		bool read(istream&);
		void print(ostream&) const;

		double pstat(const DNAStrand&) const;
		int length() const;

		static const char ADENINE = 'A';
		static const char THYMINE = 'T';
		static const char CYTOSINE = 'C';
		static const char GUANINE = 'G';

	private:

		string mDNA;
};
