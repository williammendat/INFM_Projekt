#pragma once

#include "Point.h"

class Dimension {
private:
	Points points_;

public:
	Dimension(Points points);
	Point* getPoint(uint32_t index);
	uint32_t getSize();
};

typedef std::vector<Dimension> Dimensions;