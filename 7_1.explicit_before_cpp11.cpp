/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/

struct Complex
{    
	int real,imag;

	explicit Complex(int re, int im=0):real(re),imag(im)
	{    

	}
	Complex operator+(const Complex&x )
	{    
		return Complex((real+x.real), (imag+x.imag));
	}
};
int main(int argc,const char*argv[])
{    

	/**
	 * before c++2.0, explicit for ctors taking one argument
	 */
	Complex c1(12, 5);
	//Complex c2 =c1 +5;  //Error: no match for ‘operator+’ (operand types are ‘Complex’ and ‘int’)

	return 0;
}
