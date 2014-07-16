// UnderlineFilter.cpp
//
// Implementation file for an UnderlineFilter class
// Makes the phrase in between _word_ into an underlined word. 

// For HTML5 underlining use:  text-decoration-line: underline;

#include "UnderlineFilter.h"
#include <iostream>
#include <string>

using namespace std;

void UnderlineFilter::applyFilter(istream & inStream, ostream & outStream)
{

	while (inStream.good())
	{
		string s;
		inStream >> s;

		if(s.find("_") == string::npos)
		{
			outStream << s << " ";
		}
		else   //HTML5 UNDERLINING
		{
			if( s.find("_") == 0)
			{
				outStream << "<span style=\"text-decoration: underline;\">" << s.substr(1) << " ";
			}
			else if ( s.find("_") == s.length()-1)
			{
				 outStream << s.substr(0, s.length()-1) << "</span>" << " ";
			}
			else
			{
				outStream << s << " ";  
			}
		}
	}
};