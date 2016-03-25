#ifndef EXACT_COVER_LIB_H
#define EXACT_COVER_LIB_H

#include <vector>

class Head;

class nonZeroPosition
{
public:
	int row;
	int column;
	bool operator < (const nonZeroPosition& element2);
};

class ExactCover
{
private:
	Head* ptr_head;
public:
	ExactCover(const int matrix[], int m, int n);
	ExactCover(const std::vector<int> &matric, int m, int n);
	ExactCover(std::vector<nonZeroPosition> &matric, int m, int n);
	~ExactCover();

	int solve(std::vector<int> &res);
};

#endif
