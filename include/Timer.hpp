#pragma once
#include<chrono>

class Timer {
    std::chrono::high_resolution_clock::time_point startTime;
    bool isRunning = false;
public:
    void Start() {
        startTime = std::chrono::high_resolution_clock::now();
        isRunning = true;
    }
    double ElapsedTimeMs() {
        if (!isRunning) {
            return 0.0;
        }

        auto endTime = std::chrono::high_resolution_clock::now();
        isRunning = false;
        return std::chrono::duration<double, std::milli>(endTime - startTime).count();
    }
};

