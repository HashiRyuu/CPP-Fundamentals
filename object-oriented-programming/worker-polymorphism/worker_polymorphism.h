/*
 *	@file worker_polymorphism.h
 */
#ifndef WORKER_POLYMORPHISM_H
#define WORKER_POLYMORPHISM_H

#include <string>

/////// Declare all of your classes here ////////////////
class Worker
{
	std::string m_name;
	double m_rate;
public:
	Worker(const std::string& name, double rate);
	virtual ~Worker() = default;
   // Remaining members here
	 double getRate() const;

 	 std::string getName() const;

	virtual std::string payInfo(int h) const = 0;
};

class HourlyWorker : public Worker
{
public:
	HourlyWorker(const std::string& name, double rate);
	std::string payInfo(int h) const override;
};


class SalariedWorker : public Worker
{
public:
	SalariedWorker(const std::string& name, double rate);
	std::string payInfo(int h) const override;
};


#endif
