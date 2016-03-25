#ifndef HEAD_H
#define HEAD_H

class Head :public Node, implements iExactCover
{
private:
	int __totalColumn;

	//creat HeadofColumn object and add it into link, return the total number of column after add
	int _CreatColumnHead();
	//creat Unit object and add it into link, (column, row) are its position, return 0
	int _CreatUnit(int row, int column);

	int _FindMinColumn(HeadofColumn* &minHead);

public:
//	Head();
	Head(const int matrix[],int m, int n);
	Head(const std::vector<int> &matric, int m, int n);
	Head(std::vector<nonZeroPosition> &matric, int m, int n);
	~Head();

	int solve(std::vector<int> &res);

//	friend int SolveExactCover(Head &head, std::vector<int> &res);
//	friend int FindMinColumn(Head &head, HeadofColumn* &minHead);
};

#endif
