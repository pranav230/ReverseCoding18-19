//permutations  of two strings such that their lexicographicalorder is maintained
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int c=0;
void printIlsRecur (char *str1, char *str2, char *iStr, int m,
					int n, int i)
{
	if (m==0 && n==0)
    {
        printf("%s\n", iStr) ;
        c++;
    }
	if (m != 0)
	{
		iStr[i] = str1[0];
		printIlsRecur (str1 + 1, str2, iStr, m-1, n, i+1);
	}
	if (n != 0)
	{
		iStr[i] = str2[0];
		printIlsRecur(str1, str2+1, iStr, m, n-1, i+1);
	}
}
void printIls (char *str1, char *str2, int m, int n)
{
char *iStr= (char*)malloc((m+n+1)*sizeof(char));
iStr[m+n] = '\0';
printIlsRecur (str1, str2, iStr, m, n, 0);
free(iStr);
}

int main()
{
	char str1[100];
	char str2[100];
	printf("\nEnter 1st String\n");
	scanf("%s",str1);
	printf("\nEnter 2nd String\n");
	scanf("%s",str2);
	printf("\n");
	printIls (str1, str2, strlen(str1), strlen(str2));
	printf("\nTotal : %d\n\n",c);
	getch();
	return 0;
}
