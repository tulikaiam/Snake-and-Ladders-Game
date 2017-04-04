#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<time.h>
typedef struct coord //Data structure to describe the x-y co-ordinates of the player
{
    int x;//x-coordinate
    int y;//y-coordinate
}xy;

typedef struct coord1 //Data structure to describe the x-y co-ordinates of the player
{
    int x1;//x-coordinate
    int y1;//y-coordinate
}xy1;

struct node{
int a;
int b;
struct node *next;
}*head,*t,*tail;



xy co ;
xy1 co1 ;
int chk = 1;
int chk1=1;



int arr[10][10];
char name[30];


void board();

//Function to draw the board diagram on the display
void move();
void move1();//function to move the player along the board according to the dice
int dice();
void add(int , int );
void display();
 main()
{
    int gdrive=DETECT,gmode;
initgraph(&gdrive,&gmode,"");
    char  op;
    co.x = 75 ;
    co.y = 415 ;
    co1.x1=75;
    co1.y1=415;
//temp=(struct node *)malloc(sizeof(struct node));

/*temp->next->a=303;
    temp->next->b=301;
    temp->next->next=NULL;*/

    printf("\t \t###---Welcome to the snake and ladders Game! ^_^ ---###\n");
    printf("-------Goal of the game - To reach the 100th mark in least possible time fighting through the snakes------\n");
    printf("------- Ground Rules!- Keep pressing 1 to roll the dice , DONOT break the rules-----\n");
    printf(" ----------- Have a happy play --------\n");
    printf("Please enter your name : ");
    gets(name);
    board();
    add(151,301);//ladder 38

    add(417,339);//snake
    //snake
    add(187,73);// snake

    add(377,197);
    add(301,111);


    add(187,263);
    add(75,225);
    add(339,149);
    display();


    do
    {
        printf(" Press 1 for player 1 2 for player 2 turn ! \n");
        op = getch();
        if(op == 'q')
            exit(0);
        else if(op=='1')
        {

            //printf("your co-ordinates are : %d %d\n",co.x , co.y);
            //getch();
            //clrscr();
            move();
            board();


        }
        else if(op=='2')
        {

            //printf("your co-ordinates are : %d %d\n",co.x , co.y);
            //getch();
            //clrscr();
            move1();
            board();


        }



    }while(op!='q');




}
void add( int c1 , int c2 )
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->a=c1;
    temp->b=c2;
    if (head== NULL)
    {
    head=temp;
    head->next=NULL;
    }
    else
    {
    temp->next=head;
    head=temp;
    }
}
 void display()
 {
    t=head;
    while(t!=NULL)
    {
        printf("%d",t->a);
        printf("%d",t->b);
        t=t->next;
    }
 }

