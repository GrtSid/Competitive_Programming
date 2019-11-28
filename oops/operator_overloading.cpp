#include<iostream>
#define size 3
using namespace std;

class vector
{
	int d[size];
	public:
		vector(void);
		vector(int *);
		friend vector operator +(const vector &,const vector &);
		friend vector operator +(const vector &,int);
		friend vector operator +(int, const vector &);
		friend istream & operator >>(istream &,vector &);
		friend ostream & operator <<(ostream &,vector &);
};
vector::vector(void)
{
	for(int i=0;i<size;i++)
		d[i]=0;
}
vector::vector(int *a)
{
	for(int i=0;i<size;i++)
		d[i]=a[i];
}
vector operator +(const vector &m1,const vector &m2)
{
	int x[size];
	for(int i=0;i<size;i++)
		x[i]=m1.d[i]+m2.d[i];
	return vector(x);
}
vector operator +(const vector &m1,int b)
{
	int x[size];
	for(int i=0;i<size;i++)
		x[i]=m1.d[i]+b;
	return vector(x);
}
vector operator +(int b,const vector &m1)
{
	int x[size];
	for(int i=0;i<size;i++)
		x[i]=m1.d[i]+b;
	return vector(x);
}
istream & operator >> (istream &din,vector &m)
{
	for(int i=0;i<size;i++)
		din>>m.d[i];
	return din;
}
ostream & operator << (ostream &dout,vector &m)
{
	for(int i=0;i<size;i++)
		dout<<m.d[i]<<" ";
		dout<<endl;
	return dout;
}
int main()
{
	vector p;
	cout<<"Enter the array data for object p: "<<endl;
	cin>>p;
	cout<<"The data entered for p is: "<<endl;
	cout<<p;
	p=p+2;
	cout<<"The data in p after incrementing it by 2: "<<endl;
	cout<<p;
	return 0;
}
