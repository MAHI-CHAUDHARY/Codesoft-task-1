//number guessing game
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
int main(){
cout<<"\n\t\t.........welcome to the number guessing game........\n"<<endl;
cout<<"\n\t\t--->>you will have to guess a number between 1 to 100.";
cout<<"\n\t\t--->>lets start playing"<<endl;

srand(time(0));
int randnumber=(rand()%100)+1;

cout<<"\n---you have 5 chances to guess the correct answer---\n";
int chanceleft = 5;
int playerinput;

for(int i=1; i<=5; i++)
{
	cout<<"\n enter the number:";
	cin>>playerinput;
	
	if(playerinput==randnumber)
	{
	cout<< "\ncongrats!!!you guessed the correct number\n";
	cout<<"\n thanks for playing";
	break;
		}
		else
		{
			if(playerinput>randnumber)
			{
				cout<<"\n""insert a smaller number. try again """<<endl;
				}
				else
				{
					cout<<"\n""[insert a larger number.try again]"""<<endl;
									}
		}
		chanceleft--;
		cout<<"\n(chances left to guess the number:"<<chanceleft<<")"<<endl;
		
		if (chanceleft==0)
		{
			
			cout<<"\n your chance has been finished\n"<<endl;
			cout<<"the random number was : "<<randnumber <<endl;
			cout<<"thanks for playing";
		}
}
cout<<"\n";
return 0;
}
