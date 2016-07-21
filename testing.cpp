/*
 *	TODO	time différence
 *	TODO	heavy job
 *	TODO	hello world
 *	TODO	calculator
 *
 */


#include "testing.h"

#include <ctime>
#include <string>

float timediff(clock_t end, clock_t start) {
	float res;
	res = end - start;
	std::cout<< "Elapsed time : " << res << std::endl;
	return res;
}

void heavyjob() {
	//Will check if a very big prime number is prime.
	return NULL;
}

void helloworld(string name="world"){
	std::cout<< "hello " << name << std::endl;
	return NULL;
}

void calculator(string operation){
	return NULL;
}
