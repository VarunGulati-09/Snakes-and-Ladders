//firstly, including the header files
#include<iostream>
using namespace std;

void lines(int n, char c)   //function for drawing the lines so that each move can be seperated and also for decoration
{
    for(int i=0; i<n; i++)
    {
        cout<<c;
    }
}

void board()
{
    cout<<"\n\n";
    lines(60, '-');
        
    cout<<"\n\n\t\tBEWARE! SNAKES ARE AT THE POSITION\n";
    cout<<"\tFrom 99 to 26,\n\t89 to 67,\n\t73 to 12,\n\t66 to 24,\n\t35 to 7,\n\t27 to 8\n\n";
        
    lines(60,'-');
        
    cout<<"\n\n\t\tAHOY! LADDERS AT THE POSITION\n";
    cout<<"\tFrom 87 to 93,\n\t80 to 83,\n\t70 to 90,\n\t54 to 69,\n\t44 to 58,\n\t28 to 77,\n\t2 to 23\n\n";
        
    lines(60,'-');
}

void currentStatus(char nameA[], char nameB[], int pos1, int pos2)
{
    cout<<"\n\n";
    lines(60, '-');
    
    cout<<"\n\tGAME STATUS\n";
    
    cout<<"\t--> "<<nameA<<" is at the position "<<pos1<<endl;
    cout<<"\t--> "<<nameB<<" is at the position "<<pos2<<endl;
    
    lines(60,'-');
    cout<<"\n\n";
}	 	  	 	 	 	    	      	 	  	       	 	

int main()
{
    
    char p1_Name[30], p2_Name[30];   //Array for names of the players
    int p1_Posi = 0 , p2_Posi = 0;  //position of the players 
    
    cout<<"\t\tWELCOME TO THE SNAKE AND LADDER GAME\t\t"<<endl;
    lines(60, '-');
    
    //getting the names of the players
    cout<<"\nEnter the name of Player 1 : ";
    cin>>p1_Name;
    cout<<"\nEnter the name of Player 2 : ";
    cin>>p2_Name;
    cout<<"\n\n";
    lines(60, '-');
    
    //Since snake and ladder game is of only 100 boxs or the player has to reach step number 100 to win, using while loop till the player reaches bok nmber 100 i.e wins the game
    while(p1_Posi<=100 && p2_Posi<=100)
    {
        board();
        
        currentStatus(p1_Name, p2_Name, p1_Posi, p2_Posi);
        char ch;
        cout<<"Hey, "<<p1_Name<<" its your turn now"<<endl;
        cout<<"Press x to roll the die and play/continue the game"<<endl;
        cin>>ch;
        
        int lastPosi;
        
        lastPosi = p1_Posi;
        
    int dice;
    dice=(rand()%6)+1;
    cout<<"\nCongrats, you got "<<dice<<" on the dice!";
    p1_Posi+=dice;
    cout<<"Now you are at position "<<p1_Posi;
    //using the concept of "Snake and Ladder" using switch case 
    switch(p1_Posi)
        {	 	  	 	 	 	    	      	 	  	       	 	
        case 99:
            p1_Posi = 26;
            break;
        
         case 89:
            p1_Posi = 67;
            break;
            
         case 73:
            p1_Posi = 12;
            break;
            
         case 66:
            p1_Posi = 24;
            break;
            
         case 35:
            p1_Posi = 7;
            break;
            
         case 27:
            p1_Posi = 8;
            break;
            
         case 87:
            p1_Posi = 93;
            break;
        
         case 80:
            p1_Posi = 83;
            break;
        
         case 70:
            p1_Posi = 90;
            break;
        
         case 54:
            p1_Posi = 69;
            break;
        
         case 44:
            p1_Posi = 58;
            break;
        
         case 28:
            p1_Posi = 77;
            break;
        
         case 2:
            p1_Posi = 23;
            break;
        }	 	  	 	 	 	    	      	 	  	       	 	
        if(p1_Posi<lastPosi)
        {
            cout<<"\nOOPS! You found a snake! :/ .Now, you are at position "<<p1_Posi<<endl;
        }
        
        else if(p1_Posi>lastPosi+6)
        {
            cout<<"\nWOAH! You got a ladder! :D .Now, you are at position "<<p1_Posi<<endl;
        }
        
        cout<<"\nHey, "<<p2_Name<<" its your turn now"<<endl;
        cout<<"Press x to roll the die and play/continue"<<endl;
        cin>>ch;
        lastPosi = p2_Posi;
        
    
    dice=(rand()%6)+1;
    cout<<"\nCongrats, you got "<<dice<<" on the dice!";
    p2_Posi+=dice;
    cout<<"\nNow you are at position "<<p2_Posi;
    
    switch(p2_Posi)
        {
        case 99:
            p2_Posi = 26;
            break;
        
         case 89:
            p2_Posi = 67;
            break;
            
         case 73:
            p2_Posi = 12;
            break;
            
         case 66:
            p2_Posi = 24;
            break;
            
         case 35:
            p2_Posi = 7;
            break;
            
         case 27:
            p2_Posi = 8;
            break;
            
         case 87:
            p2_Posi = 93;
            break;
        
         case 80:
            p2_Posi = 83;
            break;
        
         case 70:
            p2_Posi = 90;
            break;
        
         case 54:
            p2_Posi = 69;
            break;
        
         case 44:
            p2_Posi = 58;
            break;
        
         case 28:
            p2_Posi = 77;
            break;
        
         case 2:
            p2_Posi = 23;
            break;
        }	 	  	 	 	 	    	      	 	  	       	 	
        if(p2_Posi<lastPosi)
        {
            cout<<"\nOOPS! You found a snake! .Now, you are at position \n"<<p2_Posi<<endl;
        }
        
        else if(p2_Posi>lastPosi+6)
        {
            cout<<"\nWOAH! You got a ladder! .Now, you are at position \n"<<p2_Posi<<endl;
        }
        
        
    }
    
    cout<<"\n\n";
    lines(60,'-');
    cout<<"\n\t\tRESULT";
    lines(60,'-');
    currentStatus(p1_Name,p2_Name,p1_Posi,p2_Posi);
    cout<<"\n\n";
    
    if(p1_Posi>=p2_Posi)
    {
        cout<<"Congratulations!! "<<p1_Name<<", you are the WINNER of this game!";
    }
    
    else
    {
        cout<<"Congratulations!! "<<p2_Name<<", you are the WINNER of this game!";
    }
    
    lines(60,'-');
    
    return 0;
    

}	 	  	 	 	 	    	      	 	  	       	 	