#include <iostream>
#include <cmath>
#include <complex>
#define x() real()
#define y() imag()
using namespace std;
typedef complex<double> point;

double xx1,yy1,xx2,yy2,xxm,yym;

bool doIntersect(point a,point b,point c,point d){
    point v(c.x() - a.x(), c.y() - a.y());
	point r(b.x() - a.x(), b.y() - a.y());
	point s(d.x() - c.x(), d.y() - c.y());

	double vr = v.x() * r.y() - v.y() * r.x();
	double vs = v.x() * s.y() - v.y() * s.x();
	double rxs = r.x() * s.y() - r.y() * s.x();

    if (vr == 0.0f) return ((c.x() - a.x() < 0.0f) != (c.x() - b.x() < 0.0f)) || ((c.y() - a.y() < 0.0f) != (c.y() - b.y() < 0.0f));
    if (rxs == 0.0f) return false;

    double rxsr = 1.0f / rxs;
	double t = vs * rxsr;
	double u = vr * rxsr;

    return (t >= 0.0f) && (t <= 1.0f) && (u >= 0.0f) && (u <= 1.0f);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> xx1 >> yy1 >> xx2 >> yy2 >> xxm >> yym;
        if (doIntersect(point(0.0f,0.0f),point(xxm,yym),point(xx1,yy1),point(xx2,yy2))) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}