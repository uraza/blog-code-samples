#pragma once

class Point {
public:
    Point(double x, double y) : x(x), y(y) {
    }
    double getX() const {
        return x;
    }
    double getY() const {
        return y;
    }
private:
    double x, y;
};
