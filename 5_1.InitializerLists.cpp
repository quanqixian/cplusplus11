/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
#include <iostream>
#include <vector>

int main(int argc,const char*argv[])
{    
	/**
	 * An initializer list forces so-called value initialization,which means
	 * that even local variables of fundamental data types,which usually have an
	 * undefined initial value, are initialized by zero(or nullptr,if it is a
	 * pointer):
	 */
	int i;  //i has undefined value
	int j{};//j is initialized by 0
	int *p; //p has undefined value
	int *q{};//q is initialized by nullptr

	/**
	 * Note,however,that narrowing initializations--those that reduce precision
	 * or where the supplied value gets modified--are not possible with
	 * braces,For example:
	 */
	int x1(5.3);   //OK, but OUCH:x1 becomes 5
	int x2 =5.3;   //OK,but OUCH:x2 becomes 5
	int x3{5.0};   //ERROR:narrowing   ,in gcc those are [warning] narrowing conversion
	int x4 = {5.3};//ERROR:narrowing

	char c1{7};   //OK:even though 7 is an int, this is not narowing
	char c2{9999};//ERROR:narrowing (if 9999 doesn't fit into a char )
	std::vector<int> v1{1,2,4,5}; //OK
	std::vector<int> v2{1,2.3,4,5.6};//ERROR:narrowing

	return 0;
}
