struct NoCopy
{    
	NoCopy() = default;                         //use the synthesized defalut constructor
	NoCopy(const NoCopy&) = delete;             /* no copy */
	NoCopy &operator=(const NoCopy&) = delete;  /* no assignment */
	~NoCopy() = default;                        //use the synthesized destructor
};

struct NoDtor
{
	NoDtor() = default;  
	/* =delete 告诉编译器不要定义它，必须出现在声明式。用于任何成员函数，若用于dtor后果自负*/
	~NoDtor() = delete;//we can't destory objects of type NoDtor*
};

/**
 * 此class 不允许被ordinary user code copy，但仍可以被friends 和members copy，若想完全禁止，
 * 不但必须把copy controls放到private 内且不可定义
 */
class PrivateCopy
{
private:
	PrivateCopy(const PrivateCopy&);
	PrivateCopy& operator = (const PrivateCopy&);
public:
	PrivateCopy() = default;
	~PrivateCopy();
};
int main(int argc, const char *argv[])
{
	//NoDtor nd;                //error :NoDtor destructor is deleted	
	NoDtor *p = new NoDtor();   //ok.but can't delete p
	//delete p;
	return 0;
}

