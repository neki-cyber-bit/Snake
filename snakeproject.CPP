

	//setcolor(0);
      /*	while(1!=0)
	{
		c=getch();
		switch (c)
		{
			case 46:
			{
				ellipse(x,y-1,0,360,40,50);
				x=x;
				y=y-1;
			}
			case 47:
			{
				ellipse(x,y+1,0,360,40,50);
				x=x;
				y=y+1;
			}
			case 48:
			{
				ellipse(x+1,y,0,360,40,50);
				x=x+1;
				y=y;
			}
			case 49:
			{
				ellipse(x-1,y,0,360,40,50);
				x=x-1;
				y=y;
			}
		}
	}
	ellipse(x,y,0,360,40,50);
	putpixel(x,y,WHITE);*/

	//int a=1,b=1,c;
	//system("cls");
/*int up(int x,int y)
{
	int j,c;
	bot:
	c=getch();
	if(c==72)
	{
		for(j=4;;j+=4)
		{
			cleardevice();
			circle(x,y,4);
			delay(500);
			if(kbhit()!=0)
			{
				goto bot;
			}
			y=y-4;
		}
	}

	return x,y;
}*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<process.h>
#include<graphics.h>
#include<dos.h>
#include<time.h>
int main()
{
    int gd,gm;
    gd=DETECT;
	int x,y,i,j,k,l,m=5;
	char c;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	x=150;
	y=300;
	printf("%d\n%d\n",x,y);
	for(i=4;;i+=4)
	{
		cleardevice();
		while(m!=0)
		{
			srand(time(NULL));
			k=(rand()%(100-5))+5;
			l=(rand()%(100-5))+5;
			if(k>5&&l>5,k%2==0,l%2==0)
			{
				m=0;
				//printf("k=%d\nl=%d\n",k,l);
			}
		}
		//fruit
					ellipse(k,l,0,360,4,4);
					//setfillstyle(SOLID_FILL,WHITE);
					//fillellipse(k,l,4,4);
					//snake
	   if(kbhit()!=0)
	   {
			bot:
			c=getch();
		   	if(c==72&&c!=80)
			{
			  	for(j=4;;j+=4)
				{
					cleardevice();
					//fruit
					ellipse(k,l,0,360,4,4);
					//setfillstyle(SOLID_FILL,WHITE);
					//fillellipse(k,l,4,4);
					//snake
					y=y-4;
					circle(x,y,4);
					delay(250);
					if(kbhit()!=0)
					{
						goto bot;
					}
				}	
			}
			//sot:
			if(c==80&&c!=72)
			{
			  	for(j=4;;j+=4)
				{
					cleardevice();
					//x=x;
					//fruit
					ellipse(k,l,0,360,4,4);
					//setfillstyle(SOLID_FILL,WHITE);
					//fillellipse(k,l,4,4);
					//snake
					y=y+4;
					circle(x,y,4);
					delay(250);
					if(kbhit()!=0)
					goto bot;
				}		
			}
			if(c==77&&c!=75)
			{
			  	for(j=4;;j+=4)
			  	{
			  		cleardevice();
			  		//fruit
					ellipse(k,l,0,360,4,4);
					//setfillstyle(SOLID_FILL,WHITE);
					//fillellipse(k,l,4,4);
					//snake
					y=y;
					x=x+4;
			  		circle(x,y,4);
					delay(250);
					if(kbhit()!=0)
					goto bot;
				}
			}
			if(c==75&&c!=77)
			{
				for(j=4;;j+=4)
				{
					cleardevice();
					//fruit
					ellipse(k,l,0,360,4,4);
					//setfillstyle(SOLID_FILL,WHITE);
					//fillellipse(k,l,4,4);
					//snake
					x=x-4;
					circle(x,y,4);
					delay(250);
					if(kbhit()!=0)
					goto bot;
				}	
			}
			if(k==x+1&&l==y+1||k==x+1&&l==y-1||k==x-1&&l==y+1||k==x-1&&l==y+1||k==x+1&&y==l||k==x+1&&y==l)
			{
				m=5;
				printf("x=%d\ny=%d",k,l);
			}
			if(k==x+2&&l==y+2||k==x+2&&l==y-2||k==x-2&&l==y+2||k==x-2&&l==y-2||k==x+2&&y==l||k==x+2&&y==l)
			{
				m=5;
				printf("x=%d\ny=%d",k,l);
			}
			if(k==x+2&&l==y+1||k==x+2&&l==y-1||k==x-1&&l==y+1||k==x-1&&l==y-1||k==x&&y==l||y==y+3&&k==x||y==y+3&&x==k)
			{
				m=5;
				printf("x=%d\ny=%d",k,l);
			}
			if(k==x+3&&l==y+3||k==x+3&&l==y-3||k==x-3&&l==y+3||k==x-3&&l==y-3||k==x+3&&y==l||k==x+3&&y==l)
			{
				m=5;
				printf("x=%d\ny=%d",k,l);
			}
			if(c==27)
			goto top;
		}
		
		circle(x,y,4);
		delay(250);	
	}
	top:
	getch();
	closegraph();
}

