#include<stdio.h>
#include<iostream>
#include<strings.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;
void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}
int main()

    ///Variable Declaration:

    ///len1= lenth of player 1 name.
    ///len2= lenth of player 2 name.
    ///x,y= input of co ordinate.
    ///ps1= Player 1 score.
    ///ps2= Player 2 score.
    ///bomb= Available bomb.
    ///ph1 = Heat count of player 1.
    ///ph2 = Heat count of player 2.

{
    int i,lenp1,lenp2,j,ship=1,x,y,k,s,ps1,ps2,bomb,ph1,ph2;
    char name[20]="Battleship",credit[50]="Project by Adit, Ruma & Mehedi",ch,tempstr[10];
    string p1,p2;
    char gridu[10][10],griduv[10][10];


    ///GAME NAME

        for(i=0;i<10;i++)
    {
        printf("\n");
    }

    for(i=0;i<30;i++)
    {
        printf(" ");
    }

    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
        delay(60);
    }
    printf("\n");

    for(i=0;i<30;i++)
    {
        printf(" ");
    }

    for(i=0;credit[i]!='\0';i++)
    {
        printf("%c",credit[i]);
        delay(60);
    }

    delay(1500);
    system("cls");

    ///Rules & Regulation!

        for(;;)
    {
        system("cls");

        for(i=0;i<10;i++)
            printf("\n");

        for(i=0;i<30;i++)
            printf(" ");
        printf("1.Play Battleship!\n");

        for(i=0;i<30;i++)
            printf(" ");
        printf("2.Rules\n");
        ch=getch();

        if(ch==49)
            break;

        if(ch==50)
        {
            system("cls");
            cout<< "Welcome to the game!"<<endl<<endl;
            cout<< "Please follow all the instruction while playing the game."<<endl<<endl;
            cout<< "You may place seven ship to the tiny sea."<< endl<<endl;
            cout<< "Don't waste your bomb because they are limited (upto 20)."<<endl<<endl;
            printf("\nWELL, Get ready for the war!\n");
            printf("Press ENTER to continue!");
            fflush(stdin);
            gets(tempstr);
            continue;
        }
    }
    system("cls");

    ///Player Registration

    for(i=0;i<10;i++)
    {
        printf("\n");
    }

    for(i=0;i<30;i++)
    {
        printf(" ");
    }
    cout<< "Player-1 register your name: ";
    getline(cin,p1);

        for(i=0;i<30;i++)
    {
        printf(" ");
    }
    cout<< "Player-2 register your name: ";
    getline(cin,p2);

    system("cls");
    lenp1=p1.size();
    lenp2=p2.size();


    cout<<endl;


    ///Input
    start:
        ps1=0;
        ps2=0;
        ph1=0;
        ph2=0;
for(k=1;k<=2;k++){

        ship=1;
    ///Grid Creating...
        for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {

            gridu[i][j]='.';
            griduv[i][j]='.';
        }
    }
    ///Instruction!
    if(k==2){
            for(i=0;i<lenp1;i++)
    {
        cout<<p1[i];
    }
    cout<< " this is your turn to place your Ship!"<<endl<<endl << "Please told ";
    for(i=0;i<=lenp2;i++)
    {
        cout<< p2[i];
    }
    cout << "to go away from the screen. He may take a cup of TEA! :D";
    delay(7777);
    system("cls");

    }
    else{
            for(i=0;i<lenp2;i++)
    {
        cout<<p2[i];
    }
    cout<< " this is your turn to place your Ship!"<<endl<<endl << "Please told ";
    for(i=0;i<=lenp1;i++)
    {
        cout<< p1[i];
    }
    cout << "to go away from the screen. He may take a cup of TEA! :D";
    delay(7777);

    system("cls");
    }

    ///ship placement

    for(s=1;s<=7;s++)
    {
        for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
        cout<< "Ship no. " << ship++ << " :" <<endl;
        cout<< "Enter X & Y coordinate: ";
        cin>> x >> y;
        if(x>9 || y>9)
        {
            system("cls");
            cout<< "Wrong Co-ordinate! :/ Place your ship again. :)"<<endl<<endl;
            ship--;
            s--;
        }
        else if(gridu[x][y]!='.')
        {
            system("cls");
            cout<< "You already placed a ship here! Try again. :)" << endl<< endl;
            ship--;
            s--;
        }
        else{
            gridu[x][y]='S';
            system("cls");
        }
    }
    if(k==1)
    {
        cout<<endl;
    for(i=0;i<lenp1;i++)
    {
        cout<<p1[i];
    }
    cout<< " Get ready for the battle!"<<endl;
    delay(2222);

    system("cls");
    }
    else{
        cout<<endl;
    for(i=0;i<lenp2;i++)
    {
        cout<<p2[i];
    }
    cout<< " Get ready for the battle!"<<endl;
    delay(2222);

    system("cls");
    }
    ///Bombing on the grid...
for(s=1,bomb=20;s<=20;s++){


    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",griduv[i][j]);
        printf("\n");
    }
    cout<< "Available bomb: ";
    cout<< bomb-- <<endl;
    cout<< "Enter the coordinate of your targeted ship: ";
    cin >> x >>y;
    if(gridu[x][y]=='H' || gridu[x][y]=='*'){
        system("cls");
        cout<<"You have already shot here! :/" <<endl;
        s--;
        bomb++;
    }
    else if(x>9 || y>9){
        system("cls");
        cout<< "Wrong coordinate! -_-" <<endl;
    }
    else if(gridu[x][y]=='S'){
        griduv[x][y]='H';
        gridu[x][y]='H';

        if(k==1){
            ps1++;
            if(ps1==7){
                ph1=s;
                system("cls");
                cout<< "All ships are drowned!!!"<<endl<<endl<<endl;
                break;
            }
        }
        else{
            ps2++;
            if(ps2==7){
                ph2=s;
                system("cls");
                cout<< "All ships are drowned!!!"<<endl<<endl<<endl;
                break;
            }
        }
        system("cls");
    }
    else{
        griduv[x][y]='*';
        gridu[x][y]='*';
        system("cls");
    }



}

}
    ///Resulting...
if(ps1==ps2)
{
    if(ph1==ph2)
    cout<<"Draw! :|"<<endl;
    else if (ph1>ph2)
    {
    cout<< "Congraculation! ";
    for(i=0;i<=lenp2;i++)
    {
        cout<< p2[i];
    }
    cout << ". You won the Battle!"<< endl<<endl<<endl;

    }
    else {
    cout<< "Congraculation! ";
    for(i=0;i<=lenp1;i++)
    {
        cout<< p1[i];
    }
    cout << ". You won the Battle!"<< endl<<endl<<endl;
    }
}
else if(ps1>ps2){
    cout<< "Congraculation! ";
    for(i=0;i<=lenp1;i++)
    {
        cout<< p1[i];
    }
    cout << ". You won the Battle!"<< endl<<endl<<endl;
}
else{
    cout<< "Congraculation! ";
    for(i=0;i<=lenp2;i++)
    {
        cout<< p2[i];
    }
    cout << ". You won the Battle!"<< endl<<endl<<endl;
}
    cout<< "Press 1 to play again or any key to exit."<<endl;
    ch=getch();
    if(ch=='1')
    {
        ps1=0;
        ps2=0;
        system("cls");
        goto start;
    }
    else
        return 0;

}


