//type alias can introduce a member typedef name 
template <typename T>
struct Container {
	using value_type = T; //typedef T value_type
};
//which can be used in generic programming 
template<typename Cntr>
void fn2(const Cntr & c)
{
	typename Cntr::value_type n;
}
int main(int argc, const char *argv[])
{
	
	return 0;
}
