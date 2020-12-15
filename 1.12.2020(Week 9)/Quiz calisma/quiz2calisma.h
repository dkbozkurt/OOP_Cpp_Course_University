//Dogukan Kaan Bozkurt

#ifndef QUIZ2CALISMA_H
#define QUIZ2CALISMA_H

#include <iostream>
using namespace std;

class quiz2calisma
{
	
	friend ostream&operator<<(ostream &,const quiz2calisma&);	
	friend istream&operator>>(istream&,quiz2calisma&);
	
public:
	
	quiz2calisma(int size=4);	//size buradaki index sayisi yani max Array[3]
	quiz2calisma(const quiz2calisma& );
	~quiz2calisma();
	
	int getSize() const;
	
	quiz2calisma& operator*(void);	//.append() gibi calisir size i 1 büyütüp icine 0-9 arasi bir rakam atar, ama bas tarafina.
	quiz2calisma operator++(int); 	//.append() gibi calisir size i 1 büyütüp icine 0-9 arasi bir rakam atar.
	const quiz2calisma& operator=(const quiz2calisma&);
	bool operator==(const quiz2calisma& );
	
	
private:
	int size;
	int *ptr;
	
};

#endif
