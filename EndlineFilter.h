// EndlineFilter.h
//
// Header file for an EndlineFilter class

#include "TextFilter.h"

#ifndef __EndlineFilter_included_
#define __EndlineFilter_included_


class EndlineFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif