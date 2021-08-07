/***************
 * filename:
 * date    :
 * author  :
 * function: 类的成员函数作为线程函数体
 * ***************/

#include <iostream>
#include <thread>
#include <unistd.h>

class Object
{
public:
    void start()
    {
        if(nullptr == m_thread)
        {
            m_thread = new std::thread(&Object::func, this);
        }
    }
private:
    void func()
    {
        while(1)
        {
            std::cout<<"m_num="<<m_num<<std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
private:
    std::thread *m_thread = nullptr;
    int m_num = 100;
};

int main(int argc, const char *argv[])
{
    Object obj;
    obj.start();

    while(1)
    {
        sleep(1);
    }
}
