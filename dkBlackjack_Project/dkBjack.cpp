#include<iostream>
#include<math.h>
#include<ctime>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

#include "dkBjack.h"

using namespace std;

dkBjack::dkBjack(){		//componenets will be set in that function.

	setBet(0);
	setAr_user(0,0);
	setAr_pc(0,0);
	setpctotal(0);
	setusertotal(0);
	setu_money(0);
	setpc_money(0);	
	setcheck(0);
	setk(0);
}

void dkBjack::setBet(int a){
	bet=a;
}

void dkBjack::setAr_user(int c,int ii){
	ar_user[ii]=c;
}
void dkBjack::setAr_pc(int d,int jj){
	ar_pc[jj]=d;
}

void dkBjack::setusertotal(int f){
	usertotal+=f;
}

void dkBjack::setpctotal(int g){
	pctotal+=g;
}

void dkBjack::setu_money(int h){
	u_money=h;
}

void dkBjack::setpc_money(int l){
	pc_money=l;
}

void dkBjack::setcheck(int b){
	check=b;
}

void dkBjack::setk(int m){
	k+=m;
}
///


int dkBjack::getu_money(void){
	return u_money;
}

int dkBjack::getpc_money(void){
	return pc_money;
}

int dkBjack::getusertotal(void){
	return usertotal;
}

///

void dkBjack::START(void){
	
	int b_1;
	cout << "*************************************"<<endl
	<<"It is an BlackJack game..."<<endl<<"You should try to win against to PC!"
	<<"PC will take a new card/number for every round when you choose the \'get\' option. "
	<<endl<<"Enter the total budget for each player of the game..."<<endl;
	
	cin >> b_1;
	setu_money(b_1);
	setpc_money(b_1);
	
}

void dkBjack::betmenu(void){
	
	cout << "Enter the bet value for the round..." <<endl;
	int iBet;
	cin >> iBet;
	setBet(iBet);
	
}

void dkBjack::decision(void){
	
	string str;
	
	cout <<endl<<"Please text the option you would like to go for"
	<<endl<<"hit : Get a new card/number."<<endl
	<<"stick : Stop the game and compare the results..."<<endl;
	cin >> str;
	
	if (str=="hit"){
		hitfunction();
		
	}else if(str=="stick"){
		stickfunction();

	}else{
		cout << "Wrong decision try again "<<endl;
		decision();
	}
	
}

void dkBjack::hitfunction(void){ 
	
	if(check==1){
		setk(0);		
	}else{
		
	}
	
	int usercard;
	int pccard;
	int z=0;
	
	srand(time(NULL));
	usercard= rand()%10+1;
	pccard=rand()%10+1;
	
	setAr_user(usercard,k);
	setAr_pc(pccard,k);
	
	cout << "Your new card is : "<< ar_user[k]<<endl<<"PC\'s card is unknown"<< endl; 
	
	for(int i=0;i<k+1;i++){
		
		setusertotal(ar_user[i]);
		setpctotal(ar_pc[i]);
		
		if(usertotal==21){
			cout << "You won !!!" << endl;
			z=1;
			winner=0;
			
		}else if(pctotal==21){
			cout << "You lost the game, PC won !!!" <<endl;
			z=1;
			winner=1;
			
		}else if(usertotal>21){
			cout << "You lost the game, PC won !!!" <<endl;
			z=1;
			winner=1;
			
		}else if(pctotal>21){
			cout << "You won !!!" << endl;
			z=1;
			winner=0;
			
		}else{
			z=0;
				
		}			
	}
	
	setk(1);
	
	if(z==1){
		moneyf(winner);
	}
	else if(z!=1){
		decision();
	}
	
}

void dkBjack::stickfunction(void){
	
	if(usertotal > pctotal){
		cout << "You won !!!"<<endl;
		winner=0;
	}else if(pctotal > usertotal){
		cout << "You lost the game, PC won !!!"<<endl;
		winner=1;
	}else {
		cout << "DRAW !!!" << endl;
		winner=2;
	}	
}

void dkBjack::moneyf(int winner){
	
	if(winner==0){
		setu_money(u_money+bet);
		setpc_money(pc_money-bet);
		
	}else if(winner==1){
		setu_money(u_money-bet);
		setpc_money(pc_money+bet);
	}else{
		setu_money(u_money+(bet/2));
		setpc_money(pc_money+(bet/2));
	}
	
	cout << "You total money is : ..." <<getu_money() <<" $"<<endl
	<<"PC\'s total money is : ..."<< getpc_money()<<" $"<<endl; 
	
	if(u_money<=0){
		cout << "GAME OVER !!!" <<endl<< "You lost all of your money."
		<<endl<<"You lost the game, PC won !!!"<<endl;
		
	}else if(pc_money<=0){
		cout << "GAME OVER !!!" <<endl<< "PC lost all of its money."
		<<endl << "You won" <<endl;
		
	}else{
		betmenu();
		setcheck(1);
	}
}
