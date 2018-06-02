#include "drawing.h"
#include <cmath>

// This function will draw a single pixel at x,y
void PlotPixel(uint32_t* pColours, uint32_t width, uint32_t height, uint32_t pitch, uint32_t x, uint32_t y)
{
	uint32_t pixel = 0xFFFF0000;
	pColours = pColours + x;			// Move along x.
	pColours = pColours + y * width;	// Move down y rows by width
	*pColours = pixel;
}

// This function draws everything
void Draw(uint32_t* pColours, uint32_t width, uint32_t height, uint32_t pitch)
{
	for (int x = width / 2; x < width; x++)
	{
		PlotPixel(pColours, width, height, pitch, x, height / 2);
	}
}