void board()
{
outtextxy(20,20,"Welcome");
outtextxy(100,20,name);
int x,num,j,i=0,y,m,c;
char cc[3];

setcolor(4);
rectangle(61,61,439,439);
line(98,60,98,440);
line(136,60,136,440);

line(174,60,174,440);
line(212,60,212,440);
line(250,60,250,440);
line(288,60,288,440);
line(326,60,326,440);
line(364,60,364,440);
line(402,60,402,440);

setcolor(1);

line(60,98,440,98);
line(60,136,440,136);
line(60,174,440,174);
line(60,212,440,212);
line(60,250,440,250);
line(60,288,440,288);
line(60,326,440,326);
line(60,364,440,364);
line(60,402,440,402);
setcolor(2);
line(151,377,155,301);
line(165,377,160,301);
//line(209,385,198,314);
line(155,360,158,362);
//line(182,377,208,377);
/*line(183,354,205,353);
line(185,333,202,332);
line(186,319,199,318);*/

//ladder 32->62
line(369,300,384,194);
line(370,300,385,194);
line(385,302,397,198);
line(386,302,398,198);

line(370,295,387,295);
line(373,276,388,279);
line(376,256,391,260);
line(377,241,392,245);
line(381,222,395,226);
line(383,207,396,209);



//ladder 45->84

line(259,261,303,122);
line(258,261,302,122);
line(273,261,313,123);
line(272,261,312,123);

line(262,254,275,254);
line(266,237,280,238);
line(272,218,285,221);
line(277,202,289,204);
line(283,185,295,187);
line(288,168,300,167);
line(294,148,305,149);
line(299,131,310,131);

//ladder 78->97

line(150,147,187,87);
line(151,147,188,87);
line(165,152,199,87);
line(166,152,200,87);

line(153,141,170,144);
line(163,128,178,128);
line(174,109,188,109);
line(185,92,196,95);

setcolor(12);
setfillstyle(9,14);
//snake 21->
fillellipse(420,358,3,2);
fillellipse(415,357,3,2);
fillellipse(404,350,3,2);
fillellipse(398,343,3,2);
fillellipse(392,335,3,2);
fillellipse(374,319,3,2);
fillellipse(362,315,3,2);
fillellipse(346,317,3,2);
fillellipse(333,313,3,2);
fillellipse(325,304,3,2);
fillellipse(319,293,3,2);
fillellipse(315,284,3,2);
fillellipse(316,289,3,2);
fillellipse(315,280,3,2);
fillellipse(321,298,3,2);
fillellipse(327,308,3,2);
fillellipse(323,301,3,2);

fillellipse(330,311,3,2);
fillellipse(337,315,3,2);
fillellipse(341,317,3,2);
fillellipse(352,317,3,2);
fillellipse(357,316,3,2);
fillellipse(368,313,3,2);
fillellipse(373,315,3,2);
fillellipse(374,323,3,2);
fillellipse(374,326,3,2);
fillellipse(375,330,3,2);
fillellipse(378,334,3,2);
fillellipse(383,334,3,2);
fillellipse(388,335,3,2);
fillellipse(393,337,3,2);
fillellipse(397,339,3,2);
fillellipse(399,348,3,2);
fillellipse(408,352,3,2);
fillellipse(411,354,3,2);
//snake 47
fillellipse(155,205,3,2);
fillellipse(158,207,3,2);
fillellipse(162,209,3,2);
fillellipse(170,227,3,2);
fillellipse(169,219,3,2);
fillellipse(169,236,3,2);
fillellipse(169,247,3,2);
fillellipse(173,257,3,2);
fillellipse(181,264,3,2);
fillellipse(175,260,3,2);
fillellipse(165,212,3,2);
fillellipse(168,216,3,2);
fillellipse(171,222,3,2);
fillellipse(170,231,3,2);
fillellipse(170,241,3,2);
fillellipse(172,252,3,2);
fillellipse(178,262,3,2);
fillellipse(184,266,3,2);
//snake 60

fillellipse(86,225,3,2);
fillellipse(90,221,3,2);
fillellipse(95,217,3,2);
fillellipse(101,212,3,2);
fillellipse(105,204,3,2);
fillellipse(106,196,3,2);
fillellipse(106,189,3,2);
fillellipse(106,179,3,2);
fillellipse(109,170,3,2);
fillellipse(112,164,3,2);
fillellipse(109,167,3,2);
fillellipse(107,174,3,2);
fillellipse(106,184,3,2);
fillellipse(106,194,3,2);
fillellipse(105,200,3,2);
fillellipse(103,208,3,2);
fillellipse(98,215,3,2);
fillellipse(92,219,3,2);
fillellipse(88,222,3,2);
//snake 73->94
fillellipse(285,87,3,2);
fillellipse(289,89,3,2);
fillellipse(295,91,3,2);
fillellipse(300,97,3,2);
fillellipse(305,104,3,2);
fillellipse(311,109,3,2);
fillellipse(320,113,3,2);
fillellipse(330,117,3,2);
fillellipse(338,122,3,2);
fillellipse(342,127,3,2);
fillellipse(345,132,3,2);
fillellipse(347,138,3,2);
fillellipse(350,142,3,2);
fillellipse(350,145,3,2);
fillellipse(298,93,3,2);
fillellipse(302,101,3,2);
fillellipse(307,107,3,2);
fillellipse(315,113,3,2);
fillellipse(325,112,3,2);
fillellipse(334,119,3,2);
fillellipse(340,125,3,2);
fillellipse(328,114,3,2);
//heads...

setcolor(7);
settextstyle(2,0,5);
x=72;
y=418;
num=1;
m=1;
c=1;
for(i=0;i<10;i++)
{
for(j=0;j<10;j++)
{
sprintf(cc,"%d",num);
num++;
outtextxy(x,y,cc);
if(c%2!=0)
{
    x+=38;
}
else
    x-=38;
}
if(m==2)
{
  m=1;
  c=1;
  x=70;
  y-=38;
}

else
{
    x=412;
    c=2;
    m=2;
    y-=38;
}

}

setcolor(1);
setcolor(5);


setfillstyle(SOLID_FILL,YELLOW);

if((co.x<174&&co.x>136) &&(co.y>364&&co.y<402))//Ladder 18-36
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==151 && t->b==301)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.y=301;
           outtextxy(40,40,"Wohoo! Ladder ");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}
