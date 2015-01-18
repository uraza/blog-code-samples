#pragma once
#include <math.h>
#include "Point.h"

class Line {
public:
  Line(const Point &p1, const Point &p2) : first(p1), second(p2) {
  }
  double length() {
    double dx = first.getX() - second.getX(), dy = first.getY() - second.getY();
    return sqrt(dx*dx + dy*dy);
  }
private:
  Point first, second;
};
