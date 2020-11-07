
/* final 用于类 */
struct Base1 final{};

struct Derived1:Base1 {};//error


/* final 用于函数 */
struct Base2 
{
	virtual void f() final;
};
struct Derived2:Base2 
{
	void f();//error
};
int main(int argc, const char *argv[])
{
	
	return 0;
}
