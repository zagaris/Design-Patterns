// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_VISITOR_VISITOR_H_
#define BEHAVIORAL_PATTERNS_VISITOR_VISITOR_H_

// ˅
class File;
class Directory;

// ˄

class Visitor
{
	// ˅
	
	// ˄

public:

	virtual ~Visitor();

	virtual void visit(const File* file) = 0;

	virtual void visit(const Directory* directory) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_VISITOR_VISITOR_H_

// ˅

// ˄
