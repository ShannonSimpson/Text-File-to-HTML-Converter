// ItalicsFilter.cpp
//
// Implementation file for an ItalicsFilter class
// Replaces * with Italics. 

#include "ItalicsFilter.h"
#include <iostream>
#include <string>

using namespace std;

void ItalicsFilter::applyFilter(istream & inStream, ostream & outStream)
{
	while (inStream.good())
	{
		string s;
		inStream >> s;

		if(s.find("*") == string::npos)
		{
			outStream << s;
			outStream << " ";
		}
		else
		{
			outStream << "<i>" << s.substr(1,s.length()-2) << "</i>" << " ";
		}
	}
};