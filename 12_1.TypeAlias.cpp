typedef void (*func)(int ,int);
//等价于
using func = void(*)(int ,int);


void example(int ,int)
{

}

int main(int argc, const char *argv[])
{
	//the name 'func' now denotes a pointer to function:
	func fn = example;
	return 0;
}

