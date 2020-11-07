void foo() noexcept;  //-->void foo() noexcept(true);
/**
 * declares that foo() won't throw. If an exception is not handled locally
 * inside foo(), thus, if foo() throws -- the program is terminated,calling
 * std::terminate(),which by defalut calls std:;abort().
 */

/**
 * you can even specify a condition under which a function throws no
 * exception.For example, for any type Type,the golbal swap() usually is defined 
 * as follows:
 */
void swap(Type& x, Type& y) noexcept(noexcept(x.swap(y)))
{
	x.swap(y);
}


