// ˅

// ˄

#ifndef BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCANVAS_H_
#define BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCANVAS_H_

// ˅
#include <msclr/gcroot.h>
#include "behavioral_patterns/command/PaintingTarget.h"

using namespace System::Windows::Forms;

// ˄

class PaintingCanvas : public PaintingTarget
{
	// ˅
	
	// ˄

private:

	msclr::gcroot<PictureBox^> picture_box;

	// Radius of the painting point
	const double point_radius;

public:

	PaintingCanvas(msclr::gcroot<PictureBox^> picture_box);

	~PaintingCanvas();

	void paint(const double x, const double y) const;

	void clear();

	// ˅
public:
	
protected:
	
private:
	PaintingCanvas(const PaintingCanvas&) = delete;
	PaintingCanvas& operator=(const PaintingCanvas&) = delete;
	
	// ˄
};

// ˅

// ˄

#endif	// BEHAVIORAL_PATTERNS_COMMAND_PAINTINGCANVAS_H_

// ˅

// ˄
