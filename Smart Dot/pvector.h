#ifndef PVECTOR_H
#define PVECTOR_H

#include "stdafx.h"
using namespace std;

#define pi 3.14159
using namespace std;

class pvector
{
public:
	double x, y;
	pvector() : x(0), y(0) {};
	pvector(double X, double Y) : x(X), y(Y) {}

	double GetLength() const
	{
		return sqrt((x * x) + (y * y));
	}
	void Normalize()
	{
		*this /= GetLength();
	}
	pvector Normalized()
	{
		return *this /= GetLength();
	}
	double Dot(pvector Vec) const
	{
		return (x * Vec.x) + (y * Vec.y);
	}
	double Angle(pvector);
	double GreaterAngle(pvector rightVec)
	{
		return double((2 * pi) - Angle(rightVec));
	}

	pvector operator+ (pvector) const;
	pvector operator- (pvector) const;
	pvector operator* (double) const;
	pvector operator/ (double) const;
	pvector& operator+= (pvector);
	pvector& operator-= (pvector);
	pvector& operator*= (double);
	pvector& operator/= (double);
	pvector& operator= (pvector);
	bool operator== (const pvector&) const;
	bool operator!= (const pvector&) const;
protected:
private:
};

#endif // PVECTOR_H
