
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
  
// function for printing
// message as colored character
void printMsg()
{
    // auto detection
    int gdriver = DETECT,gmode,i;
  
    // initialize graphics mode
    initwindow(600,500,"Tutorial");
    for (i=3; i<7; i++)
    {
        // setcolor of cursor
        setcolor(i);
          
        // set text style as
        // settextstyle(font, orientation, size)
        settextstyle(i,0,i);
          
        // print text at coordinate x,y;
        outtextxy(100,20*i,"Swapnil \n \n \n \n");
          
        delay(500);
    } 
    delay(99000);
}
  
// driver program
int main()
{
    printMsg();
    return 0;
}
