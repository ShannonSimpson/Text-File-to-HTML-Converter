// LinksFilter.cpp
//
// Implementation file for a LinksFilter class
// Link comes in as: http://protocols.netlab.uky.edu/~davidb/cs215
// Becomes: <ahref="http://protocols.netlab.uky.edu/davidb/cs215">http://protocols.netlab.uky.edu/~davidb/cs215</a>
// Check for http:// and https://

#include "LinksFilter.h"
#include <iostream>
#include <string>

using namespace std;

void LinksFilter::applyFilter(istream & inStream, ostream & outStream)
{
	while( inStream.good() )
	{
		string s;
		inStream >> s;

		if( s.find("http://") == 0 || s.find("https://") == 0 )
		{
			outStream << "<a href=\"" << s << "\">"	<< s << "</a>";
		}
		else
		{
			outStream << s;
		}

		outStream << " ";

	}
}
