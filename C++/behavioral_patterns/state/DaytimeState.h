// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_
#define BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_

// ˅
#include <string>
#include "behavioral_patterns/state/State.h"

using namespace std;


// ˄

class DaytimeState : public State
{
	// ˅
	
	// ˄

private:

	static DaytimeState* instance;

public:

	static DaytimeState* getInstance();

private:

	DaytimeState();

public:

	~DaytimeState();

	void setTime(Context* context, const int hour);

	void use(const Context* context) const;

	void alarm(const Context* context) const;

	void phone(const Context* context) const;

	const string toString() const;

	// ˅
public:
	
protected:
	
private:
	DaytimeState(const DaytimeState&) = delete;
	DaytimeState& operator=(const DaytimeState&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_STATE_DAYTIMESTATE_H_

// ˅

// ˄
