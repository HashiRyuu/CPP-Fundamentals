/**
    @file worker_polymorphism.cpp
*/
#include <string>
#include <stdexcept>
#include <iomanip>
#include <sstream>
using namespace std;

#include "worker_polymorphism.h"


Worker::Worker(const std::string& name, double hourlyRate) : m_name(name), m_rate(hourlyRate) {}

std::string HourlyWorker::payInfo(int hours) const {
        double totalPay = 0;
        if (hours <= 40) {
            totalPay = hours * getRate();
        } else {
            totalPay = 40 * getRate() + (hours - 40) * getRate() * 1.5;
        }
        std::ostringstream oss;
        oss << std::fixed << getName() << "(Hourly, $ " << std::setprecision(2) << getRate() << ") worked "
        << hours << " hours. Pay: $ " << std::setprecision(2) << totalPay;
        return oss.str();
    }


std::string SalariedWorker::payInfo(int hours) const {
        double totalPay = 40 * getRate();
        std::ostringstream oss;
        oss << std::fixed << getName() << "(Salaried, $ " << std::setprecision(2) << getRate() << ") worked "
        << hours << " hours. Pay: $ " << std::setprecision(2) << totalPay;
        return oss.str();
    }

HourlyWorker::HourlyWorker(const std::string& name, double rate) : Worker(name, rate){}

SalariedWorker::SalariedWorker(const std::string& name, double rate) : Worker(name, rate){}

double Worker::getRate() const {
    return m_rate;
}

std::string Worker::getName() const {
    return m_name;
}