else if((co1.x1<174&&co1.x1>136) &&(co1.y1>364&&co1.y1<402))//Ladder 18-36
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==151 && t->b==301)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.y1=301;
           outtextxy(40,40,"Wohoo! Ladder ");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}
else if((co.x<402 && co.x>364)&& (co.y>288&&co.y<326)) //ladder 32-69
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==377 && t->b==197)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=377;
           co.y=197;
           chk+=1;
           outtextxy(40,40,"Wohoo! Ladder ");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}
else if((co1.x1<402 && co1.x1>364)&& (co1.y1>288&&co1.y1<326)) //ladder 32-69
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==377 && t->b==197)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=377;
           co1.y1=197;
           chk1+=1;
           outtextxy(40,40,"Wohoo! Ladder ");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}

else if((co.x<288 && co.x>250)&& (co.y<288&&co.y>250)) //Ladder 46-87
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==301 && t->b==111)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=301;
           co.y=111;
           outtextxy(40,40,"Wohoo! Ladder ");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}

else if((co1.x1<288 && co1.x1>250)&& (co1.y1<288&&co1.y1>250)) //Ladder 46-87
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==301 && t->b==111)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=301;
           co1.y1=111;
           outtextxy(40,40,"Wohoo! Ladder ");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}








else if((co.x<174 && co.x>136)&& (co.y<174&&co.y>136)) //Ladder 78-97
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==187&& t->b==73)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=187;
           co.y=73;
           outtextxy(40,40,"Wohoo! Ladder ");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}


else if((co1.x1<174 && co1.x1>136)&& (co1.y1<174&&co1.y1>136)) //Ladder 78-97
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==187&& t->b==73)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=187;
           co1.y1=73;
           outtextxy(40,40,"Wohoo! Ladder ");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}

else if((co.x<326 && co.x>288)&& (co.y>250&&co.y<288))//snake 47-30
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==417 && t->b==339)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=417;
           co.y=339;
           outtextxy(40,40,"Oops Snake!!");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}

else if((co.x<136 && co.x>98)&& (co.y>136&&co.y<174))//snake 79-60
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==75 && t->b==225)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=75;
           co.y=225;
           outtextxy(40,40,"Oops Snake!!");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}

else if((co1.x1<326 && co1.x1>288)&& (co1.y1>250&&co1.y1<288))//snake 47-30
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==417 && t->b==339)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=417;
           co1.y1=339;
           outtextxy(40,40,"Oops Snake!!");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}

