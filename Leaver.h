#pragma once
#include <iostream>
using namespace std;

#ifdef LEAVERDINAMIC_EXPORTS
#define DINAMICLIBRARY_API __declspec(dllexport)
#else
#define DINAMICLIBRARY_API __declspec(dllimport)
#endif
class DINAMICLIBRARY_API Leaver
{
public:
	string leave(string name);
};

