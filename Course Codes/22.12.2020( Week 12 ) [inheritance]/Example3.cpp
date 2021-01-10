//Dogukan Kaan Bozkurt

// !!!!!!!!!!!!!!!!NOT DONE YET!!!!!!!!!!!!!!!!

#include <iostream>

using namespace std;

class Screen 
{
	public:
		Screen(int=8,int=40,char=' ');
		~Screen(void);
		short height (void) const 
		{
			return this->height_;
		}
		short width(void) const
		{
			return this->width_;
		}
		void height (short h)
		{
			this->height_=h;
		}
		vpid width (short w)
		{
			this->width_=w;
		}
		Screen &forward (void);
		Screen &up (void);
		Screen &down (void);
		Screen &home (void);
		Screen &bottom (void);
		Screen &display (void);
		Screen &copy (const Screen &);
		
	private:
		short height_,width_;
		char *screen_,*cur_pos_;
};

class Window : public Screen
{
	public:
		Window(const Point &,int rows = 24,int columns=80, char default_char=' ');
		void set_foreground_color (Color &);
		void set_background_color (Color &);
		void resize(int height,int width);
		
	private:
		Point center_;
		Color foreground_;
		Color background_;
		
}
