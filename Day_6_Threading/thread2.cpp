// Mutex: Mutual Exclusion

// RACE CONDITION:
// 0. Race condition is a sitution where two or more threads/process happened to change a common data at the same time
// 1. If there is a race condition then we have to protect it and the protection section is called critical section.

// MUTEX:
// 0. Mutex is used to avoid race condition
// 1. We use lock(), and unlock() on mutex to avoid race condition


#include <iostream>
#include <chrono>
#include <thread>
#include <mutex>

using namespace std;

#include<iostream>

int myAmount = 0;

std::mutex m;

void addMoney()
{
    m.lock();
    ++myAmount;
    m.unlock();
}

int main()
{
    std::thread t1(addMoney);
    std::thread t2(addMoney);

    t1.join();
    t2.join();

    cout << myAmount << '\n';
    return 0;
}