// applyAllFilters.cpp 
//
// Implements the applyAllFilters function.
//
// Do not modify.

#include "TextFilter.h"

#include <vector>
#include <string>
#include <sstream>
#include <iostream>


using namespace std;

// This is not particularly pretty, but it's functional
// and set up to make debugging a *little* bit easier...

void applyAllFilters(istream & inStream, ostream & outStream, vector<ITextFilter*> & vFilters)
{
	// Stringstreams to make this a
	// little bit easier to debug
	stringstream ssOut;
	istringstream ssIn;


	// Initially, our output should be
	// the stream passed in, although
	// we'll change it in the loop.
	istream * pIn = &inStream;

	// Iterate through the filters in the vector
	for( size_t i = 0; i < vFilters.size(); i++ )
	{
		// Clear the output stream before we
		// send more stuff to it
		ssOut.str("");

		// Actually apply the filter
		vFilters[i]->applyFilter(*pIn, ssOut);

		// Setting a debug breakpoint here and stepping past
		// this line will show you what's in sResult -- which
		// is the output of the applyFilter call above...
		string sResult = ssOut.str();

		// Load the output into the input stream
		ssIn.clear();
		ssIn.str(sResult);

		// Set the input to the input stream
		pIn = &ssIn;
		
	}

	// Now that we're done applying the filters, send the final result to
	// specified output stream
	outStream << ssOut.str();
}