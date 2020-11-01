/**
 * 什么时候 empty class  不再是 empty？当C++处理过它之后。
 * 是的，如果你自己没声明，编译器就会为它声明一个copy ctor、
 * 一个cpay assignment operatro 和一个dtor（都是所谓）synthesized
 * version。如果你没有声明如何ctor,编译器也会为你声明一个default ctor。
 * 所有这些函数都是public且inline。
 */
class Empth{};
int main(int argc, const char *argv[])
{
	
	return 0;
}
