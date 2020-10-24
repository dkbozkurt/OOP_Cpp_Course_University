#ifndef DKBJACK_H
#define DKBJACK_H

/*! \mainpage Blackjack Game
*
* \section intro_sec Introduction
*
* The name of the project is dkBjack. Purpose of the project is to determine a
*maximum budget and bet value for both sides (PC and user). Depends on the random
*cards who is closer to number 21 will be the winner in this game however if the total
*value of the card s is greater than 21 for either pc or user will lose the game. 
*
* \subsection dkBjack function;
*is our constructor function that sets 0 as a default value for the inputs. 
*
* \subsection step1 set... functions;
*functions are using for setting the private input z values.
*
* \subsection step2 get... functions;
*functions helps us to call private input values.
*
* \subsection step3 START function;
* function is giving information about the program and getting value for the budget private input.
*
* \subsection step4 betmenu function;
*function is getting the bet value for the game.
*
* \subsection step5 decision function;
*function is deciding which method will be used in the following step either hit or stick.
*
*\subsection step6 hitfunction function; 
*function is giving a new card for both user and pc. Then calculating the
*total value of cards and checking if someone get 21 score or greater than that. Depends on the
*result it decides the loser.
*
*\subsection step7 stickfunction function; 
* function works when user decided to get results of the round, function
*checks the total card values and who is closer to 21 score will win.
*
*\subsection step8 moneyf function;
*function is calculating the budgets and giving the bet value to who deserved.
*

*/
/* The main purpose of this project is to use classes and objects in C++ by creating our
*own project. In this project, I focused on the steps for creating the class interface, class
*implementation, and driver program. I tried to program the popular Blackjack game in this
*project. */

class dkBjack
{
public:
	dkBjack();		//constructure
	
	void setBet(int);
	void setAr_user(int,int);
	void setAr_pc(int,int);
	void setusertotal(int);
	void setpctotal(int);
	void setu_money(int);
	void setpc_money(int);
	void setcheck(int);
	void setk(int);
		
	int getu_money(void);
	int getpc_money(void);
	int getusertotal(void);
	
	void START(void);
	void betmenu(void);
	void decision(void);	//getorstop
	void hitfunction(void);		// arraye atma funct.
	void stickfunction(void);	//toplama
	void moneyf(int);	//winner	
	
private:
	
	int bet;
	int usertotal;
	int pctotal;
	int ar_user[];
	int ar_pc[];
	int u_money;
	int pc_money;
	int winner;
	int check;
	int k;
};

#endif
