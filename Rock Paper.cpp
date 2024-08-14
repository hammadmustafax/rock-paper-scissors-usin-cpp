#include<iostream>
#include<time.h>
using namespace std;
 int random_generator();
 int check_guess(int guess, int random_number);
 int main()
{
int choice,result,comp_choice;
do {
    

cout<<"\t\t\t"<<"Rock Paper Scissor Game"<<endl<<endl;
    
cout<<"Enter Your Choice (1 for Rock, 2 for Paper, 3 for Scissor): ";
cin>>choice;
    
 comp_choice=random_generator();
    
result=check_guess(choice,comp_choice);
}
   while(result!=0 && result!=1);
if(result==1)
    cout<<"You Won"<<endl;
else if (result==0)
    cout<<"Lost"<<endl;
cout<<"Choice of Computer was: "<<comp_choice<<endl;
}
int random_generator()
{
srand(time(0));
int random_number=rand()%3+1;
return random_number;
    
}

int check_guess(int guess, int random_number)

{
    if (random_number==1 && guess==2)
    {
    return 1;
    }
    else if (random_number==2 && guess==3){
        return 1;
    }
    else if ((random_number==3 && guess==1))
    {
        return 1;
    }
    else if ((random_number==1 && guess==3))
        {
            return 0;
        }
    else if ((random_number==2 && guess==1))
        {
            return 0;
        }
    else if ((random_number==3 && guess==2))
        {
            return 0;
        }
     
    else if ((random_number==3 && guess==1))
        {
            return 1;
        }
 else
        return -1;

}