else if((co1.x1<136 && co1.x1>98)&& (co1.y1>136&&co1.y1<174))//snake 79-60
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==75 && t->b==225)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=75;
           co1.y1=225;
           outtextxy(40,40,"Oops Snake!!");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}
else if((co1.x1<288 && co1.x1>250)&& (co1.y1>61&&co1.y1<98))//snake 95-73
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==339 && t->b==149)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=339;
           co1.y1=149;
           outtextxy(40,40,"Oops Snake!!");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}


else if((co.x<174 && co.x>136)&& ((co.y<212)&&(co.y>174))) //snake 63-44
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==187 && t->b==263)
        {
           bar(co.x,co.y,co.x+10,co.y+10);
           co.x=187;
           co.y=263;
           outtextxy(40,40,"Oops snake!!");
           bar(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}


else if((co1.x1<288 && co1.x1>250)&& (co1.y1>61&&co1.y1<98))//snake 95-73
{

     t=head;
    while(t!=NULL)
    {
        if(t->a==339 && t->b==149)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=339;
           co1.y1=149;
           outtextxy(40,40,"Oops Snake!!");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }

}


else if((co1.x1<174 && co1.x1>136)&& ((co1.y1<212)&&(co1.y1>174))) //snake 63-44
{
    t=head;
    while(t!=NULL)
    {
        if(t->a==187 && t->b==263)
        {
           rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);
           co1.x1=187;
           co1.y1=263;
           outtextxy(40,40,"Oops snake!!");
           rectangle(t->a,t->b,(t->a)+10,(t->b)+10);
        }
        t=t->next;
    }
}

else{
bar(co.x,co.y,co.x+10,co.y+10);
rectangle(co1.x1,co1.y1,co1.x1+10,co1.y1+10);

}
 if(((co.x>61 && co.x<98) && (co.y<98 &&co.y>61)) || (co.y<73))
           {
             printf("Player 1 won the game!! ") ;
             delay(5000);
             exit(0);
           }

           if(((co1.x1>61 && co1.x1<98) && (co1.y1<98 &&co1.y1>61)))
           {
             printf("Player 2 won the game!! ") ;
             delay(5000);
             exit(0);
           }

getch();
cleardevice();
}








 // For random(), RAND_MAX

// Assumes 0 <= max <= RAND_MAX
// Returns in the closed interval [0, max]
/*long dice() {
  unsigned long
    // max <= RAND_MAX < ULONG_MAX so this is okay.
    num_bins = (unsigned long) 6 + 1,
    num_rand = (unsigned long) RAND_MAX + 1,
    bin_size = num_rand / num_bins,
    defect   = num_rand % num_bins;

  long x;
  do {
   x = rand();
  }
  // This is carefully written not to overflow
  while (num_rand - defect <= (unsigned long)x);

  // Truncated division is intentional
  printf("Your dice roll is %ld",(x/bin_size)+1);
  getch();
  return (x/bin_size)+1;
}*/

/*unsigned int dice()
{
    int r;
    const unsigned int range = 6;
    const unsigned int buckets = RAND_MAX / range;
    const unsigned int limit = buckets * range;


    do
    {
	r = rand();
    } while (r >= limit);
    printf("dice roll %d \n",1+(r/buckets));

    return 1 + (r / buckets);
}*/

