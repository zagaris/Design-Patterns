// ˅
#include <iostream>
#include "behavioral_patterns/template_method/StringDisplay.h"

using namespace std;

// ˄

StringDisplay::StringDisplay(const string& string_value)
	: string_value(string_value)
	, width(static_cast<int>(string_value.length()))
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

StringDisplay::~StringDisplay()
{
	// ˅
	
	// ˄
}

void StringDisplay::open()
{
	// ˅
	writeLine();								// Write a line
	// ˄
}

void StringDisplay::write()
{
	// ˅
	cout << "|" << string_value << "|" << endl;	// Display the character with "|"
	// ˄
}

void StringDisplay::close()
{
	// ˅
	writeLine();								// Write a line
	// ˄
}

void StringDisplay::writeLine()
{
	// ˅
	cout << "+";							// Display an end mark "+"
	for (int i = 0; i < width; ++i) {
		cout << "-";						// Display a line "-"
	}
	cout << "+" << endl;					// Display an end mark "+"
	// ˄
}

// ˅

// ˄
