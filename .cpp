
#include "stdafx.h"
# include<stdio.h>
# include<windows.h>
# include<windows.h>
# include<stdio.h>
# include<fstream.h>
# include<ctype.h>
# include<time.h>

class blackground
{
private:
    int x;
    int y;
    int m;
	int n;
    WORD w;
public:
blackground::blackground(int x0,int y0,int m0,int n0,WORD w0);   //重载blackground()
    display1();
    display2();
    display3();
    display4();
    display5();
    display6();
	display8();
};
blackground::blackground(int x0,int y0,int m0,int n0,WORD w0)
   	{		 m=m0;
			 n=n0;
			 y=y0;
			 x=x0;
			 w=w0;

             SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),w);
			 COORD pos;
			 pos.X=x+m;
			 pos.Y=y+n;
			 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}
blackground::display1()
	{	   
	         printf(" ");
	}
blackground::display2()
	{	   
	         printf("兔");
	}
blackground::display3()
	{	   
	         printf("羊");
	}
blackground::display4()
	{	   
	         printf("鹰");
	}
blackground::display5()
	{	   
	         printf("狼");
	}
blackground::display6()
	{	   
	         printf("草");
	}
blackground::display8()
	{	   
	         printf("*");
	}

///////////定义羊//////////////
class sheep
{
private:
    int a;                        //  数目
    float b;                       //  捕食率
    float c;                       //  增长率
	float d;                       //  死亡率
    int s;                         //  寿命
	int n;
public:
	sheep::sheep1(int a0,float b0,float c0,float d0,int s0);   //重载blackground()
int num()
	{  n=a*(c-d+1);  
	   return n;
	}
	
};

sheep::sheep1(int a0,float b0,float c0,float d0,int s0)
   	{		 a= a0;
			 b= b0;
			 c= c0;
			 d= d0;
			 s= s0;
	}

class wolf
{
private:
    int a;                        //  数目
    float b2;     float b3;        //  捕食率
    float c;                       //  增长率
	float d;                       //  死亡率
    int s;                         //  寿命
	int n;
public:
	wolf::wolf1(int a0,float b02,float b03,float c0,float d0,int s0);   //重载blackground()
int num()
	{  n=a*(c-d+1);  
	   return n;
	}
	
};

wolf::wolf1(int a0,float b02,float b03,float c0,float d0,int s0)
   	{		 a= a0;
			 b2= b02;  b3= b03;
			 c= c0;
			 d= d0;
			 s= s0;
	}

class rabbit
{
private:
    int a;                        //  数目
    float b;                       //  捕食率
    float c;                       //  增长率
	float d;                       //  死亡率
    int s;                         //  寿命
	int n;
public:
	rabbit::rabbit1(int a0,float b0,float c0,float d0,int s0);   //重载blackground()
int num()
	{  n=a*(c-d+1);  
	   return n;
	}
	
};

rabbit::rabbit1(int a0,float b0,float c0,float d0,int s0)
   	{		 a= a0;
			 b= b0;
			 c= c0;
			 d= d0;
			 s= s0;
	}

class hawk
{
private:
    int a;                        //  数目
    float b;                       //  捕食率
    float c;                       //  增长率
	float d;                       //  死亡率
    int s;                         //  寿命
	int n;
public:
	hawk::hawk1(int a0,float b0,float c0,float d0,int s0);   //重载blackground()
int num()
	{  n=a*(c-d+1);  
	   return n;
	}
	
};

hawk::hawk1(int a0,float b0,float c0,float d0,int s0)
   	{		 a= a0;
			 b= b0;
			 c= c0;
			 d= d0;
			 s= s0;
	}
class grass
{
private:
    int a;                        //  数目
    float b;                       //  捕食率
    float c;                       //  增长率
	float d;                       //  死亡率
    int s;                         //  寿命
	int n;
public:
	grass::grass1(int a0,float b0,float c0,float d0,int s0);   //重载blackground()
int num()
	{  n=a*(c-d+1);  
	   return n;
	}
	
};

grass::grass1(int a0,float b0,float c0,float d0,int s0)
   	{		 a= a0;
			 b= b0;
			 c= c0;
			 d= d0;
			 s= s0;
	}

///////////////////////////////////////////////////////////////////////////////////

void mukuai()
{   int m,n;
   
   for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,7,m,n,BACKGROUND_BLUE|BACKGROUND_RED|FOREGROUND_INTENSITY);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|BACKGROUND_RED|FOREGROUND_BLUE|BACKGROUND_INTENSITY);
          COORD pos10;
	      pos10.X=75;
		  pos10.Y=8;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos10);
    printf("模拟生态系统"); 

    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,7+6,m,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos1;
	      pos1.X=75;
		  pos1.Y=8+6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
    printf("   about   "); 

    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,11+6,m,n,FOREGROUND_INTENSITY|BACKGROUND_GREEN);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos0;
	      pos0.X=75;
		  pos0.Y=12+6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
    printf("   exit!   "); 
 ////////////////////////////////////////////////////////////////////////////////////////
    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,23,m,n,FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
			 z0.display1();
        } 
	} 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
          COORD pos20;
	      pos20.X=75;
		  pos20.Y=24;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos20);
    printf("   play!   "); 

    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,27,m,n,FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
          COORD pos30;
	      pos30.X=75;
		  pos30.Y=28;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos30);
    printf("   set!   "); 
    for(n=0;n<3;n++)
	{   for(m=0;m<15;m++)
		{  	blackground z0(73,31,m,n,FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
			 z0.display1();
        } 
	}        
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_INTENSITY|BACKGROUND_RED);
          COORD pos40;
	      pos40.X=75;
		  pos40.Y=32;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos40);
    printf("   look!   "); 
	

}



void beijing0()
{   int m,n;
    for(n=0;n<5;n++)
    {
		for(m=0;m<21;m++)
		{     blackground z0(70,6,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			  z0.display1();
		}
	}
    for(n=0;n<9;n++)
    {
		for(m=0;m<21;m++)
		{     blackground z0(70,6+6,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			  z0.display1();
		}
	}

       for(n=0;n<13;n++)
    {
		for(m=0;m<21;m++)
		{     blackground z0(70,22,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			  z0.display1();
		}
	}
	mukuai();
}

void beijing1()
{   int m,n;
    ///////////上一个灰界面///////////////
	for(n=0;n<29;n++)
    {
		for(m=0;m<60;m++)
		{
			blackground z0(6,6,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
    }
}

    /////////////草坪//////////
void caoping()
{       int m,n;
		for(n=0;n<3;n++)
		{
			for(m=0;m<50;m++)
			{
				blackground z0(10,24,m,n,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z0.display1();
			}
		}
		for(m=0;m<46;m++)
		{
			blackground z0(12,23,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<46;m++)
		{
			blackground z0(12,27,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<42;m++)
		{
			blackground z0(14,22,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<42;m++)
		{
			blackground z0(14,28,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<38;m++)
		{
			blackground z0(16,29,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<38;m++)
		{
			blackground z0(16,21,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<34;m++)
		{
			blackground z0(18,30,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<34;m++)
		{
			blackground z0(18,20,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
		for(m=0;m<30;m++)
		{
			blackground z0(20,31,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }

		for(m=0;m<30;m++)
		{
			blackground z0(20,19,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
        	for(m=0;m<26;m++)
		{
			blackground z0(22,32,m,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
			 z0.display1();
        }
}

void clear(int x,int y)
{      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
       COORD pos1;
	      pos1.X=x;
		  pos1.Y=y;
	   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);  
}

void puse(int r,int n1[5],int sm[5],float ze[5],float s1[5])
{   clear(38-10-18,19+2*r);
    printf(" 数目: ");
	scanf("%d",&n1[r]);
	clear(53-10-18,19+2*r);
	printf("增长率: ");
	scanf("%f",&ze[r]);
	clear(70-10-18,19+2*r);
	printf("死亡率: ");
    scanf("%f",&s1[r]);
    clear(87-10-18,19+2*r);
	printf("寿命：");
    scanf("%d",&sm[r]);
}

void xuanze()
{   int m,n,r;
    int n1[5],sm[5];float ze1[5],s1[5];

    for(n=0;n<11;n++)
    {
		for(m=0;m<68;m++)
		{     blackground z0(30-10-18,18,m,n,BACKGROUND_INTENSITY|FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_BLUE);
			  z0.display1();
		}
	}
    for(r=0;r<5;r++)
    {   if(r==0)
		{       blackground z1(32-10-18,19,0,0,BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z1.display1();		  z1.display2();      z1.display1(); 
		}
		if(r==1)
		{       blackground z1(32-10-18,21,0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z1.display1();		  z1.display3();      z1.display1(); 
		}
		if(r==2)
		{       blackground z1(32-10-18,23,0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z1.display1();		  z1.display4();      z1.display1(); 
		}
		if(r==3)
		{       blackground z1(32-10-18,25,0,0,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z1.display1();		  z1.display5();      z1.display1(); 
		}
		if(r==4)
		{       blackground z1(32-10-18,27,0,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY|FOREGROUND_INTENSITY);
				z1.display1();		  z1.display6();      z1.display1(); 
		}
		puse(r,n1,sm,ze1,s1);
	}
        Sleep(3000);
	    for(n=0;n<11;n++)
		 {
		   for(m=0;m<68;m++)
			{     blackground z0(30-10-18,18,m,n,FOREGROUND_INTENSITY);
			  z0.display1();
			}
		}
		beijing1();
        caoping();

}

void denglu()
{   int m0,n;
	for(n=0;n<12;n++)
	{    for(m0=0;m0<54;m0++)
		{    blackground z2(24-12,13-6,m0,n,BACKGROUND_INTENSITY);
			 z2.display1();
		}
	}

	for(n=0;n<3;n++)
	{    for(m0=0;m0<10;m0++)
		{    blackground z1(64-12,15-6,m0,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z1.display1();
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos2;
	      pos2.X=66-12;
		  pos2.Y=16-6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
    printf(" 开始 "); 
	
	for(n=0;n<3;n++)
	{    for(m0=0;m0<10;m0++)
		{    blackground z2(64-12,20-6,m0,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos3;
	      pos3.X=66-12;
		  pos3.Y=21-6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos3);
    printf(" 退出 "); 

	for(n=0;n<8;n++)
	{    for(m0=0;m0<32;m0++)
		{    blackground z2(28-12,15-6,m0,n,BACKGROUND_GREEN|FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}

    	for(n=0;n<6;n++)
	{    for(m0=0;m0<28;m0++)
		{    blackground z2(30-12,16-6,m0,n,BACKGROUND_GREEN|BACKGROUND_INTENSITY);
			 z2.display1();
		}
	}

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos21;
	      pos21.X=30-12;
		  pos21.Y=16-6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos21);
	printf("           欢  迎     ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY|FOREGROUND_RED|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos22;
	      pos22.X=30-12;
		  pos22.Y=18-6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos22);
	printf("   —————模仿生态系统 ");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|BACKGROUND_GREEN|BACKGROUND_INTENSITY);
          COORD pos210;
	      pos210.X=30-12;
		  pos210.Y=21-6;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos210);
	printf("请输入您的密码： ");

}

void load()
{  int m0,n,m;
	for(n=0;n<12;n++)
	{    for(m0=0;m0<54;m0++)
		{    blackground z2(24-12,7,m0,n,FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}
	
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
          COORD pos0;
	      pos0.X=18;
		  pos0.Y=9;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos0);
	printf("正在加载,请稍后！");
	for(n=0;n<2;n++)
	{
	    for(m=0;m<40;m++)
		{    blackground z2(18,11,m,n,BACKGROUND_INTENSITY);
			 z2.display1();
		}
    }
    int i;
	for(i=0;i<5;i++)
	{   Sleep(100);
		for(n=0;n<2;n++)
		{  
	      for(m=0;m<8;m++)
		  {    blackground z3(18+i*8,11,m,n,BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	           z3.display1();
		  }
		}
	}
}

void jiemian()
{   int m,n;
	for(n=0;n<12;n++)
	{    for(m=0;m<54;m++)
		{    blackground z2(24-12,13-6,m,n,FOREGROUND_INTENSITY);
			 z2.display1();
		}
	}  
	beijing1();
}

void dongwu(int a1[15],int a2[15],int b1[15],int b2[15],int c1[15],int c2[15],int d1[15],int d2[15])
{   Sleep(1000);
	int m,n;
		for(m=0;m<15;m++)
	{	blackground z2(a1[m],a2[m],0,0,BACKGROUND_RED|BACKGROUND_INTENSITY);
	           z2.display2(); 
    }
	for(m=0;m<11;m++)
	{   blackground z3(b1[m],b2[m],0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY);
	           z3.display3();
    }
    for(m=0;m<6;m++)
	{   blackground z4(c1[m],c2[m],0,0,BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
	           z4.display4();
        blackground z5(d1[m],d2[m],0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
	            z5.display5();
    }
}


void donghua(int a1[15],int a2[15],int b1[15],int b2[15],int c1[15],int c2[15],int d1[15],int d2[15])
{
    int j,v,a22,b22,c22,d22,i,m;
	for(j=1;j<29;j++)
	{   
	    int	j1=j%15;
	    int j2=j%11;
	    int	j3=j%6;

		Sleep(1000);
        if(j%4==0||j%4==1) i=1;
		else i=-1;
		for(v=0;v<2;v++)
		{
		for(m=0;m<15;m++)
		{
			 blackground z2(a1[m],a2[m],v,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	         z2.display1(); 
			
		}
		for(m=0;m<11;m++)
		{   
			blackground z3(b1[m],b2[m],v,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY);
	           z3.display1();
		}
		for(m=0;m<6;m++)
		{   blackground z4(c1[m],c2[m],v,0,BACKGROUND_INTENSITY);
	           z4.display1();
			blackground z5(d1[m],d2[m],v,0,BACKGROUND_INTENSITY);
	            z5.display1();
		}
		}

		for(m=0;m<15;m++)
		{  if(m!=j1)
		{
			if(a2[m]%2==0)
			{ 
			   a1[m]=a1[m]-i;
			   blackground z2(a1[m],a2[m],0,0,BACKGROUND_RED|BACKGROUND_INTENSITY);
			   z2.display2(); 
			}
			else if(a2[m]%2==1)
			{ a1[m]=a1[m]+i;
			  blackground z2(a1[m],a2[m],0,0,BACKGROUND_RED|BACKGROUND_INTENSITY);
			  z2.display2(); 
			}
		}
		}

		for(m=0;m<11;m++)
		{  if(m!=j2)
		{
			if(b2[m]%2==0)
			{  b1[m]=b1[m]-i;
				blackground z2(b1[m],b2[m],0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY);
				z2.display3(); 
			}
			else if(c2[m]%2==1)
			{ b1[m]=b1[m]+i;
			blackground z2(b1[m],b2[m],0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY);
			z2.display3(); 
			}
        }
		}

		for(m=0;m<6;m++)
		{ if(m!=j3) 
		{	if(d2[m]%2==0)
			{  d1[m]=d1[m]-i;
				blackground z2(d1[m],d2[m],0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
				z2.display5(); 
			}
			else if(d2[m]%2==1)
			{ d1[m]=d1[m]+i;
				blackground z2(d1[m],d2[m],0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
				z2.display5(); 
			}
			if(c2[m]%2==0)
			{  c1[m]=c1[m]-i;
				blackground z2(c1[m],c2[m],0,0,BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
				z2.display4(); 
			}
			else if(c2[m]%2==1)
			{ c1[m]=c1[m]+i;
				blackground z2(c1[m],c2[m],0,0,BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
				z2.display4(); 
			}
		}
		}
	

	////////鹰吃兔//////////////////
    blackground z20(d1[j3],d2[j3],0,0,BACKGROUND_INTENSITY);
				z20.display1();        
	blackground z21(a1[j1],a2[j1],0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
				z21.display5(); 
	////////狼吃兔or羊//////////////
    blackground z22(c1[j3],c2[j3],0,0,BACKGROUND_INTENSITY);
				z22.display1();        
	blackground z23(b1[j2],b2[j2],0,0,BACKGROUND_BLUE|BACKGROUND_RED|BACKGROUND_INTENSITY);
				z23.display4(); 

	}
}

void shengtai()
{  int bili1,bili2,bili3,bili4,bili5;
   int e2,e3,e6;
   int yi[100];    int la[100];    int ya[100];	     int tu[100]; 	   int ca[100];
    /////数目/////////////捕食率//////////增长率////////////死亡率/////////寿命////////// 
   int n3=10000;   float b3=0.6 ;  float c3=0.202;   float d3=0.059;   int s3=1000;    //sheep 
   int n2=12000;   float b2=0.2 ;  float c2=0.72 ;   float d2=0.052;   int s2=1000;    //rabbit  
   int n4=400  ;   float b4=0.23;  float c4=0.23 ;   float d4=0.05 ;   int s4=1200;    //hawk
   int n5=700  ;   float b52=6  ;  float c5=0.1  ;   float d5=0.052;   int s5=1200;    float b53=2;//wolf
   int n6=90000;   float b6=0   ;  float c6=0.66 ;   float d6=0.55 ;   int s6=6;    //grass 

   sheep sh;      rabbit ra;     hawk ha;          wolf wo;         grass gr;

   int i,j,m;
   for(i=0;i<100;i++)
   { 
	   e3=n5*b53;
	   e2=n5*b52+n4*b4;
	   e6=n2*b2+n3*b3;

       sh.sheep1(n3,b3,c3,d3,s3); 
       n3=sh.num();

       ra.rabbit1(n2,b2,c2,d2,s2); 
       n2=ra.num();

       ha.hawk1(n4,b4,c4,d4,s4); 
       n4=ha.num();

       wo.wolf1(n5,b52,b53,c5,d5,s5); 
       n5=wo.num();

       gr.grass1(n6,b6,c6,d6,s6); 
       n6=gr.num();
 
       n3=n3-e3;
       n2=n2-e2;
       n6=n6-e6;

	     bili1=n2/n4;                //   鹰/兔
	     bili2=n2/n5;                //   狼/兔
		 bili3=n3/n5;                //   狼/羊
         bili4=n6/n3;                //   草/羊
		 bili5=n6/n2;                //   草/兔

		if(bili1<24)                    //  兔、鹰
		{   n4=n4*0.85;
		    bili1=n2/n4;
		}
        if(bili1>26)                      //兔鹰
		{   n2=n2*0.8;
		    n4=n4*1.05;
		    bili1=n2/n4;
        }


		if(bili2<12||bili3<12)          //兔狼，羊狼
        {   n5=n5*0.884;
		    bili2=n2/n5;
		    bili3=n3/n5;
        }
        if(bili2>15)                      //兔狼
		{   n2=n2*0.8;
            n5=n5*1.05;
		    bili2=n2/n5;
        }
        if(bili3>18)                      //羊狼
		{   n3=n3*0.76;
            n5=n5;
		    bili3=n3/n5;
        }

		if(bili4<9)                     //草羊
		{   n3=n3*0.87;
		    bili1=n6/n3;
        }
	    if(bili5<7)                      //草兔
		{   n2=n2*0.8;
		    bili1=n6/n2;
        }
      
        if(bili4>11)                      //草羊
		{   n6=n6*0.79;
		    n3=n3*1.1;
		    bili4=n6/n3;
        }
        if(bili4>11)                      //草兔
		{   n6=n6*0.8;
			n2=n2*1.1;
		    bili5=n6/n2;
        }

            yi[i]=n4/10;
			la[i]=n5/20;
			ya[i]=n3/100;
			tu[i]=n2/300;
			ca[i]=n6/5000;
    }
    
 
	for(i=0;i<100;i++)
    {   
	    if(i>0&&yi[i]!=yi[i-1])
		{  if(yi[i]>yi[i-1])
				{
					for(j=yi[i-1];j<=yi[i];j++)
					{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
					COORD pos1;
					pos1.X=i;
					pos1.Y=60-j+80;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
					printf("*");
					}
				}
		    else if(yi[i]<yi[i-1])
			{
		      for(j=yi[i];j<=yi[i-1];j++)
			  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
                COORD pos2;
	            pos2.X=i-1;
		        pos2.Y=60-j+80;
		        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	            printf("*");
			  }
			}
		}

		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_GREEN|BACKGROUND_RED);
           COORD pos1;
	       pos1.X=i;
		   pos1.Y=60-yi[i]+80;
		   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	       printf("*");
		
		
	}

for(i=0;i<100;i++)
    {   
	    if(i>0&&la[i]!=la[i-1])
		{  if(la[i]>la[i-1])
				{
					for(j=la[i-1];j<=la[i];j++)
					{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED|FOREGROUND_INTENSITY|BACKGROUND_BLUE|BACKGROUND_RED);
					COORD pos1;
					pos1.X=i;
					pos1.Y=90-j+82;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
					printf("*");
					}
				}
		    else if(la[i]<la[i-1])
			{
		      for(j=la[i];j<=la[i-1];j++)
			  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_BLUE|FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED);
                COORD pos2;
	            pos2.X=i-1;
		        pos2.Y=90-j+82;
		        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	            printf("*");
			  }
			}
		}

		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|BACKGROUND_BLUE|FOREGROUND_INTENSITY|FOREGROUND_BLUE|FOREGROUND_RED);
           COORD pos1;
	       pos1.X=i;
		   pos1.Y=90-la[i]+82;
		   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	       printf("*");
		
		
	}


for(i=0;i<100;i++)
    {   
	    if(i>0&&tu[i]!=tu[i-1])
		{  if(tu[i]>tu[i-1])
				{
					for(j=tu[i-1];j<=tu[i];j++)
					{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|FOREGROUND_INTENSITY|FOREGROUND_RED);
					COORD pos1;
					pos1.X=i;
					pos1.Y=100-j+84;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
					printf("*");
					}
				}
		    else if(tu[i]<tu[i-1])
			{
		      for(j=tu[i];j<=tu[i-1];j++)
			  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|FOREGROUND_INTENSITY|FOREGROUND_RED);
                COORD pos2;
	            pos2.X=i-1;
		        pos2.Y=100-j+84;
		        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	            printf("*");
			  }
			}
		}

		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_RED|FOREGROUND_INTENSITY|FOREGROUND_RED);
           COORD pos1;
	       pos1.X=i;
		   pos1.Y=100-tu[i]+84;
		   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	       printf("*");
		
		
	}

for(i=0;i<100;i++)
    {   
	    if(i>0&&ya[i]!=ya[i-1])
		{  if(ya[i]>ya[i-1])
				{
					for(j=ya[i-1];j<=ya[i];j++)
					{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|FOREGROUND_INTENSITY|FOREGROUND_BLUE);
					COORD pos1;
					pos1.X=i;
					pos1.Y=140-j+80;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
					printf("*");
					}
				}
		    else if(ya[i]<ya[i-1])
			{
		      for(j=ya[i];j<=ya[i-1];j++)
			  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|FOREGROUND_INTENSITY|FOREGROUND_BLUE);
                COORD pos2;
	            pos2.X=i-1;
		        pos2.Y=140-j+80;
		        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	            printf("*");
			  }
			}
		}

		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_BLUE|FOREGROUND_INTENSITY|FOREGROUND_BLUE);
           COORD pos1;
	       pos1.X=i;
		   pos1.Y=140-ya[i]+80;
		   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	       printf("*");
		
		
	}

   for(i=0;i<100;i++)
    {   
	    if(i>0&&ca[i]!=ca[i-1])
		{  if(ca[i]>ca[i-1])
				{
					for(j=ca[i-1];j<=ca[i];j++)
					{SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|FOREGROUND_INTENSITY|FOREGROUND_GREEN);
					COORD pos1;
					pos1.X=i;
					pos1.Y=106-j+88;
					SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
					printf("*");
					}
				}
		    else if(ca[i]<ca[i-1])
			{
		      for(j=ca[i];j<=ca[i-1];j++)
			  { SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|FOREGROUND_INTENSITY|FOREGROUND_GREEN);
                COORD pos2;
	            pos2.X=i-1;
		        pos2.Y=106-j+88;
		        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos2);
	            printf("*");
			  }
			}
		}

		   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),BACKGROUND_GREEN|FOREGROUND_INTENSITY|FOREGROUND_GREEN);
           COORD pos1;
	       pos1.X=i;
		   pos1.Y=106-ca[i]+88;
		   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	       printf("*");
		
		
	}  
}

///////////////鼠标点击//////////////////
HANDLE hOut,hIn;
void HandleMouse(MOUSE_EVENT_RECORD Mouse,int a[2])
{
  
  if(Mouse.dwButtonState==1)
  {  a[0]=Mouse.dwMousePosition.X;
	 a[1]=Mouse.dwMousePosition.Y;
  }
}

void shuangji(int a[2])
{   int x,y;
	int a1[15]={27,25,26,32,18,34,53,46,50,40,48,38,42,20,16};
	int a2[15]={26,27,20,22,24,28,25,30,26,31,28,22,25,28,26};
    int b1[11]={22,22,26,34,43,36,27,48,53,20,47};
	int b2[11]={21,25,22,30,22,26,29,30,24,26,20};
	int c1[6]={13,32,21,28,43,51};
	int c2[6]={8,7,7,10,9,8};
    int d1[6]={8,10,59,57,56,60};
	int d2[6]={18,17,16,14,18,17};
	while(1)
  {
    HANDLE hOut,hIn;
    DWORD Result;
    INPUT_RECORD Buf;
 
	 hOut=GetStdHandle(STD_OUTPUT_HANDLE);
	 hIn=GetStdHandle(STD_INPUT_HANDLE);

	 do
		{
			ReadConsoleInput(hIn,&Buf,1,&Result);
			if(Buf.EventType==MOUSE_EVENT)
			{
				HandleMouse(Buf.Event.MouseEvent,a);
				x=a[0];
	   			y=a[1];
			}
		} while(!(Buf.EventType==MOUSE_EVENT&&Buf.Event.MouseEvent.dwEventFlags==DOUBLE_CLICK));

			          
        if(x>=73&&x<=87&&y>=14&&y<=16)                
			{ 
			    caoping();
                dongwu(a1,a2,b1,b2,c1,c2,d1,d2);
			}     
		else if(x>=73&&x<=87&&y>=18&&y<=20)        
			{   break;
			}    
		else if(x>=73&&x<=87&&y>=24&&y<=26)        
			{   donghua(a1,a2,b1,b2,c1,c2,d1,d2);
			}  
		else if(x>=73&&x<=87&&y>=28&&y<=30)        
			{   xuanze();
			}   
		else if(x>=73&&x<=87&&y>=32&&y<=34)       
			{ 
            	blackground z22(104,78,0,0,BACKGROUND_GREEN|BACKGROUND_RED|BACKGROUND_INTENSITY);
				z22.display1();    z22.display5();  
                printf("-----一格：  10");
                z22.display1();
			    		
				blackground z21(104,99,0,0,BACKGROUND_BLUE|BACKGROUND_INTENSITY);
				z21.display1();    z21.display3();   
                printf("-----一格：  20");    z21.display1(); 
				
                blackground z23(104,123,0,0,BACKGROUND_RED|BACKGROUND_BLUE|BACKGROUND_INTENSITY);
                z23.display1();    z23.display4();  
                printf("-----一格： 100");    z23.display1();

				blackground z20(104,140,0,0,BACKGROUND_RED|BACKGROUND_INTENSITY);
			    z20.display1();    z20.display2();   
				printf("-----一格： 300");    z20.display1();

	            blackground z24(104,164,0,0,BACKGROUND_GREEN|BACKGROUND_INTENSITY);
                z24.display1();    z24.display6();   
                printf("-----一格：5000");    z24.display1();

				shengtai();
			}                 
	}
}

	      
void main(int argc, char* argv[])
{
	int a[2];
    char p[10]; 

	char p1[10]={"123456"};
	denglu();
	scanf("%s",p);
	if(strcmp(p,p1)==0)
    load();
	beijing0();
    jiemian();
	shuangji(a);
}
