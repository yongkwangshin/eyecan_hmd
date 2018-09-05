#include "include/geomagnetic.h"
#include "include/myahrs_plus.hpp"

int main()
{
	initGeo();

	while(1){

	updateGeo();
	printf("yaw_main : %.2f \n",geo_yaw);

	}

}

