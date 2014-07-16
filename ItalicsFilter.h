// ItalicsFilter.h
//
// Header file for a ItalicsFilter class

#include "TextFilter.h"

#ifndef __ItalicsFilter_included_
#define __ItalicsFilter_included_

class ItalicsFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif