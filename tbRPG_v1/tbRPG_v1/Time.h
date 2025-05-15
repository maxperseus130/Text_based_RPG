#pragma once

#include <thread>
#include <chrono>

#define SLEEP std::this_thread::sleep_for
#define MS_PER_FRAME 16ms

using namespace std::literals;

auto getCurrentTime()
{
    return std::chrono::steady_clock::now().time_since_epoch();
}