#include <iostream.h>
#include<conio.h>
char matrix[3][3]={'1','2','3','4','5','6','7','8','9'};
char player='X';
int x=0;
void board()
{
cout<<'\t'<<"    "<<"Tic Tac Toe"<<endl;
cout<<"Player1:X       vs        Player2:O"<<endl;
cout<<"        "<<"     |     |     "<<endl;
cout<<"        "<<"  " <<matrix[0][0]<<"  |  "<<matrix[0][1]<< "  |  "<<matrix[0][2]<<endl;
cout<<"        "<<"_____|_____|_____"<<endl;
cout<<"        "<<"     |     |     "<<endl;
cout<<"        "<<"  " <<matrix[1][0]<<"  |  "<<matrix[1][1]<< "  |  "<<matrix[1][2]<<endl;
cout<<"        "<<"_____|_____|_____"<<endl;
cout<<"        "<<"     |     |     "<<endl;
cout<<"        "<<"  " <<matrix[2][0]<<"  |  "<<matrix[2][1]<< "  |  "<<matrix[2][2]<<endl;
cout<<"        "<<"     |     |     "<<endl<<endl;
}
void input()
{
int n;
cout<<"It's"<<" "<<player<<" "<<"turn"<<" "<<"Press a number displayed on the field:"<<endl;
cin>>n;
switch(n)
{
case 1:
if(matrix[0][0]=='1')
{
matrix[0][0]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 2:
if(matrix[0][1]=='2')
{
matrix[0][1]=player;
x++;
}
else
{
cout<<"Field is already ocuppied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 3:
if(matrix[0][2]=='3')
{
matrix[0][2]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 4:
if(matrix[1][0]=='4')
{
matrix[1][0]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 5:
if(matrix[1][1]=='5')
{
matrix[1][1]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 6:
if(matrix[1][2]=='6')
{
matrix[1][2]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 7:
if(matrix[2][0]=='7')
{
matrix[2][0]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 8:
if(matrix[2][1]=='8')
{
matrix[2][1]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
case 9:
if(matrix[2][2]=='9')
{
matrix[2][2]=player;
x++;
}
else
{
cout<<"Field is already occupied! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
}
break;
default:
cout<<"Invlaid! Please try again"<<endl;
if(player=='X')
player='O';
else
player='X';
break;
}
}
void toggleplayer()
{
if(player=='X')
player='O';
else
player='X';
}
int checkwin()
{
if(matrix[0][0]=='X'&&matrix[0][1]=='X'&&matrix[0][2]=='X')
return 'X';
if(matrix[1][0]=='X'&&matrix[1][1]=='X'&&matrix[1][2]=='X')
return 'X';
if(matrix[2][0]=='X'&&matrix[2][1]=='X'&&matrix[2][2]=='X')
return 'X';
if(matrix[0][0]=='X'&&matrix[1][0]=='X'&&matrix[2][0]=='X')
return 'X';
if(matrix[0][1]=='X'&&matrix[1][1]=='X'&&matrix[2][1]=='X')
return 'X';
if(matrix[0][2]=='X'&&matrix[1][2]=='X'&&matrix[2][2]=='X')
return 'X';
if(matrix[0][0]=='X'&&matrix[1][1]=='X'&&matrix[2][2]=='X')
return 'X';
if(matrix[2][0]=='X'&&matrix[1][1]=='X'&&matrix[0][2]=='X')
return 'X';
else
if(matrix[0][0]=='O'&& matrix[0][1]=='O'&&matrix[0][2]=='O')
return 'O';
if(matrix[1][0]=='O'&&matrix[1][1]=='O'&&matrix[1][2]=='O')
return 'O';
if(matrix[2][0]=='O'&&matrix[2][1]=='O'&&matrix[2][2]=='O')
return 'O';
if(matrix[0][0]=='O'&&matrix[1][0]=='O'&&matrix[2][0]=='O')
return 'O';
if(matrix[0][1]=='O'&&matrix[1][1]=='O'&&matrix[2][1]=='O')
return 'O';
if(matrix[0][2]=='O'&&matrix[1][2]=='O'&&matrix[2][2]=='O')
return 'O';
if(matrix[0][0]=='O'&&matrix[1][1]=='O'&&matrix[2][2]=='O')
return 'O';
if(matrix[2][0]=='O'&&matrix[1][1]=='O'&&matrix[0][2]=='O')
return 'O';
return 0;
}
void main()
{
while(1)
{
board();
input();
toggleplayer();
checkwin();
if(checkwin()=='X')
{
cout<<"X wins!"<<endl;
break;
}
else
if(checkwin()=='O')
{
cout<<"O wins!";
break;
}
else
if(checkwin()!='X'&&checkwin()!='O'&&x==9)
{
cout<<"It's a draw"<<endl;
break;
}
}
getch();
}