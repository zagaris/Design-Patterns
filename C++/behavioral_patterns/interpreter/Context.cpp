// ˅
#include <sstream>
#include <iostream>
#include <cctype>
#include <algorithm>
#include "behavioral_patterns/interpreter/Context.h"

using namespace std;

// ˄

Context::Context(const string& text)
	// ˅
	
	// ˄
{
	// ˅
    stringstream text_stream(text);
    string node = "";
    while (getline(text_stream, node, ' ') && node.empty() == false) {
        nodes.push_back(node);
    }
	
    current_node = nodes.begin();
	// ˄
}

Context::~Context()
{
	// ˅

	// ˄
}

string Context::nextToken()
{
	// ˅
    ++current_node;
	return getToken();
	// ˄
}

string Context::getToken()
{
	// ˅
    if (current_node != nodes.end()) {
        return (*current_node);
    }
    else {
        return "";
    }
	// ˄
}

void Context::slideToken(const string& token)
{
	// ˅
    if (token != getToken()) {
        cerr <<  "WARNING: " << token << " is expected but " << getToken() << " was found." << endl;
		exit(1);
	}
	nextToken();
	// ˄
}

const int Context::getNumber()
{
	// ˅
    int ret = 0;
    const string token = getToken();
    try {
        ret = stoi(token);
    }
    catch (invalid_argument e) {
        cerr << "WARNING: " << e.what() << endl;
        exit(1);
    }
    catch (out_of_range e) {
        cerr << "WARNING: " << e.what() << endl;
        exit(1);
	}
    return ret;
	// ˄
}

// ˅

// ˄
