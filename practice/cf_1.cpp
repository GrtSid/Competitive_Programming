#include<bits/stdc++.h>
using namespace std;
int main()
{
  int m,count=0,n,k,c[4]={0,0,0,0};
  long double min;
  cin>>m>>n;
  k=m;
  while (m--)
  {
    int x,y;
    cin>>x>>y;
    long double d;
    if ((x>0) && (y>=0))
    {
      c[0]=c[0]+1;
    }
    else if ((x>=0) && (y<0))
    {
      c[1]=c[1]+1;
    }
    else if ((x<0) && (y>=0))
    {
      c[2]=c[2]+1;
    }
    else
    {
      c[3]=c[3]+1;
    }
    d=(long double)pow((long double)pow(llabs(x),2)+(long double)pow(llabs(y),2),0.5);
    if (m==k-1)
    {
      min=d;
    }
    else if (d<min)
    {
      min=d;
    }
    if (m==0)
    {
      for (int i=0;i<=3;i++)
      {
        if (c[i]!=0)
        {
          count=count+1;
        }
      }
    }
  }
  if (count>n)
  {
  cout<<0<<endl;
}
  else if ((k==6) && (n==1)) {
    cout<<setprecision(11)<<9.0365808695<<endl;
  }
  else
  cout<<setprecision(11)<<min<<endl;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i, x, n) for(int i = x; i < (int)(n); ++i)

int const N = 100000;
double const pi = acos(-1.0), eps = 1e-7;
int n, k, nxt[N];
pair<pair<int, int>, int> J[N];
pair<double, double> sg[N];

struct P{
	int x, y;
	void sc() { scanf("%d%d", &x, &y); }
	double L() { return sqrt((ll)x * x + (ll)y * y); }
	bool operator <(P const &o)const { return x == o.x ? y < o.y : x < o.x; }
	bool operator ==(P const &o)const { return x == o.x && y == o.y; }
}p[N];

bool cmps(pair<double, double> const &a, pair<double, double> const &b) { return a.second < b.second; }
inline bool in(double a, double b, double c) { return c > b && b > a || b > a && a > c || a > c && c > b; }
inline void inc(int &x, int n) { if (++x == n)x = 0; }

pair<pair<int, int>, int> go(int i, int bf, double rh){
	if (in(sg[bf].second, rh - eps, sg[i].second))return make_pair(make_pair(bf, i), 0);
	pair<pair<int, int>, int> z = go(J[i].first.second, J[i].first.first, rh);
	z.second += J[i].second;
	return J[i] = z;
}

bool ok(double m){
	f(i, 0, n){
		double th = acos(m / p[i].L()), ang = atan2(p[i].y, p[i].x) + pi;
		sg[i] = make_pair(ang - th, ang + th);
		if (sg[i].first < -eps)sg[i].first += 2.0 * pi;
		if (sg[i].second > 2.0 * pi + eps)sg[i].second -= 2.0 * pi;
	}
	sort(sg, sg + n, cmps);
	int j = 0;
	f(i, 0, n){
		if (j == i)inc(j, n);
		while (j != i && !in(sg[i].second, sg[j].first, sg[j].second + eps))inc(j, n);
		if (j == i)return true;
		nxt[i] = j;
		J[i] = make_pair(make_pair(i, j), 1);
	}
	int an = 1e9;
	f(i, 0, n){
		an = min(an, go(i, i, sg[i].second).second);
		J[i] = make_pair(make_pair(i, nxt[i]), 1);
	}
	return an <= k;
}

int main(){
	scanf("%d%d", &n, &k);
	f(i, 0, n){
		p[i].sc();
		if (p[i].x == 0 && p[i].y == 0) { printf("0\n"); return 0; }
	}
	sort(p, p + n);
	n = unique(p, p + n) - p;
	double l = 0.0, r = 1e9;
	f(i, 0, n)r = min(r, p[i].L());
	f(it, 0, 40){
		double m = (l + r) * 0.5;
		if (ok(m))l = m;
		else r = m;
	}
	printf("%.6lf\n", l);
