/**
 * template<typename T>
 * using Vec = std::vector<T,MyAlloc<T>>;  //standard vector using own allocator
 *                         ^         ^
 *                _________|_________|
 *                |
 * the term : Vec<int> coll;
 * is equivalent to
 *
 *     std::vector<int, MYAlloc<int> > coll;
 */

/**
 * 使用macro 无法达到相同效果
 *     #define Vec<T>       template<typenamepename T> std::vector<T,MyAlloc<T>>
 *     此时，  Vec<int> coll 等价于 template<typename int> std::vector<int,MyAlloc<int>>;
 *     这不是想要的！！
 * 使用typedef也无法达到相同效果
 *     因为typedef 是不接受参数的，我们至多写成这样：
 *     typedef std::vector<int,MyAlloc<int>> Vec; 
 *     这不是想要的！！ 
*/
int main(int argc, const char *argv[])
{
	
	return 0;
}
