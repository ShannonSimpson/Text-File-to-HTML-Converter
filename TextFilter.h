// TextFilter.h
//
// Declares the ITextFilter interface as well as the
// applyAllFilters function that must be called by the program.
//
// Do not modify.

#ifndef __TextFilter_included_
#define __TextFilter_included_

// Need to include these here to ensure they
// are included before the use of the vector
// and streams below
#include <vector>
#include <iostream>


// Note that we use the "std::" convetion to refer to
// STL classes in the header file -- it is bad form to
// use "using namespace std;" in a header file, so we
// use the long form.

class ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream) = 0;
};


// Declaration of the function; since we declare it here, our main file
// will know how to call this.  Defined in applyAllFilters.cpp.
void applyAllFilters(std::istream & inStream, std::ostream & outStream, std::vector<ITextFilter*> & vFilters);

#endif