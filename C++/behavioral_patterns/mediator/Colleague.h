// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_
#define BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_

// ˅
class Mediator;


// ˄

class Colleague
{
	// ˅
	
	// ˄

protected:

	Mediator* mediator;

public:

	Colleague(Mediator* mediator);

	~Colleague();

	// Set enable/disable from the Mediator
	virtual void setActivation(const bool is_enable) = 0;

	// ˅
public:
	
protected:
	
private:
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_MEDIATOR_COLLEAGUE_H_

// ˅

// ˄
