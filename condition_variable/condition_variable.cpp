// condition_variable::wait_for example
#include <iostream>           // std::cout
#include <thread>             // std::thread
#include <chrono>             // std::chrono::seconds
#include <mutex>              // std::mutex, std::unique_lock
#include <condition_variable> // std::condition_variable, std::cv_status

std::condition_variable cv;

int value;

void read_value() 
{
    for(int i = 0; i < 10; i++)
    {
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));    
        value = i;
        std::cout << "value= " << value << '\n';
        cv.notify_one();
    }
}

int main ()
{

    std::thread th (read_value);

    std::mutex mtx;
    std::unique_lock<std::mutex> lck(mtx);
    cv.wait_for(lck, std::chrono::seconds(5), []{return value > 3; });
    std::cout << "wait for value= " << value << '\n';

    th.join();

    return 0;
}
