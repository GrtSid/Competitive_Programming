#include<bits/stdc++.h>
using namespace std;
class student
{
protected:
  int roll_number;
public:
  void get_num(int a)
  {
    roll_number=a;
  }
  void put_num()
  {
    cout<<"Roll No: "<<roll_number<<endl;
  }
};
class test:virtual public student
{
protected:
  float part1,part2;
public:
  void get_marks(float x,float y)
  {
    part1=x;
    part2=y;
  }
  void put_marks()
  {
    cout<<"Part 1: "<<part1<<endl
        <<"Part 2: "<<part2<<endl;
  }
};
class sport: public virtual student
{
protected:
  float score;
public:
  void get_score(float s)
  {
    score=s;
  }
  void put_score()
  {
    cout<<"Sports wt. "<<score<<endl;
  }
};
class result:public test,public sport
{
  float total;
public:
  void display(void);
};
void result::display(void)
{
  total=part1+part2+score;
  put_num();
  put_marks();
  put_score();
  cout<<"Total: "<<total<<endl;
}
int main()
{
  result student1;
  student1.get_num(678);
  student1.get_marks(30.5,25.5);
  student1.get_score(7.0);
  student1.display();
  return 0;
}
