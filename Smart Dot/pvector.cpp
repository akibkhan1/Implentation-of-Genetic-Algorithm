#include "stdafx.h"
#include "pvector.h"

pvector& pvector::fromAngle(double ang) {
	x = cos(ang);
	y = sin(ang);
	return *this;
}
double pvector::Angle(pvector Vec) {
	pvector tempVec = Normalized();
	double temp = tempVec.Dot(Vec.Normalized());
	return double(acos(temp));
}
pvector pvector::operator+(pvector Vec)const {
	return pvector(*this) += Vec;
}

pvector pvector::operator-(pvector Vec) const {
	return pvector(*this) -= Vec;
}

pvector pvector::operator*(double scalar) const {
	return pvector(*this) *= scalar;
}

pvector pvector::operator/(double scalar) const {
	return pvector(*this) /= scalar;
}

pvector& pvector::operator+=(pvector Vec) {
	x += Vec.x;
	y += Vec.y;
	return *this;
}

pvector& pvector::operator-=(pvector Vec) {
	x -= Vec.x;
	y -= Vec.y;
	return *this;
}

pvector& pvector::operator*=(double scalar) {
	x *= scalar;
	y *= scalar;
	return *this;
}

pvector& pvector::operator/=(double scalar) {
	x /= scalar;
	y /= scalar;
	return *this;
}

pvector& pvector::operator=(pvector Vec) {
	x = Vec.x;
	y = Vec.y;
	return *this;
}

bool pvector::operator==(const pvector& Vec) const {
	return (x == Vec.x && y == Vec.y);
}

bool pvector::operator!=(const pvector& Vec) const {
	return !operator==(Vec);
}
