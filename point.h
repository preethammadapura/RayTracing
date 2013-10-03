#ifndef POINT_H
#define POINT_H

using namespace std;

class point {
	private:
		// Members
		double u;
		double v;
		double w;
	
	public:
		// Constructor/Destructor
		point(double x, double y, double z) {u = x; v = y; w = z;}
		~point() {};
	
		// Methods
		void sety(double y)	{v=y;}
		double x() {return u;}
		double y() {return v;}
		double z() {return w;}
};

#endif // POINT_H