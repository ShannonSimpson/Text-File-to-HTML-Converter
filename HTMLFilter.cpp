// HTMLFilter.cpp
//
// Implementation file for a HTMLFilter class
// Adds <html><head><title>HTML document</title></head><body> to the beginning
// Adds </body></html> to the end.

#include "HTMLFilter.h"
#include <iostream>
#include <string>

using namespace std;

void HTMLFilter::applyFilter(istream & inStream, ostream & outStream)
{
	outStream << "<html><head><title>HTML document</title></head><body>";
	while (inStream.good())
	{
		string s;
		inStream >> s;
		outStream << s;
		outStream << " ";
	}

	outStream << "</body></html>";
		
};
