#include <iostream>  
#include <cstdlib>  
#include <ctime>
#include <windows.h> 
using namespace std;  
// this is the first project in c++ 
int main()  
{
// define two players 
string  player_one ;
string  player_two;
unsigned x = time(0);
srand(x);
int roll_1=rand()%20+1; // for the first player 
int roll_2=rand()%20+1; // for the second player
cout<<" Please Enter Your Name :"<<" Player One  \n";
cin>>player_one;
cout<<" Please Enter Your Name :"<<" Player Two  \n";
cin>>player_two;
 // Get the console handle to change text color
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
// frist  dice roll for Player one 
if(roll_1==1)
{
 string roll_one = "Critical Failure";
 SetConsoleTextAttribute(screen, 12);  // Red for failure
 cout<<" the roll for the first player is : " <<roll_one<<"\n";
}else if ((roll_1 !=1)&& (roll_1 !=20)){

cout<<" the roll for the first player is :\n ";

}else if (roll_1==20){
   string roll_one = "Critical Success";
 SetConsoleTextAttribute(screen, 10);  // Green for success
 cout<<" the roll for the first player is : " <<roll_one<<"\n"; 
}// here we covered all statuses for player
 
// second  dice roll for second player 
if(roll_2==1)
{
 string roll_two = "Critical Failure";
 SetConsoleTextAttribute(screen, 12);  // Red for failure
 cout<<" the roll for the first player is : " <<roll_two<<"\n";
}else if ((roll_2 !=1)&&(roll_2 !=20)){
  SetConsoleTextAttribute(screen, 7);  // Default color
cout<<" the roll for the second player is :\n ";

}else if (roll_2==20){
   string roll_two = "Critical Success";
    SetConsoleTextAttribute(screen, 10);  // Green for success
 cout<<" the roll for the second player is : " <<roll_two<<"\n"; 
}// here we covered all statuses for player
    SetConsoleTextAttribute(screen, 7);  //  to make the output defult color 
// now we will compare between first player and the second player then see who wins or if  they are even . 
if(roll_1>roll_2){
cout<<"The player he is win : "<< player_one << " his score is : "<<roll_1<< " and"<< player_two<<" his score : "<<roll_2<<"\n"; 
}else if (roll_2>roll_1){
cout<<"The player he is win : "<< player_two << " his score is : "<<roll_2<< " and  "<<player_one<<" his score : "<<roll_1<<"\n";     
}else if(roll_1==roll_2){
cout <<" The Player   "<< player_one << " and  The player "<<player_two<< " are even \n";
cout<<" The score is :  " <<" ("<<roll_1<<" : "<<roll_2<<")"<<"\n";

}
   return 0;  
}