/*
 * run_all.cpp
 *
 * Created on: Feb 7, 2014
 * Author: matteomagnani
 * Version: 0.0.1
 */

#include "test.h"
#include <stdlib.h>

int main(int argn, char* argv[]) {

	testNetwork();
	testMultipleNetwork();
	//testIO();
	//testMeasures();
	//testModularity(); //Still testing this, but seems to work (it does for single networks)
	//testEvolution();
	//testRandom();
	//testTransformations();

	return EXIT_SUCCESS;
}


