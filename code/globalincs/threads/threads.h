/*
 * Threads.h
 * Author: DahBlount
 * Date: Aug. 6, 2018
 *
 * This contains some helpers to make threading a fair bit easier
 *
**/
#ifndef _GLOBAL_THREADS_H_
#define _GLOBAL_THREADS_H_

#include <thread>
#include <mutex>
#include <condition_variable>
#include <atomic>

#include "globalincs\pstypes.h"

typedef std::atomic<int> int_atomic;

SCP_vector<int> bounds(int elem);

#endif // !_GLOBAL_THREADS_H_
