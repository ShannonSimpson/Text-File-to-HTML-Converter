// EndlineFilter.cpp
//
// Implementation file for an EndlineFilter class
// Replaces \n with </b>

#include "EndlineFilter.h"
#include "TextFilter.h"
#include <string>
#include <iostream>


using namespace std;

void EndlineFilter::applyFilter(istream & inStream, ostream & outStream)
{
	while (inStream.good()) 
	{
		char currentLetter;
		currentLetter = inStream.get();
		while (inStream.good())
		{
			if (currentLetter != '\n')
			{
				outStream << currentLetter;
				currentLetter = inStream.get();
			}
			else
			{
				outStream << "<br>" << " ";
				currentLetter = inStream.get();
			}
		}
		inStream.unget();
	}
};