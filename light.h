#ifndef LIGHT_H
#define LIGHT_H

#include "point.h"

using namespace std;


class light {
	private:
		// Members
		point *l;
		double col[3];
	
	public:
		// Constructor/Destructor
		light(point *loc, double r, double g, double b) {l = loc; col[0] = r; col[1] = g; col[2] = b;}
		~light() {};
	
		// Methods
		point* location() {return l;}
		double red()   {return col[0];}
		double green() {return col[1];}
		double blue()  {return col[2];}
};
#endif // LIGHT_H