int dice()
{
    int d;
    srand(time(NULL));
     d = 1+rand()%6;
    printf("your roll is :- %d\n",d);
    getch();
    return d ;
}
void move()
{
    int d ;
    int count;
    d = dice();
    /* if(((co.x>61 && co.x<98) && (co.y<98 &&co.y>61)) || (co.y<73))
           {
             printf("You won the game!! ") ;
             exit(0);
           }*/
    if(chk%2 == 0)
    {

        if(((co.x>61 && co.x<98) && (co.y<98 &&co.y>61)) || (co.y<73))
           {
             printf("You won the game!! ") ;
             exit(0);
           }
           /////
           else if(co.y<98 &&co.y>61 && co.x<288)
           {
               if(co.x<288 &&co.x>250)
               {
                   if(d>5)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co.x=co.x-(38*d);

               }

            else   if(co.x<250 &&co.x>212)
               {
                   if(d>4)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co.x=co.x-(38*d);

               }
              else if(co.x<212 &&co.x>174)
               {
                   if(d>3)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co.x=co.x-(38*d);

               }
              else if(co.x<174 &&co.x>136)
               {
                   if(d>2)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co.x=co.x-(38*d);

               }
              else if(co.x<136 &&co.x>98)
               {
                   if(d>1)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co.x=co.x-(38*d);

               }


           }

       else{
              while(d)
              {
               if(co.x > 75)
                 co.x = co.x-38;
              else
              {
                d--;
                co.x = 75 ;
                co.y = co.y-38;
                chk +=1 ;
                while(d)
                {
                    co.x = co.x + 38 ;
                    d--;
                }
                break;
              }
             d--;
            }
           }


    }
    else if(chk%2 != 0)
    {
      if(co.y<61)
      {
          printf("You won the game!!");
          exit(0);
      }
      else{
        while(d)
        {
            if(co.x < 415)
                co.x = co.x+38;
            else
            {
                d--;
                co.x = 415 ;
                co.y = co.y-38;
                chk +=1 ;
                while(d)
                {
                    co.x = co.x - 38 ;
                    d--;
                }
                break;
            }
            d--;
        }
      }

    }
    //return co ;
}
void move1()
{
    int d ;
    int count;
    d = dice();
    /* if(((co.x>61 && co.x<98) && (co.y<98 &&co.y>61)) || (co.y<73))
           {
             printf("You won the game!! ") ;
             exit(0);
           }*/
    if(chk1%2 == 0)
    {

        if(((co1.x1>61 && co1.x1<98) && (co1.y1<98 &&co1.y1>61)))
           {
             printf("You 22 won the game!! ") ;
             exit(0);
           }
           /////
           else if(co1.y1<98 &&co1.y1>61 && co1.x1<288)
           {
               if(co1.x1<288 &&co1.x1>250)
               {
                   if(d>5)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co1.x1=co1.x1-(38*d);

               }

            else   if(co1.x1<250 &&co1.x1>212)
               {
                   if(d>4)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co1.x1=co1.x1-(38*d);

               }
              else if(co1.x1<212 &&co1.x1>174)
               {
                   if(d>3)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co1.x1=co1.x1-(38*d);

               }
              else if(co1.x1<174 &&co1.x1>136)
               {
                   if(d>2)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co1.x1=co1.x1-(38*d);

               }
              else if(co1.x1<136 &&co1.x1>98)
               {
                   if(d>1)
                     printf("Invalid dice move! please roll again \n");
                   else
                    co1.x1=co1.x1-(38*d);

               }


           }

       else{
              while(d)
              {
               if(co1.x1 > 75)
                 co1.x1= co1.x1-38;
              else
              {
                d--;
                co1.x1 = 75 ;
                co1.y1 = co1.y1-38;
                chk1 +=1 ;
                while(d)
                {
                    co1.x1 = co1.x1 + 38 ;
                    d--;
                }
                break;
              }
             d--;
            }
           }


    }
    else if(chk1%2 != 0)
    {
      if(co1.y1<61)
      {
          printf("You won the game!!");
          exit(0);
      }
      else{
        while(d)
        {
            if(co1.x1 < 415)
                co1.x1 = co1.x1+38;
            else
            {
                d--;
                co1.x1 = 415 ;
                co1.y1 = co1.y1-38;
                chk1 +=1 ;
                while(d)
                {
                    co1.x1 = co1.x1 - 38 ;
                    d--;
                }
                break;
            }
            d--;
        }
      }

    }
    //return co ;
}
