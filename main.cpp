#include <iostream>
#include <ctime>
#include <chrono>
#include <thread>

int main() {
    while (true) {
        // Get current time
        std::time_t currentTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        
        // Convert current time to string
        char timeString[100];
        std::strftime(timeString, sizeof(timeString), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
        
        // Print current time
        std::cout << "Current time: " << timeString << std::endl;
        
        // Wait for one second
        std::this_thread::sleep_for(std::chrono::minutes(1));
    }
    
    return 0;
}
