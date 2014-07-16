// BoldFilter.cpp
//
// Implementation file for a BoldFilter class
// Replaces * with bold

#include "BoldFilter.h"
#include <iostream>
#include <string>

using namespace std;

void BoldFilter::applyFilter(istream & inStream, ostream & outStream)
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
			outStream << "<b>" << s.substr(1,s.length()-2) << "</b>" << " ";
		}
	}
};
