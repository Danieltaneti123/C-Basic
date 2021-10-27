#include<stdio.h>
#include<limits.h>
void main()
{
	printf("short int:\nsigned: %hd to %hd\n",SHRT_MIN, SHRT_MAX);
	printf("unsigned:%d to %hu",0, USHRT_MAX);
	
	printf("\nint signed: %d to %d",INT_MIN,INT_MAX);
	printf("\nint unsigned: %d to %u",0,UINT_MAX);
	
	printf("\nlong int signed: %ld to %ld",LONG_MIN,LONG_MAX);
	printf("\nlong int unsigned: %d to %lu",0,ULONG_MAX);
	
	printf("\nlonglong int signed: %lli to %lli",LONG_LONG_MIN,LONG_LONG_MAX);
	printf("\nlonglong int unsigned: %i to %llu",0,ULONG_LONG_MAX);
}
