#pragma once
#ifdef PROCESSDLL_EXPORTS
#define PROCESSDLL_API __declspec(dllexport)
#else
#define PROCESSDLL_API __declspec(dllimport)
#endif

class PROCESSDLL_API Processor {
public:
	int length(char word[]);
};