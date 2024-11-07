/* rock,paper,scissors,lizard,spock
(big bang theory)*/
#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){
  srand(time(NULL));

  int computer=rand()% 3 + 1;
  int user = 0;

cout<<"===================="<<endl;
cout<<"rock paper scissors! "<<endl;
cout<<"===================="<<endl;

cout<<"1) rock"<<endl;
cout<<"2) paper"<<endl;
cout<<"3) scissors"<<endl;

cout << " shoot! "<<endl;
cin>> user;



string choices[3] = {"rock","paper","scissors"};
 cout << "You chose: " << choices[user - 1] << endl;
 cout << "Computer chose: " << choices[computer - 1] << endl;

 if (user == computer) {
        cout << "It's a tie!" << endl;
    }
    else if   ((user == 1 && computer == 3) || // Rock crushes Scissors
               (user == 2 && computer == 1) || // Paper covers Rock
               (user == 3 && computer == 2))
    {
        cout << "You win!" << endl;
    }
    else {
        cout << "Computer wins!" << endl;
    }
    return 0;
}

