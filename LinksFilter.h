// LinksFilter.h
//
// Header file for a LinksFilter class

#include "TextFilter.h"

#ifndef __LinksFilter_included_
#define __LinksFilter_included_

class LinksFilter : public ITextFilter
{
public:
	virtual void applyFilter(std::istream & inStream, std::ostream & outStream);
};


#endif