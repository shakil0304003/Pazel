#include<iostream.h>
#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include <stdlib.h>
#include<string.h>
getmousepos(int *button,int *x,int *y);
restrictmouseptr(int x1,int y1,int x2, int y2);
hidemouseptr();
showmouseptr();
union REGS i,o;
class shakil
{
  int button,x,y;
  long int i,j,k,p,res1[12][12],q,ra[144],result,sa[10],sa1[10],m,n,vm[12][12],xp1[12][12],xp2[12][12],yp1[12][12],yp2[12][12];
  long int l,tm1,tm2,c12,tm,ne2;

  void new1();
  void get();
  void show();
  void mixed();
  void cal();
  void resu();
  void easy();
  void save1();
  void save2();
  void turna();
  public:
  void first();
 };

void shakil::first()
{
   tm=0;
   showmouseptr();


 while(1)
{
 getmousepos(&button,&x,&y);
 if(tm==0)
 {
   hidemouseptr();
   setcolor(7);
   rectangle(105,105,345,155);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,110,7);
   rectangle(105,160,345,205);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,170,7);
   rectangle(105,210,345,255);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,220,7);
   rectangle(105,260,345,305);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,270,7);
   rectangle(105,310,345,345);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,320,7);
   setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(130,106," NEW ");
   outtextxy(130,161," EASY ");
   outtextxy(130,211," EXIT ");
   outtextxy(95,255," LOAD GAME");
   outtextxy(105,300,"TURNAMENT");
   rectangle(100,100,350,350);
   tm=10;
   showmouseptr();
   }
   p=x;m=y;

 if(p>105&&p<345)
 {if((m>105&&m<155)&&tm!=1)
  {tm=1;
   hidemouseptr();
   setcolor(123);
   rectangle(105,105,345,155);
   setfillstyle(SOLID_FILL,123);
   floodfill(110,110,123);
   setcolor(7);
   rectangle(105,160,345,205);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,170,7);
   rectangle(105,210,345,255);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,220,7);
   rectangle(105,260,345,305);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,270,7);
   rectangle(105,310,345,345);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,320,7);
   setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(130,106," NEW ");
   outtextxy(130,161," EASY ");
   outtextxy(130,211," EXIT ");
   outtextxy(95,255," LOAD GAME");
   outtextxy(105,300,"TURNAMENT");
   rectangle(100,100,350,350);
   showmouseptr();
  }
  if((m>160&&m<205)&&tm!=2)
  { tm=2;
    hidemouseptr();
    setcolor(123);
    rectangle(105,160,345,205);
    setfillstyle(SOLID_FILL,123);
    floodfill(110,170,123);
    setcolor(7);
    rectangle(105,105,345,155);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,110,7);
    rectangle(105,210,345,255);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,220,7);
    rectangle(105,260,345,305);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,270,7);
    rectangle(105,310,345,345);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,320,7);
    setcolor(RED);
    settextstyle(1,0,5);
    outtextxy(130,106," NEW ");
    outtextxy(130,161," EASY ");
    outtextxy(130,211," EXIT ");
    outtextxy(95,255," LOAD GAME");
    outtextxy(105,300,"TURNAMENT");
    rectangle(100,100,350,350);
    showmouseptr();
  }
   if((m>210&&m<255)&&tm!=3)
  { tm=3;
    hidemouseptr();
    setcolor(123);
    rectangle(105,210,345,255);
    setfillstyle(SOLID_FILL,123);
    floodfill(110,220,123);
    setcolor(7);
    rectangle(105,160,345,205);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,170,7);
    rectangle(105,105,345,155);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,110,7);
    rectangle(105,260,345,305);
    setfillstyle(SOLID_FILL,7);
    floodfill(110,270,7);
    rectangle(105,310,345,345);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,320,7);
    setcolor(RED);
    settextstyle(1,0,5);
    outtextxy(130,106," NEW ");
    outtextxy(130,161," EASY ");
    outtextxy(130,211," EXIT ");
    outtextxy(95,255," LOAD GAME");
    outtextxy(105,300,"TURNAMENT");
    rectangle(100,100,350,350);
    showmouseptr();
   }
   if((m>260&&m<305)&&tm!=4)
  {tm=4;
   hidemouseptr();
   setcolor(123);
   rectangle(105,260,345,305);
   setfillstyle(SOLID_FILL,123);
   floodfill(110,270,123);
   setcolor(7);
   rectangle(105,160,345,205);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,170,7);
   rectangle(105,210,345,255);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,220,7);
   rectangle(105,105,345,155);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,110,7);
   rectangle(105,310,345,345);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,320,7);
   setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(130,106," NEW ");
   outtextxy(130,161," EASY ");
   outtextxy(130,211," EXIT ");
   outtextxy(95,255," LOAD GAME");
   outtextxy(105,300,"TURNAMENT");
   rectangle(100,100,350,350);
   showmouseptr();
  }
   if((m>310&&m<345)&&tm!=5)
  {tm=5;
   hidemouseptr();
   setcolor(123);
   rectangle(105,310,345,345);
   setfillstyle(SOLID_FILL,123);
   floodfill(110,320,123);
   setcolor(7);
   rectangle(105,160,345,205);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,170,7);
   rectangle(105,210,345,255);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,220,7);
   rectangle(105,105,345,155);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,110,7);

   rectangle(105,260,345,305);
   setfillstyle(SOLID_FILL,7);
   floodfill(110,270,7);

   setcolor(RED);
   settextstyle(1,0,5);
   outtextxy(130,106," NEW ");
   outtextxy(130,161," EASY ");
   outtextxy(130,211," EXIT ");
   outtextxy(95,255," LOAD GAME");
   outtextxy(105,300,"TURNAMENT");
   rectangle(100,100,350,350);
   showmouseptr();
  }
   if(m<105||m>345)
   if(tm!=0)
   tm=0;
    }
   else if(tm!=0)
   tm=0;

 if((button & 1)==1)
 {if(x>=105&&x<=345)
  { if(y>=210&&y<=255)
    break;
    if(y>=105&&y<=155)
    {result=0;
     hidemouseptr();
     new1();
     continue;
      }
    if(y>=160&&y<=250)
    {result=0;
    hidemouseptr();
    easy();
    continue;
    }
   if(y>=260&&y<=305)
   {result=0;
    save2();
    continue; }
   if(y>=310&&y<=345)
   {result=0;
   turna();
   continue;
   }
}}
delay(100);

}
}
void shakil::new1()
{ tm=0;
 cleardevice();
 showmouseptr();
 char ch[1],ch1[1];
 for(i=0;i<10;i++)
 {sa[i]=250;sa1[i]=50+40*i;}
 while(1)
 { tm=0;
  settextstyle(1,0,1);
    m=0;
 getmousepos(&button,&x,&y);
 hidemouseptr();
 for(i=0;i<10;i++)
 { tm=0;
  p=x;q=y;
  if(p>sa[i]&&p<sa[i]+100)
  if(q>sa1[i]&&q<sa1[i]+20)
  {setcolor(2);
  rectangle(sa[i],sa1[i],sa[i]+100,sa1[i]+20);
   setfillstyle(SOLID_FILL,2);
   floodfill(sa[i]+2,sa1[i]+2,2);
   tm=5;
     }
   if(tm==0)
   {setcolor(8);
   rectangle(sa[i],sa1[i],sa[i]+100,sa1[i]+20);
   setfillstyle(SOLID_FILL,8);
   floodfill(sa[i]+2,sa1[i]+2,8);
   tm=5;
     }
  m=i+2;
  setcolor(RED);
  switch(m)
  {case 2:outtextxy(sa[i]+3,sa1[i]," 2:2 ");
	  break;
   case 3:outtextxy(sa[i]+3,sa1[i]," 3:3 ");
	  break;
   case 4:outtextxy(sa[i]+3,sa1[i]," 4:4 ");
	  break;
   case 5:outtextxy(sa[i]+3,sa1[i]," 5:5 ");
	  break;
   case 6:outtextxy(sa[i]+3,sa1[i]," 6:6 ");
	  break;
   case 7:outtextxy(sa[i]+3,sa1[i]," 7:7 ");
	  break;
   case 8:outtextxy(sa[i]+3,sa1[i]," 8:8 ");
	  break;
   case 9:outtextxy(sa[i]+3,sa1[i]," 9:9 ");
	  break;
   case 10:outtextxy(sa[i]+3,sa1[i]," 10:10 ");
	  break;
   case 11:outtextxy(sa[i]+3,sa1[i]," 11:11 ");
	  break;
   }}
   showmouseptr();
 if((button & 1)==1)
 {if(x>=250&&x<=350)
  for(i=0;i<10;i++)
  if(y>=sa1[i]&&y<=sa1[i]+20)
  {n=i+2;m=4;break;              }


 }
 if(m==4)
 break;
 delay(100);
      }
 get();

}
void shakil::get()
{ hidemouseptr();
  cleardevice();
  showmouseptr();
  x=400/n;y=400/n;
  c12=80/n;
  for(i=0;i<n;i++)
  {p=50+i*y;q=50;
   for(j=0;j<n;j++)
   {xp1[i][j]=q+(j*x);
    xp2[i][j]=q+((j+1)*x)-c12;
    yp1[i][j]=p;
    yp2[i][j]=p+y-c12;}}
    p=n*n;
    for(i=0;i<p-1;i++)
    {
    do
    {ra[i]=rand()%(p-1);
      ra[i]=ra[i]+1;q=0;
      for(j=i-1;j>=0;j--)
      if(ra[j]==ra[i])
      {q=5;break;}
      }while(q!=0);

    } k=-1;
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
    {if(i!=0||j!=0)
    {k=k+1;

     res1[i][j]=ra[k];

     vm[i][j]=5;
      }}}
   vm[0][0]=0; res1[i][j]=0;
   result=0;
   mixed();

}
void shakil::show()
{
 hidemouseptr();
 setcolor(123);

 for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 {
   if(vm[i][j]==10)
   {setcolor(123);
   rectangle(xp1[i][j],yp1[i][j],xp2[i][j],yp2[i][j]);
   setfillstyle(SOLID_FILL,123);
   floodfill(xp1[i][j]+2,yp1[i][j]+2,123);
     }
    if(vm[i][j]==5)
    {setcolor(7);
     rectangle(xp1[i][j],yp1[i][j],xp2[i][j],yp2[i][j]);
      setfillstyle(SOLID_FILL,7);
     floodfill(xp1[i][j]+2,yp1[i][j]+2,7);

    }
   if(vm[i][j]==0)
   { setcolor(BLACK);
     rectangle(xp1[i][j],yp1[i][j],xp2[i][j]+(c12/2),yp2[i][j]+(c12/2));
     setfillstyle(SOLID_FILL,BLACK);
     floodfill(xp1[i][j]+2,yp1[i][j]+2,BLACK);
     line(xp1[i][j],yp2[i][j],xp1[i][j]+(c12/2),yp2[i][j]+(c12/2));
    line(xp2[i][j],yp1[i][j],xp2[i][j]+(c12/2),yp1[i][j]+(c12/2));
   }
   if(vm[i][j]==5||vm[i][j]==10)
   {
    setcolor(RED);
    p=res1[i][j]/100;
    if(p>0)
    {switch(p)
    {case 0:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"0");
	  break;
      case 1:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"1");
	  break;

    case 2:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"2");
	  break;
    case 3:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"3");
	  break;
   case 4:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"4");
	  break;
    case 5:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"5");
	  break;
    case 6:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"6");
	  break;
    case 7:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"7");
	  break;
    case 8:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"8");
	  break;
    case 9:
	  outtextxy(xp1[i][j]+1,(yp1[i][j]+yp2[i][j])/2-10,"9");
	  break;
    }

    }
    m=res1[i][j]/10;
    if(m>9)
    m=m-p*10;
    if(m>0||p>0)
    {switch(m)
    {case 0:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"0");
	  break;
    case 1:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"1");
	  break;

    case 2:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"2");
	  break;
    case 3:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"3");
	  break;
    case 4:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"4");
	  break;
    case 5:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"5");
	  break;
    case 6:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"6");
	  break;
    case 7:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"7");
	  break;
    case 8:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"8");
	  break;
    case 9:
	  outtextxy(xp1[i][j]+10,(yp1[i][j]+yp2[i][j])/2-10,"9");
	  break;



    }

    }
    m=res1[i][j]%10;
    switch(m)
    {case 0:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"0");
	  break;
      case 1:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"1");
	  break;

    case 2:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"2");
	  break;
    case 3:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"3");
	  break;
    case 4:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"4");
	  break;
    case 5:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"5");
	  break;
    case 6:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"6");
	  break;
    case 7:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"7");
	  break;
    case 8:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"8");
	  break;
    case 9:
	  outtextxy(xp1[i][j]+20,(yp1[i][j]+yp2[i][j])/2-10,"9");
	  break;



    }
    setcolor(8);
    line(xp1[i][j]+(c12/2),yp2[i][j]+(c12/2),xp2[i][j]+(c12/2),yp2[i][j]+(c12/2));
    line(xp2[i][j]+(c12/2),yp1[i][j]+(c12/2),xp2[i][j]+(c12/2),yp2[i][j]+(c12/2));
    line(xp1[i][j],yp2[i][j],xp1[i][j]+(c12/2),yp2[i][j]+(c12/2));
    line(xp2[i][j],yp1[i][j],xp2[i][j]+(c12/2),yp1[i][j]+(c12/2));
    // setfillstyle(SOLID_FILL,8);
   //  floodfill(xp2[i][j],yp2[i][j]+2,8);
    }
	}
    setcolor(123);
    rectangle(xp1[0][0]-c12,yp1[0][0]-c12,xp2[n-1][n-1]+c12,yp2[n-1][n-1]+c12);
    setcolor(2);
    rectangle(470,370,520,390);
    setfillstyle(SOLID_FILL,2);
    floodfill(477,376,2);
    setcolor(RED);
    outtextxy(476,369,"EXIT");
    setcolor(2);
    rectangle(470,270,520,290);
    setfillstyle(SOLID_FILL,2);
    floodfill(477,276,2);
    setcolor(RED);
    outtextxy(473,270,"SAVE");
    showmouseptr();

}
void shakil:: mixed()
{ tm=0;ne2=0;
  cleardevice();
  showmouseptr();
  settextstyle(1,0,1);
  show();
  while(1)
  {getmousepos(&button,&x,&y);
   if((button & 1)==1)
   {cal();
    resu();
    show();
    if(x>=470&&x<=520)
    {if(y>=370&&y<=390)
    {ne2=10;
     break; }
    if(y>=270&&y<=290)
    {save1();   }

   } }

   if(result==10)
   {settextstyle(1,0,10);
    outtextxy(50,100,"YOU WIN");
    delay(1000);
    getch();
    break;
   }
}
hidemouseptr();
result=0;
cleardevice();
showmouseptr();
}

void shakil::cal()
{for(i=0;i<n;i++)
 for(j=0;j<n;j++)
 if(x>xp1[i][j]&&x<xp2[i][j])
 if(y>yp1[i][j]&&y<yp2[i][j])
 {p=i;q=j;
  break;}
  if(vm[p][q]!=0)
  {for(i=0;i<n;i++)
   for(j=0;j<n;j++)
   if(vm[i][j]==10)
   vm[i][j]=5;
   vm[p][q]=10;
     l=0;
    if(p-1>=0)
    if(vm[p-1][q]==0)
    l=1;
    if(q-1>=0)
    if(vm[p][q-1]==0)
    l=2;
    if(p+1<n)
    if(vm[p+1][q]==0)
    l=3;
    if(q+1<n)
    if(vm[p][q+1]==0)
    l=4;
    switch(l)
    {case 1:tm1=vm[p-1][q];tm2=res1[p-1][q];
	    vm[p-1][q]=vm[p][q];res1[p-1][q]=res1[p][q];
	    vm[p][q]=tm1;res1[p][q]=tm2;
	    break;
     case 2:tm1=vm[p][q-1];tm2=res1[p][q-1];
	    vm[p][q-1]=vm[p][q];res1[p][q-1]=res1[p][q];
	    vm[p][q]=tm1;res1[p][q]=tm2;
	    break;
     case 3:tm1=vm[p+1][q];tm2=res1[p+1][q];
	    vm[p+1][q]=vm[p][q];res1[p+1][q]=res1[p][q];
	    vm[p][q]=tm1;res1[p][q]=tm2;
	    break;
    case 4:tm1=vm[p][q+1];tm2=res1[p][q+1];
	    vm[p][q+1]=vm[p][q];res1[p][q+1]=res1[p][q];
	    vm[p][q]=tm1;res1[p][q]=tm2;
	    break;
    }
      }

   }
void shakil::resu(){
 l=0;
for(i=0;i<n;i++)
for(j=0;j<n;j++)
{ m=((i*n)+j)+1;
 if(i!=n-1||j!=n-1)
 if(m!=res1[i][j])
 {l=5;break;}
 }
if(l==0)
result=10;

}
void shakil::easy()
{ n=5;
 x=400/n;y=400/n;c12=80/n;
 for(i=0;i<n;i++)
 {p=50+i*y;q=50;
  for(j=0;j<n;j++)
  {xp1[i][j]=q+j*x;
   xp2[i][j]=q+(j+1)*x-c12;
   yp1[i][j]=p;
   yp2[i][j]=p+y-c12;
   vm[i][j]=5;
   }}
   vm[0][0]=0;result=0;res1[0][0]=0;
   res1[0][1]=1;res1[0][2]=2;res1[0][3]=3;res1[0][4]=4;
   res1[1][0]=6;res1[1][1]=7;res1[1][2]=8;res1[1][3]=9;res1[1][4]=5;
   res1[2][0]=11;res1[2][1]=12;res1[2][2]=13;res1[2][3]=14;res1[2][4]=10;
   res1[3][0]=16;res1[3][1]=17;res1[3][2]=18;res1[3][3]=19;res1[3][4]=15;
   res1[4][0]=21;res1[4][1]=22;res1[4][2]=23;res1[4][3]=24;res1[4][4]=20;
   mixed();
}
void shakil::save1()
{ long int pp[5],cc=0,i1,pp1[5]={0};
  FILE *p11,*p22,*p33,*p44,*p1;
  p11=fopen("sav11","r");
  fscanf(p11,"%ld",&pp[0]);
  if(pp[0]==1)
  fscanf(p11,"%ld",&pp1[0]);
  fclose(p11);
  p22=fopen("sav22","r");
  fscanf(p22,"%ld",&pp[1]);
  if(pp[1]==1)
  fscanf(p11,"%ld",&pp1[1]);
  fclose(p22);
  p33=fopen("sav33","r");
  fscanf(p33,"%ld",&pp[2]);
  if(pp[2]==1)
  fscanf(p11,"%ld",&pp1[2]);
  fclose(p33);
  p44=fopen("sav44","r");
  fscanf(p44,"%ld",&pp[3]);
  if(pp[3]==1)
  fscanf(p11,"%ld",&pp1[3]);
  fclose(p44);
  pp[4]=5;pp1[4]=0;
  for(i=1;i<=5;i++)
  {setcolor(123);
   rectangle(521,250+i*20+4,630,270+i*20);
     setfillstyle(SOLID_FILL,123);
     floodfill(530,250+i*20+6,123);
   setcolor(RED);
   if(pp[i-1]==0)
    outtextxy(525,250+i*20,"EMPTY");
    if(pp[i-1]==1)
    outtextxy(525,250+i*20,"FULL");
    if(pp[i-1]==5)
    outtextxy(525,250+i*20,"EXIT");
    if(pp1[i-1]!=0)
    { setcolor(RED);
     switch(pp1[i-1])
    {case 2:outtextxy(565,250+i*20,"(2:2)");
	  break;
   case 3:outtextxy(565,250+i*20,"(3:3)");
	  break;
   case 4:outtextxy(565,250+i*20,"(4:4)");
	  break;
   case 5:outtextxy(565,250+i*20,"(5:5)");
	  break;
   case 6:outtextxy(565,250+i*20,"(6:6)");
	  break;
   case 7:outtextxy(565,250+i*20,"(7:7)");
	  break;
   case 8:outtextxy(565,250+i*20,"(8:8)");
	  break;
   case 9:outtextxy(565,250+i*20,"(9:9)");
	  break;
   case 10:outtextxy(565,250+i*20,"(10:10)");
	  break;
   case 11:outtextxy(565,250+i*20,"(11:11)");
	  break;
   }
    }
    }
    while(1)
    {getmousepos(&button,&x,&y);
     if((button & 1)==1)
     {if(x>=521&&x<=630)
      for(i1=1;i1<=5;i1++)
      {tm=250+i1*20+4;tm1=270+i1*20;
      if(y>tm&&y<tm1)
      {switch(i1)
       {case 1:
		p1=fopen("sav11","w");
		fprintf(p1,"1 %ld",n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fprintf(p1," %ld %ld",res1[i][j],vm[i][j]);
		fclose(p1);
		break;
	case 2:
		p1=fopen("sav22","w");
		fprintf(p1,"1 %ld",n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fprintf(p1," %ld %ld",res1[i][j],vm[i][j]);
		fclose(p1);
		break;
	case 3:
		p1=fopen("sav33","w");
		fprintf(p1,"1 %ld",n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fprintf(p1," %ld %ld",res1[i][j],vm[i][j]);
		fclose(p1);
		break;
	case 4:
		p1=fopen("sav44","w");
		fprintf(p1,"1 %ld",n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fprintf(p1," %ld %ld",res1[i][j],vm[i][j]);
		fclose(p1);
		break;
	case 5:
	       break;
       }

       cc=5;
       break;
      }}
     }
     if(cc==5)
     break;
    }
  hidemouseptr();
  cleardevice();
  showmouseptr();

}
void shakil::save2()
{ long int pp[5],cc=0,i1,nm=0,pp1[5]={0};

  FILE *p11,*p22,*p33,*p44,*p1;
  p11=fopen("sav11","r");
  fscanf(p11,"%ld",&pp[0]);
  if(pp[0]==1)
  fscanf(p11,"%ld",&pp1[0]);
  fclose(p11);
  p22=fopen("sav22","r");
  fscanf(p22,"%ld",&pp[1]);
  if(pp[1]==1)
  fscanf(p22,"%ld",&pp1[1]);
  fclose(p22);
  p33=fopen("sav33","r");
  fscanf(p33,"%ld",&pp[2]);
  if(pp[2]==1)
  fscanf(p33,"%ld",&pp1[2]);
  fclose(p33);
  p44=fopen("sav44","r");
  fscanf(p44,"%ld",&pp[3]);
  if(pp[3]==1)
  fscanf(p44,"%ld",&pp1[3]);
  fclose(p44);
  pp[4]=5;
  settextstyle(1,0,1);
  for(i=1;i<=5;i++)
  {setcolor(123);
   rectangle(470,270+i*20+4,580,290+i*20);
    setfillstyle(SOLID_FILL,123);
    floodfill(477,270+i*20+6,123);
   setcolor(RED);
   if(pp[i-1]==0)
    outtextxy(473,270+i*20,"EMPTY");
    if(pp[i-1]==1)
    outtextxy(473,270+i*20,"FULL");
    if(pp[i-1]==5)
    outtextxy(473,270+i*20,"EXIT");

    if(pp1[i-1]!=0)
    { setcolor(RED);
     switch(pp1[i-1])
    {case 2:outtextxy(518,270+i*20,"(2:2)");
	  break;
   case 3:outtextxy(518,270+i*20,"(3:3)");
	  break;
   case 4:outtextxy(518,270+i*20,"(4:4)");
	  break;
   case 5:outtextxy(518,270+i*20,"(5:5)");
	  break;
   case 6:outtextxy(518,270+i*20,"(6:6)");
	  break;
   case 7:outtextxy(518,270+i*20,"(7:7)");
	  break;
   case 8:outtextxy(518,270+i*20,"(8:8)");
	  break;
   case 9:outtextxy(518,270+i*20,"(9:9)");
	  break;
   case 10:outtextxy(518,270+i*20,"(10:10)");
	  break;
   case 11:outtextxy(518,270+i*20,"(11:11)");
	  break;
   }
    }

    }
    while(1)
    {getmousepos(&button,&x,&y);
     if((button & 1)==1)
     {if(x>=470&&x<=580)
      for(i1=1;i1<=5;i1++)
      {tm=270+i1*20+4;tm1=290+i1*20;
      if(y>tm&&y<tm1)
      {
       switch(i1)
       {case 1: if(pp[i1-1]==1)
		{p1=fopen("sav11","r");
		fscanf(p1,"%ld %ld",&m,&n);

		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fscanf(p1," %ld %ld",&res1[i][j],&vm[i][j]);
		fclose(p1);
		x=400/n;y=400/n;
		c12=80/n;
	       for(i=0;i<n;i++)
		{p=50+i*y;q=50;
	       for(j=0;j<n;j++)
	       {xp1[i][j]=q+(j*x);
	       xp2[i][j]=q+((j+1)*x)-c12;
	       yp1[i][j]=p;
	       yp2[i][j]=p+y-c12;}}  }
		break;
	case 2: if(pp[i1-1]==1)
		{p1=fopen("sav22","r");
		fscanf(p1,"%ld %ld",&m,&n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fscanf(p1," %ld %ld",&res1[i][j],&vm[i][j]);
		fclose(p1);
		x=400/n;y=400/n;
		c12=80/n;
		for(i=0;i<n;i++)
		{p=50+i*y;q=50;
		for(j=0;j<n;j++)
		{xp1[i][j]=q+(j*x);
		 xp2[i][j]=q+((j+1)*x)-c12;
		 yp1[i][j]=p;
		yp2[i][j]=p+y-c12;}} }
		break;
	case 3: if(pp[i1-1]==1)
		{p1=fopen("sav33","r");
		fscanf(p1,"%ld %ld",&m,&n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fscanf(p1," %ld %ld",&res1[i][j],&vm[i][j]);
		fclose(p1);
		x=400/n;y=400/n;
		c12=80/n;
		for(i=0;i<n;i++)
	       {p=50+i*y;q=50;
	       for(j=0;j<n;j++)
	      {xp1[i][j]=q+(j*x);
	       xp2[i][j]=q+((j+1)*x)-c12;
	       yp1[i][j]=p;
	       yp2[i][j]=p+y-c12;}}}
		break;
	case 4: if(pp[i1-1]==1)
		{p1=fopen("sav44","r");
		fscanf(p1,"%ld %ld",&m,&n);
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		fscanf(p1," %ld %ld",&res1[i][j],&vm[i][j]);
		fclose(p1);
		x=400/n;y=400/n;
		c12=80/n;
		for(i=0;i<n;i++)
	       {p=50+i*y;q=50;
	       for(j=0;j<n;j++)
	       {xp1[i][j]=q+(j*x);
		xp2[i][j]=q+((j+1)*x)-c12;
		yp1[i][j]=p;
		yp2[i][j]=p+y-c12;}}}
		break;
	case 5:nm=5;
	       break;
       }

       cc=5;
       break;
      }}
     }
     if(cc==5)
     break;
    }
  hidemouseptr();
  cleardevice();
  showmouseptr();
  if(nm==0)
  mixed();
}

void shakil::turna()
{ne2=0;
 long int xxx;
 for(xxx=1;xxx<=11;xxx++)
 { result=0;
  if(xxx==1)
  easy();
  if(xxx>1)
  {n=xxx;
  get();}
  mixed();

  if(ne2==10)
  break;
      }

}
void main()
{int gd=DETECT,gm;
initgraph(&gd,&gm,"G:\\install\\tc\\bgi");
restrictmouseptr(0,0,710,710);
showmouseptr();
shakil sa;

sa.first();

closegraph();

}



initmouse()
{i.x.ax=0;
 int86(0x33,&i,&o);
 return(o.x.ax);
}
getmousepos(int *button,int *x,int *y)
{i.x.ax=3;
 int86(0x33,&i,&o);
 *button=o.x.bx;
 *x=o.x.cx;
 *y=o.x.dx;
}
showmouseptr()
{i.x.ax=1;
 int86(0x33,&i,&o);
}
restrictmouseptr(int x1,int y1,int x2, int y2)
{i.x.ax=7;
 i.x.cx=x1;
 i.x.dx=x2;
 int86(0x33,&i,&o);
 i.x.ax=8;
 i.x.cx=y1;
 i.x.dx=y2;
 int86(0x33,&i,&o);
 }

hidemouseptr()
{
	i.x.ax=2;
    int86(0x33,&i,&o);


}