#include "Ebook.h"



using namespace std;

Ebook::Ebook()
{
	
}

string Ebook::getfileName()
{
	return fileName;
}

void Ebook::setFileName(string FN)
{
	fileName = FN;
}

int Ebook::getSize()
{
	return MB;
}

void Ebook::setSize(int mb)
{
	MB = mb;
}

Ebook::~Ebook()
{

}