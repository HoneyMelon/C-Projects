#include <iostream>
#include <iomanip>
#include <random>


int main() {
    uint64_t draws = 100000000;
    uint64_t in_circle = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<double> dis(0, 1.0);

    for (uint64_t i=0; i < draws; ++i) {
        double x = dis(gen);
        double y = dis(gen);

        if (x * x + y * y < 1) {
            ++in_circle;
        }

    }
    double pi = static_cast<double>(in_circle) / draws * 4;
    // double pi = 1.0 in_circle / draws * 4;       works too

    std::cout << std::setprecision(13) << pi << std::endl;
    return 0;
}

