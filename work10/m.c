#include<stdio.h>
#include<time.h>
#define ROW 3
#define COL 3
void InitBoard(char board[][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++){
	int j=0;
		for(j=0;j<col;j++)
		{
			board[i][j]='  ';
		}
	}
}

void ShowBoard(char board[][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		printf("%c |%c |%c \n",board[i][0],board[i][1],board[i][2]);
	}
}
void playpeople(char board[][COL],int row,int col)
{
  while(1)
  {
	  int x=0;
	  int y=0;
	  printf(" please enter <x,y>");
	  scanf("%d %d",&x,&y);
	  if(x>=1&&x<=3&&y>=1&&y<=3)
	  {
		  if(board[x-1][y-1]='  ')
		  {
                board[x-1][y-1]='X';
				break;
		  }
		  else
			  printf("please try again");
	  }
  }
}
int GetRandom(int start,int end)
{
	return rand()%end+1;
}
int is_full(char board[][col],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++){
	int j=0;
		for(j=0;j<col;j++)
		{
			if(a[i][j])=='  ')
			{
				return 0;
			}
		}

	return 1;
}



char  JudgeBoard(char board[][COL],int row,int col)
{
	int i=0;
	for(i=0;i<row;i++)
	{
		if(a[i][0]==a[i][1]==a[i][2])
		{
			return a[i][0];
		}
		
	}
     for(i=0;i<col;i++)
	{
		if(a[0][i]==a[1][i]==a[2][i])
		{
			return a[0][i];
		}
		
	}
     if(a[0][0]==a[1][1]]==a[2][2])
	 {
    	return a[0][0];
	 }
     if(a[0][1]==a[1][1]==a[2][0])
	 {
    	return a[0][1];
      }
	 if(is_full(a))
	 {
	return 'E';
	 }
     else
     return '  ';
}

void playcomputer(char board[][COL],int row,int col)
{
	while(1)
	{
		int x=GetRandom(1,3);
		int y=GetRandom(1,3);

		  if(board[x-1][y-1]='  ')
		  {
                board[x-1][y-1]='O';
				break;
		  }
		}
	}




void game()
{
	char result='\0';
	char board=[ROW][COL];
	InitBoard(board,ROW,COL);
	ShowBoard(board,ROW,COL);
	srand((unsigned int )time(NULL));
	while(1){
		playpeople(board,ROW,COL);
		ShowBoard(board,ROW,COL);
		result=Judge(board,ROW,COL);
		if(result!='N')
		{
			break;
		}
		playcomputer(board,ROW,COL);
		ShowBoard(board,ROW,COL);
		result=Judge(board,ROW,COL);
		if(result!='N')
		{
		
		    break;
		}
	}
	switch(result)
	{
	case'X':
        printf("you is a winner!");
	    break;
	case'O':
		printf("computer win!");
		break;
	case'E':
		printf(" equal");
		break;
	default:
		printf("a bug");
		break;
	}
}



void ShowMenu()
{
	printf("********************************");
	printf("********************************");
	printf("******1.play   2.exit***********");
	printf("********************************");
	printf("********************************");
}
int main()
{
	int select=0;
	int flag=0;
	while(!flag)
	{
			ShowMenu();
			scanf("%d",&select);
			switch(select){
			case 1:
				game();
				break;
			case 2:
				printf("bye bye");
				flag=1;
				break;
			default:
				printf("please enter again");
				break;
			}
	}
return 0;
}

    