#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

#define STR_SIZE 100

bool CheckAnagram(char* s1, char* s2)
{
    int counter1[26], counter2[26];
    memset(counter1, 0, 26*sizeof(int));
    memset(counter2, 0, 26*sizeof(int));

    if (strlen(s1)!=strlen(s2))
    {
        return false;
    }

    for (int i=0;i<strlen(s1);i++)
    {
            int index = s1[i]-'a';
            counter1[index]++;
    }
    for (int i=0;i<strlen(s2);i++)
    {
            int index = s2[i]-'a';
            counter2[index]++;
    }


    for (int i=0;i<26;i++)
    {
        if (counter1[i]!=counter2[i])
        {
            return false;
        }
        else continue;
    }

    return true;


}

int main(void)
{
    char s1[STR_SIZE];
    memset(s1, '\0', STR_SIZE*sizeof(char));
    char s2[STR_SIZE];
    memset(s2, '\0', STR_SIZE*sizeof(char));

    printf("Enter first string : ");
    scanf("%s", s1);

    printf("Enter second string : ");
    scanf("%s", s2);


    printf("%d\n", CheckAnagram(s1, s2));

    return 0;
}