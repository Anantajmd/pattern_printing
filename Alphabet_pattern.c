/*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : Print the star(*) pattern as per given input string (string must be in capitale)
*

   *   
  * *  
 ***** 
*     *

*/

#include<stdio.h>
void print(int a,int b,int c);
main()
{
	int a,b,c;
	char ch;
	while(1)
	{
		ch=getchar();
		switch(ch)
		{
			case 'A':
			print(2568,8382,0);
			break;
			case 'B':
			print(2334,2334,30);
			break;
			case 'C':
			print(316,258,60);
			break;
			case 'D':
			print(4382,4386,30);
			break;
			case 'E':
			print(286,286,30);
			break;
			case 'F':
			print(286,286,2);
			break;
			case 'G':
			print(284,3354,20);
			break;
			case 'H':
			print(4386,4414,34);
			break;
			case 'I':
			print(1086,1032,62);
			break;
			case 'J':
			print(1086,1290,4);
			break;
			case 'K':
			print(1298,1286,18);
			break;
			case 'L':
			print(258,258,30);
			break;
			case 'M':
			print(10914,8393,65);
			break;
			case 'N':
			print(4898,6442,34);
			break;		
			case 'O':
			print(2316,2322,12);
			break;
			case 'P':
			print(1286,778,2);
			break;
			case 'Q':
			print(2316,2842,108);
			break;
			case 'R':
			print(1286,778,10);
			break;
			case 'S':
			print(284,2060,14);
			break;
			case 'T':
			print(1086,1032,8);
			break;
			case 'U':
			print(2322,2322,12);
			break;
			case 'V':
			print(8385,2594,8);
			break;
			case 'W':
			print(8385,6985,0);
			break;
			case 'X':
			print(2594,2568,34);
			break;
			case 'Y':
			print(2594,1032,8);
			break;
			case 'Z':
			print(2110,520,62);
			break;
		}
		//usleep(500000);
	}
}

/** 
 ***************************************************************************************
 * void print(int a,int b,int c);
 *
 * @brief - print the star pattern according to give integer value a,b and c
 * 			
 * @return <void> : void
 * 		
 * DESCRIPTION:
 * 		accept three integer value and print star * pattern
 * 
 * @bug  Known Issues:
 *			None
 * 
 **************************************************************************************
*/

void print(int a,int b,int c)
{
	int i,j,k,d,data;
	for(i=1;i<=3;i++)
	{
		
		if(i==1)
		data=a  ;
		else if(i==2)
			data=b;
		else if(i==3)
			data=c;
		for(j=0;j<=13;j++)
		{
			d=(data>>j)&1;
		if(d==0)
			printf(" ");
		else
			printf("*");
		if(j==6)
		{
			printf("\n");
			usleep(200000);}
	
		}
		printf("\n");
	}
		
}
