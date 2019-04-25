#include "stdafx.h"
#include "pvector.h"
int main()
{
	pvector p;
	int a;
	double ang = 0.1;
	p.fromAngle(ang);
	cout << p.x << " " << p.y;
	cin >> a;
	return 0;
}