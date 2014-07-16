// HTMLFilter.h
//
// Header file for a HTMLFilter class

#include "TextFilter.h"

#ifndef __HTMLFilter_included_
#define __HTMLFilter_included_

class HTMLFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif