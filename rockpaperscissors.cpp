#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

char  getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);



int main() {
	char player;
	char computer;
	char con;
	
	do{
	system("cls");
	
	player = getUserChoice();
	
	cout << "Your Choice: ";
	showChoice(player);
	
	computer = getComputerChoice();
	cout << "Computer choice: ";
	showChoice(computer);
	
	chooseWinner(player,computer);
	
	cout << "Do you wish to continue?: ";
	cin >> con;
	
	}while(con != 'n');
	
	return 0;
}

char  getUserChoice(){
	
	char player;
		
	do{
	cout << "--Rock-Paper-Scissors Game-- \n\n";
	cout << "r = Rock \n"; 
	cout << "p = Paper \n";
	cout << "s = Scissor \n";
	cin >> player;
	
	}while(player != 'p' && player != 'r' && player != 's');
	
	
	return player;
}

char getComputerChoice(){
	
	
	int num = rand() % 3 + 1;
	
		switch(num){
			case 1: return 'r';
			case 2: return 'p';
			case 3: return 's';
		}
	
	return 0;
}

void showChoice(char choice){
	
	switch(choice){
		case 'r': cout << "Rock \n";
			break;
		case 'p': cout << "Paper \n";
			break;
		case 's': cout << "Scissors \n";
			break;
	}
	
}

void chooseWinner(char player, char computer){
		
		switch(player){ 
		
			case 'r': if(computer == 'r'){
						cout << "It's a tie \n";
				}else if(computer == 'p'){
					cout << "You lose \n";
				}else{
					cout << "You win \n";
				}break;
			
			case 'p': if(computer == 'p'){
						cout << "It's a tie \n";
				}else if(computer == 's'){
					cout << "You lose \n";
				}else{
					cout << "You win \n";
				}break;
				
			case 's': if(computer == 's'){
						cout << "It's a tie \n";
				}else if(computer == 'r'){
					cout << "You lose \n";
				}else{
					cout << "You win \n";
				}break;
				
			
		}
}
