#ifndef CRANDOM_H
#define CRANDOM_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

class CRandom{
public:
	CRandom();
	int mRandom;	//乱数
	int mRan1;		//得られる値
	void Update();
};



#endif