#include <bits/stdc++.h>
#define EPS 1e-7
#define sqr(x) ( (x) * (x) )

using namespace std;

struct Point {
    double x,y,z;
    Point() {}
    Point(double x_, double y_, double z_) {
        x = x_;
        y = y_;
        z = z_;
    }

    void print() {
        cout << "(" << x << " " << y << " " << z << ")" << endl;
    }
    string toString() {
        return "(" + to_string(x) + " " + to_string(y) + " " + to_string(z) + ")";
    }
};

double dist(Point a, Point b) {
    return sqrt(sqr(a.x-b.x)
              + sqr(a.y-b.y)
              + sqr(a.z-b.z));
}

double solve(Point a, Point b, Point p) {
    Point lo = a, hi = b;
    while(dist(lo,hi) > EPS) {
//    for(int t=0; t<50; t++) {
        Point m1, m2;

//        cout << t << ": "
//                << " lo:" << lo.toString() << " m1:" << m1.toString()
//                << " m2:" << m2.toString() << " hi:" << hi.toString()
//                << endl;

        m1.x = lo.x+(hi.x-lo.x)/3;
        m1.y = lo.y+(hi.y-lo.y)/3;
        m1.z = lo.z+(hi.z-lo.z)/3;

        m2.x = lo.x+(hi.x-lo.x)/3*2;
        m2.y = lo.y+(hi.y-lo.y)/3*2;
        m2.z = lo.z+(hi.z-lo.z)/3*2;

        if(dist(p, m1) > dist(p, m2)) {
            lo = m1;
        }
        else {
            hi = m2;
        }
    }
    return dist(p, hi);
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t=1; t<=T; t++) {
        Point a, b, p;
        scanf("%lf %lf %lf", &a.x, &a.y, &a.z);
//        cout << a.x << " " << a.x << " " << a.z << endl;
        scanf("%lf %lf %lf", &b.x, &b.y, &b.z);
        scanf("%lf %lf %lf", &p.x, &p.y, &p.z);
        printf("Case %d: %.10f\n", t, solve(a,b,p));

//        cout << solve(a,b,p) << endl;
    }
}
