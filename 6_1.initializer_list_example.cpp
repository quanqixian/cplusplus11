/***************
 * filename:
 * date    :
 * author  :
 * function:
 * ***************/
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


using namespace std;

int main(int argc,const char*argv[])
{    

	vector<int> {2,5,7,13,69,83,50};
	vector<int> ({2,5,7,13,69,83,50});
	vector<int> v3;
	v3 = {2,5,7,13,69,83,50};
	v3.insert(v3.begin()+2,{0,1,2,3,4});

	for (auto i : v3)
	{    
		cout<<i<<" ";
	}
	cout<<endl;

	cout << max({string("Ace"), string("Stacy"), string("Sbarina"), string("Barkley") })<<endl;;
	cout << min({string("Ace"), string("Stacy"), string("Sbarina"), string("Barkley") })<<endl;;
	cout << max({54,16,48,5} )<<endl;;
	cout << min({54,16,48,5} )<<endl;;
	return 0;
}
