/***************
 * filename:
 * date    :
 * author  :
 * function:
 * not     : 运行结果和课程中不一致，暂放
 * ***************/
#include <iostream>
#include <initializer_list>
using namespace std;

class P
{    
public:
	P(int a, int b)
	{    
		cout<<"P(int a, int b)"<<endl;
	}
	P(initializer_list<int>)
	{    
		cout<<"P(initializer_list<int>)"<<endl;
	}
	explicit P(int a,int b,int c)
	{    
		cout<<"explicit P(int a,int b,int c)"<<endl;
	}
};
void fp(const P&)
{    

}
int main(int argc,const char*argv[])
{    

	P p1(77,5);
	P p2{77,5};
	P p3{77,5,42};
	P p4{77,5};
	P p5 = {77, 5, 42};
	P p6(77,5,42);

	fp({47,11});
	fp({47,11,3});
	fp(P{47,11});
	fp(P{47,11,3});

	P p11{77, 5, 42, 500};
	P p12{77, 5, 42, 500};
	P p13{10};
	return 0;
}
