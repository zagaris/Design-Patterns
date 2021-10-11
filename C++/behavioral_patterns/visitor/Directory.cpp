// ˅
#include "behavioral_patterns/visitor/Directory.h"
#include "behavioral_patterns/visitor/Visitor.h"
#include "behavioral_patterns/visitor/FileSystemElement.h"

// ˄

Directory::Directory(const string& name)
	: name(name)
	// ˅
	
	// ˄
{
	// ˅
	
	// ˄
}

Directory::~Directory()
{
	// ˅
	
	// ˄
}

void Directory::accept(Visitor* visitor)
{
	// ˅
	visitor->visit(this);
	// ˄
}

const string Directory::getName() const
{
	// ˅
	return name;
	// ˄
}

const int Directory::getSize() const
{
	// ˅
	int size = 0;
	for (FileSystemElement* element : elements) {
		size += element->getSize();
	}
	return size;
	// ˄
}

void Directory::add(FileSystemElement* element)
{
	// ˅
	elements.push_back(element);
	// ˄
}

vector<FileSystemElement*>::const_iterator Directory::getBeginIterator() const
{
	// ˅
	return elements.begin();
	// ˄
}

vector<FileSystemElement*>::const_iterator Directory::getEndIterator() const
{
	// ˅
	return elements.end();
	// ˄
}

// ˅

// ˄
