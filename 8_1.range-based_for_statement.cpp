/***************
 * filename:
 * date    :
 * author  :
 * function: range-based for statement
 * ***************/
#include <iostream>
#include <vector>

using namespace std;


template <typename T>
void printElements(const T& coll)
{
	for(const auto& elem : coll)
	{
		cout<<elem<<endl;
	}
}

int main(int argc,const char*argv[])
{    
	/**
	 * for( decl : coll )
	 * {    
	 *     statement
	 * }
	 */
	for(int i : {2,3,5,7,9,13,17,19} )
	{    
		cout<< i <<endl; 
	}

	vector <double> vec;
	vec.push_back(1.1);
	vec.push_back(1.2);
	vec.push_back(1.3);

	for(auto elem :vec )
	{    
		cout<<elem<<endl;
	}
	for(auto & elem: vec)
	{    
		elem *= 3;
	}

	printElements(vec);

	return 0;
}
