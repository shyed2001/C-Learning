/*@Shyed Shahriar Housaini
Copyright: @uthor*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <windows.h>
///#include <threads.h>
#include <conio.h>
#include <dos.h>
#include <direct.h>
#include <math.h>
#include <stdbool.h>
#include "validtrianglecheck2.c"





int x, y, z, A, B;


int valid_triangle_check( x , y , z );

int main()
{
   ///int x, y, z, A, B;

printf (" Please enter the first arm length of triangle :  ");

scanf(" %d", &x);

printf (" Please enter the second arm length of triangle :  ");

scanf(" %d", &y);


printf (" Please enter the third arm length of triangle :  ");

scanf(" %d", &z);

printf (" Result\n ");

 /** if ( x <=0 || y <= 0 || z <= 0 )
    {
        printf(" Invalid Length");
        //return 0 ;
    }

 else if ( x + y <z || y + z < x || z + x < y )
    {
        printf(" Invalid Triangle ");
        //return 0 ;
    }


 else
    {
        printf(" Valid Triangle ");
        //return 1 ;
    } **/


      if ( valid_triangle_check( x , y , z ) == true )

  {
      printf (" valid triangle\n");
  }

  else ///( valid_triangle_check( x , y , z ) == false )

  {
      printf (" Invalid triangle\n");
  }

return 0;

}








/**

if ( valid_triangle_check( x , y , z ) == 1 )

  {
      printf (" valid triangle\n");
  }

  else ///( valid_triangle_check( x , y , z ) == false )

  {
      printf (" Invalid triangle\n");
  }

**/


/**
int valid_triangle_check( x , y , z )

{

 if ( x <=0 || y <= 0 || z <= 0 )
    {
        printf(" Af ");
        return 0 ;
    }

 else if ( x + y <z || y + z < x || z + x < y )
    {
        printf(" Bf ");
        return 0 ;
    }


 else
    {
        printf(" t ");
        return 1 ;
    }

}

**/

/** else if ( x + y <z  )
    {
        printf(" Bf1 ");
        return false ;
    }

else if (y + z < x)
    {
        printf(" Bf2 ");
        return false ;
    }
else if ( z + x < y )
    {
        printf(" Bf3 ");
        return false ;
    }**/
