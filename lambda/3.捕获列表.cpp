int main(int argc, const char *argv[])
{
	int a = 10; 
	int b = 20;

	//auto f1 = [] {return a;};
	auto f2 = [&]{return a + b;};
	auto f3 = [=]{return a;};
	//auto f4 = [=] {return a++;}; //错误，使用值拷贝的方式捕获外部变量，可读不能写
	//auto f5 = [a]{return a + b;};
	auto f6 = [a, &b]{return a + (b++);};
	auto f7 = [=, &b]{return a + (b++);};

	return 0;
}
