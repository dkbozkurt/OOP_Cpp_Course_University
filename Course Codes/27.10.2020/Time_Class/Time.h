#ifndef TIME_H	//preprocessor wrapper
#define TIME_H	//preprocessor wrapper

class Time
{
	public:
		Time();	//Constructor
		void setTime(int,int,int);	//Set hour,min and sec.
		void printUniversal(void);	//Print time universal format
		void printStandard(void);	//Print time standard format
		
	private:
		
		int hour;		//0-23
		// !!! header de herahangi bir deger atamasi yaparsak hata verir. KESINLIKLE PRIV YADA PUBLIC ICIN ATAMA YAPILMAZ.
		int minute;		//0-59
		int second;		//0-59
};

#endif	//preprocessor wrapper
