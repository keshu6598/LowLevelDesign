//   __                    .__              ________ .________ ________   ______  
//  |  | __  ____    ______|  |__   __ __  /  _____/ |   ____//   __   \ /  __  \ 
//  |  |/ /_/ __ \  /  ___/|  |  \ |  |  \/   __  \  |____  \ \____    / >      < 
//  |    < \  ___/  \___ \ |   Y  \|  |  /\  |__\  \ /       \   /    / /   --   \
//  |__|_ \ \___  >/____  >|___|  /|____/  \_____  //______  /  /____/  \______  /
//       \/     \/      \/      \/               \/        \/                  \/
 
#include<bits/stdc++.h>
#define range 100005
#define mod 1000000007
#define eps 1e-9
#define PI 3.14159265358979323846
#define pb push_back
#define pf push_front
#define mp make_pair
#define fi first
#define se second
#define ALL(V) V.begin(), V.end()
#define _ <<" "<<
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>  
 
using namespace std;
 
typedef long long ll;
typedef vector <int> vi;
typedef vector<vi> vvi;
typedef pair <int, int> ii;
typedef pair<int, pair<int,int> > iii;
typedef vector<ii> vii;
typedef vector<iii> viii;
  
class Circle {

private:
	double radius;
	const double Pi = 3.14;

public:
	Circle() {
		radius =0;
	}
	Circle(double r) {
		radius = r;
	}
	double getArea() {
		return Pi * radius * radius;
	}
	double getPerimeter() {
		return 2 * Pi * radius;
	}
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    Circle circle(5);
    cout << "Area of Circle = " << circle.getArea() << endl;
    cout << "Permieter of Circle = " << circle.getPerimeter() << endl;
    return 0;
}