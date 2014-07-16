// BoldFilter.h
//
// Header file for a BoldFilter class

#include "TextFilter.h"

#ifndef __BoldFilter_included_
#define __BoldFilter_included_


class BoldFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif