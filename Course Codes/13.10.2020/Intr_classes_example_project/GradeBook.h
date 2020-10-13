// Bu dosyada sadece funclarin yer almasi yeterli.

#include<string>

using namespace std;

class GradeBook
{
public:
	
	///
	GradeBook(string);		//constructure
	
	void setCourseName(string);
	
	string getCourseName(void);
	
	void displayMessage(void);
	
private:
	
	string courseName;
	
};
