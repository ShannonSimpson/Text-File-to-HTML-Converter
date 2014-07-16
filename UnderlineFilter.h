// UnderlineFilter.h
//
// Header file for a UnderlineFilter class

#include "TextFilter.h"

#ifndef __UnderlineFilter_included_
#define __UnderlineFilter_included_


class UnderlineFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif