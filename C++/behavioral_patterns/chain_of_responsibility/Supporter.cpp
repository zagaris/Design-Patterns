// ˅
#include <iostream>
#include "behavioral_patterns/chain_of_responsibility/Supporter.h"

using namespace std;

// ˄

Supporter::Supporter(const string& name)
	: name(name)
	, next(nullptr)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Supporter::~Supporter()
{
	// ˅
	
	// ˄
}

void Supporter::support(const Trouble* trouble) const
{
	// ˅
	if (canHandle(trouble) == true) {
		supported(trouble);
	}
	else if (next != nullptr) {
		next->support(trouble);
	}
	else {
		unsupported(trouble);
	}
	// ˄
}

Supporter* Supporter::setNext(Supporter* next)
{
	// ˅
	this->next = next;
	return this->next;
	// ˄
}

void Supporter::supported(const Trouble* trouble) const
{
	// ˅
	cout << trouble->toString() << " was handled by " << name  << "." << endl;
	// ˄
}

void Supporter::unsupported(const Trouble* trouble) const
{
	// ˅
	cout << trouble->toString() << " was not handled." << endl;
	// ˄
}

// ˅

// ˄
