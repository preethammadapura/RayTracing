#ifndef CYLINDER_H
#define CYLINDER_H


#include "point.h"

using namespace std;


class cylinder {
	private:
		// Members
		point *cent;
		double rad;
		double ht;
		double Ka[3];
		double Kd[3];
		double Ks[3];
		double n_exp;
		double refl;		// raytracing only
		double tran;		// raytracing only
		double idx_ref;		// raytracing only
	
	public:
		// Constructor/Destructor
		cylinder(point *c, double r, double h) {cent = c; rad = r; ht=h;}
		~cylinder() {};
	
		// Methods
		void setIa(double r, double g, double b)  {Ka[0] = r; Ka[1] = g; Ka[2] = b;}
		void setId(double r, double g, double b)  {Kd[0] = r; Kd[1] = g; Kd[2] = b;}
		void setIr(double r, double g, double b) {Ks[0] = r; Ks[1] = g; Ks[2] = b;}
		void setn(double n) {n_exp = n;}
		void setReflection(double reflection) {refl = reflection;}
		void setTransmission(double transmission) {tran = transmission;}
		void setIndexOfRefraction(double idxRefraction) {idx_ref = idxRefraction;}
		point* center() {return cent;}
		double getcentery() {return cent->y();}
		double radius() {return rad;}
		double height() {return ht;}
		double getIa(int color)  {return Ka[color];}
		double getId(int color)  {return Kd[color];}
		double getIr(int color) {return Ks[color];}
		double getn() {return n_exp;}
		double getReflection() {return refl;}
		double getTransmission() {return tran;}
		double getIndexOfRefraction() {return idx_ref;}
};
#endif // CYLINDER_H