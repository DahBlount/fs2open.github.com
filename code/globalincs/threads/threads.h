
#ifndef _GLOBAL_THREADS_H_
#define _GLOBAL_THREADS_H_

#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>

#include "globalincs\pstypes.h"

int Num_threads = 1;

typedef std::thread SCP_thread;
typedef std::mutex SCP_mutex;
typedef std::unique_lock<std::mutex> SCP_binary_semaphore;

typedef std::atomic<int> int_atomic;

SCP_vector<int> bounds(int threads, int elem);

#endif // !_GLOBAL_THREADS_H_
