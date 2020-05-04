/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
#include <vector>
#include <string>
#include <list>
#include <iostream>
#include <algorithm>

using namespace std;
double f()
{    
	return 3.14;
}

int main(int argc,const char*argv[])
{    
	/**
	 * With C++11,you can declare a variable or an object without specifying its specific tyoe by using atuo.
	 * For example:
	 **/
	auto i = 42;//i has tyoe int 
	auto d = f(); //d has type double 

	/**
	 * Using auto is especially useful where the type is a pretty long and/or
	 * complicated expression.For example:
	 */
	vector<string> v;
	//...
	auto pos = v.begin();  //pos has type vector<string>::iterator

	//other example
	list<string> c;
	c.push_back(string("a"));
	c.push_back(string("b"));
	string target = "a";
	
	list<string>::iterator ite;
	ite = find(c.begin(), c.end(), target);
	cout<<*ite<<endl;

	auto it=find(c.begin(), c.end(), target);
	cout<<*it<<endl;

	return 0;
}
