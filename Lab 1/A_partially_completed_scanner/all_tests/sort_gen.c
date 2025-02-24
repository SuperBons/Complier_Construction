#include <stdio.h>
#define read(x) scanf("%d",&x)
#define write(x) printf("%d\n",x)
#define print(x) printf(x)

int cse141array_1[16];
int cse141array_2[16];
int cse141array_3[16];
int cse141array_4[16];

void cse141populate_arrays(void)
{
    cse141array_1[0] = 0; cse141array_2[0] = 15; cse141array_3[0] = 5; cse141array_4[0] = 13;
    cse141array_1[1] = 1; cse141array_2[1] = 14; cse141array_3[1] = 5; cse141array_4[1] = 9;
    cse141array_1[2] = 2; cse141array_2[2] = 13; cse141array_3[2] = 5; cse141array_4[2] = 12;
    cse141array_1[3] = 3; cse141array_2[3] = 12; cse141array_3[3] = 5; cse141array_4[3] = 1;
    cse141array_1[4] = 4; cse141array_2[4] = 11; cse141array_3[4] = 5; cse141array_4[4] = 0;
    cse141array_1[5] = 5; cse141array_2[5] = 10; cse141array_3[5] = 5; cse141array_4[5] = 14;
    cse141array_1[6] = 6; cse141array_2[6] = 9; cse141array_3[6] = 5; cse141array_4[6] = 3;
    cse141array_1[7] = 7; cse141array_2[7] = 8; cse141array_3[7] = 5; cse141array_4[7] = 2;
    cse141array_1[8] = 8; cse141array_2[8] = 7; cse141array_3[8] = 5; cse141array_4[8] = 11;
    cse141array_1[9] = 9; cse141array_2[9] = 6; cse141array_3[9] = 5; cse141array_4[9] = 8;
    cse141array_1[10] = 10; cse141array_2[10] = 5; cse141array_3[10] = 5; cse141array_4[10] = 6;
    cse141array_1[11] = 11; cse141array_2[11] = 4; cse141array_3[11] = 5; cse141array_4[11] = 4;
    cse141array_1[12] = 12; cse141array_2[12] = 3; cse141array_3[12] = 5; cse141array_4[12] = 5;
    cse141array_1[13] = 13; cse141array_2[13] = 2; cse141array_3[13] = 5; cse141array_4[13] = 10;
    cse141array_1[14] = 14; cse141array_2[14] = 1; cse141array_3[14] = 5; cse141array_4[14] = 7;
    cse141array_1[15] = 15; cse141array_2[15] = 0; cse141array_3[15] = 5; cse141array_4[15] = 15;
}

void cse141print_arrays(void)
{
    int cse141idx, cse141bound;
    cse141bound = 16;
    print("Array_1:\n");
    cse141idx = 0;
    while (cse141idx < cse141bound)
    {
	write(cse141array_1[cse141idx]);
	cse141idx = cse141idx + 1;
    }

    print("\nArray_2:\n");
    cse141idx = 0;
    while (cse141idx < cse141bound)
    {
	write(cse141array_2[cse141idx]);
	cse141idx = cse141idx + 1;
    }

    print("\nArray_3:\n");
    cse141idx = 0;
    while (cse141idx < cse141bound)
    {
	write(cse141array_3[cse141idx]);
	cse141idx = cse141idx + 1;
    }

    print("\nArray_4:\n");
    cse141idx = 0;
    while (cse141idx < cse141bound)
    {
	write(cse141array_4[cse141idx]);
	cse141idx = cse141idx + 1;
    }
    print("\n");    
}

int main() 
{
    int cse141idx, cse141bound, cse141temp;
    cse141bound = 16;

    cse141populate_arrays();
    cse141print_arrays();

    cse141bound = 16;

    cse141idx = 0;
    while (cse141idx < cse141bound - 1)
    {
	if (cse141array_1[cse141idx] > cse141array_1[cse141idx + 1])
	{
	    cse141temp = cse141array_1[cse141idx];
	    cse141array_1[cse141idx] = cse141array_1[cse141idx + 1];
	    cse141array_1[cse141idx + 1] = cse141temp;
	    cse141idx = 0;
	    continue;
	}
	
	cse141idx = cse141idx + 1;
    }

    cse141idx = 0;
    while (cse141idx < cse141bound - 1)
    {
	if (cse141array_2[cse141idx] > cse141array_2[cse141idx + 1])
	{
	    cse141temp = cse141array_2[cse141idx];
	    cse141array_2[cse141idx] = cse141array_2[cse141idx + 1];
	    cse141array_2[cse141idx + 1] = cse141temp;
	    cse141idx = 0;
	    continue;
	}
	
	cse141idx = cse141idx + 1;
    }


    cse141idx = 0;
    while (cse141idx < cse141bound - 1)
    {
	if (cse141array_3[cse141idx] > cse141array_3[cse141idx + 1])
	{
	    cse141temp = cse141array_1[cse141idx];
	    cse141array_3[cse141idx] = cse141array_3[cse141idx + 1];
	    cse141array_3[cse141idx + 1] = cse141temp;
	    cse141idx = 0;
	    continue;
	}
	
	cse141idx = cse141idx + 1;
    }

    cse141idx = 0;
    while (cse141idx < cse141bound - 1)
    {
	if (cse141array_4[cse141idx] > cse141array_4[cse141idx + 1])
	{
	    cse141temp = cse141array_4[cse141idx];
	    cse141array_4[cse141idx] = cse141array_4[cse141idx + 1];
	    cse141array_4[cse141idx + 1] = cse141temp;
	    cse141idx = 0;
	    continue;
	}
	
	cse141idx = cse141idx + 1;
    }

    cse141print_arrays();
}

