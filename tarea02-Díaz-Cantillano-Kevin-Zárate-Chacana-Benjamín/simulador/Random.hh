#pragma once

#include <random>
#include <sstream>
#include <fstream>

struct Random
{

	// Variable exponencial de parámetro L=1.0/rate
	//  * https://en.cppreference.com/w/cpp/numeric/random/exponential_distribution
	//  * https://en.wikipedia.org/wiki/Exponential_distribution
	static double exponential(double rate);

	static double normal(double mean, double std);

	// Variable normal truncada
	static double normal_truncated(double mu, double sigma, double lower_bound, double upper_bound);
	// Ejemplo de uso:
	// double tBetweenArrivals = RandomUtils::normal_truncated(5, 2, 0, 15);

	static double uniform(double min, double max);
	static int integer(int32_t min, int32_t max);
	static double logNormal(double mean, double std);
	static double rayleigh(double sd);

	static void test(uint32_t totalPoints, const std::string &pathFileOut, bool exitAtFinish = true);
};
