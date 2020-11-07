struct Base {
	virtual void vfunc(float) {}
};
struct Derived1:Base {
	virtual void vfunc(int){} //这里不小心写错了，但是编译器并不会给出错误，编译器认为是另一个函数
};

struct Derived2:Base {
	virtual void vfunc(int) override {} //error: ‘virtual void Derived2::vfunc(int)’ marked ‘override’, but does not override
};
int main(int argc, const char *argv[])
{
	
	return 0;
}
