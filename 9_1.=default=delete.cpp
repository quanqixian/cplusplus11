/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
/**
 * 如果你自行定义了一共ctor，那么编译器就不会再给你一个default ctor。
 *
 * c++2.0中，如果你强制加上=default,就可以重新获得并使用default ctor。
 */

class Zoo
{    
public:
	Zoo(int i1,int i2):d1(i1),d2(i2) {}
	Zoo(const Zoo&)=delete;
	Zoo(Zoo&&)=default;/* 右值引用 */
	Zoo& operator=(const Zoo&)=default;
	Zoo& operator=(const Zoo&&)=delete;
	virtual ~Zoo(){}
private:
	int d1,d2;
};

int main(int argc,const char*argv[])
{    

	return 0;
}
