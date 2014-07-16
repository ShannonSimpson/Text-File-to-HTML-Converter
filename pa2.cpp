//Shannon Simpson
//Shannon.Simpson@uky.edu

// Programming Assignment 2
//

#include <iostream>
#include <string>
#include <ostream>
#include <fstream>
#include <strstream>
#include "TextFilter.h"
#include "BoldFilter.h"
#include "EndlineFilter.h"
#include "FormatFilter.h"
#include "HTMLFilter.h"
#include "ItalicsFilter.h"
#include "LinksFilter.h"
#include "UnderlineFilter.h"



using namespace std;

// Main implementation file -- your main function should go here.

int main()
{
	string sFilters;
	string sOutputfile;
	string sInputfile;

	cout << "Where is the input?" << endl << "Please type the file name or \"console\":  ";
	cin >> sInputfile;
	vector<ITextFilter*> vFilters;

	istream * pPassString;
	ostream * pFinalOutput;

	if (sInputfile == "console")
	{
		pPassString = &cin;
	}
	else
	{
		ifstream * pInputfile = new ifstream;
		pInputfile->open(sInputfile);
		pPassString = pInputfile;
	}

	cout << "Which filters should be applied?  ";
	cin >> sFilters;
	cout << "File for the output?  ";
	cin >> sOutputfile;

	if (sOutputfile == "console")
	{
		pFinalOutput = &cout;
	}
	else
	{
		ofstream * pOutputfile = new ofstream;
		pOutputfile->open(sOutputfile);
		pFinalOutput = pOutputfile;
	}

	//what to do after stuff has been brought in
	for (size_t i = 0; i < sFilters.size(); i++)
	{
		char c = sFilters[i];
		if (c == 'E')
		{
			vFilters.push_back(new EndlineFilter);
		}
		else if (c == 'H')
		{
			vFilters.push_back(new HTMLFilter);
		}
		else if (c == 'I')
		{
			vFilters.push_back(new ItalicsFilter);
		}
		else if (c == 'B')
		{
			vFilters.push_back(new BoldFilter);
		}
		else if (c == 'U')
		{
			vFilters.push_back(new UnderlineFilter);
		}
		else if (c == 'L')
		{
			vFilters.push_back(new LinksFilter);
		}
	}

	applyAllFilters(*pPassString, *pFinalOutput, vFilters);

	cout << endl;
	
	for (size_t i = 0; i < vFilters.size(); i++)
	{
		delete vFilters[i];
	}

	system("pause");
	return 0;
}