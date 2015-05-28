#ifndef tList_H
#define tList_H
template <class Type>

class list{
private:
	Type ar[100];
	int n;
public:
	list();
	Type getAr();
	void insert(int pos, Type val);
	void initialization_arrays();
	void retreive(int pos, Type & data);
	void print();
};

#endif