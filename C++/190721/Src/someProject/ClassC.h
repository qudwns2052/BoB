#pragma once
#include "ClassA.h"
#include "ClassB.h"


class ClassB
{
public:
	ClassB();
	~ClassB();

	void Func(ClassA* pArg);
};

