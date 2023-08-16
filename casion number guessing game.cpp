#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
int number,guess;
int i;

cout<<"Welcome to the casino guessing game."<<endl;
cout<<"I'm thinking of a number between 1 to 50. Can you guess it?"<<endl;

do{
cout<<"Enter your guess:";
cin>> guess;
i++;
if(guess>10){
cout<<"Too high! Try again."<<endl;	
}else if(guess<1)
{
cout<<"Too low! Try again."<<endl;	
	}	else{
cout<<"congratulation! You guessed the number in"<<i<<"i."<<endl;	
	}
}while(guess!=50);


























		
return 0;
}
