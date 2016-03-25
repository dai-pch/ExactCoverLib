#include "stdafx.h"

bool nonZeroPosition::operator < (const nonZeroPosition& element2)
{
	return (row < element2.row) ? true : ((row > element2.row) ? false : (column < element2.column));
}

ExactCover::ExactCover(const int matrix[], int m, int n) 
{
	ptr_iExactCover = new Head(matrix, m, n);
}

ExactCover::ExactCover(const std::vector<int> &matric, int m, int n)
{
	ptr_iExactCover = new Head(matric, m, n);
}

ExactCover::ExactCover(std::vector<nonZeroPosition> &matric, int m, int n)
{
	ptr_iExactCover = new Head(matric, m, n);
}

ExactCover::~ExactCover()
{
	delete ptr_iExactCover;
}

int ExactCover::solve(std::vector<int> &res)
{
	return ptr_iExactCover->solve(res);
}
