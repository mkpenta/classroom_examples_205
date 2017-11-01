/*
Michael Penta

    Redirect output to a file called out.txt
        ./main.exe  > out.txt
    
    redirect input so it comes from a file called numbers.txt
        ./main.exe < numbers.txt 
    
    redirect IO to and from files
        ./main.exe < numbers.txt > out.txt

*/

#include <stdio.h>

int main() {
	int sum =0;
	int n = 0;
	for(int i = 0; i < 5; i++)
	{
        puts("Enter a number");
        scanf("%d",&n);
        sum += n;
	}
	
    printf("the total is %d\n", sum);
}
