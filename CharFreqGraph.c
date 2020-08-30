#include<stdio.h>
#include<ctype.h>

int main()
{
    int CurrentChar;
    int CharAmmount[26];
    for (int i = 0; i <= 26; i++)
        CharAmmount[i] = 0; 
    while((CurrentChar = getchar()) != '\n')
        if (isalpha(CurrentChar))
            CharAmmount[tolower(CurrentChar) - 97]++;
    for (int i = 0; i < 26; i++)
        {
            printf("%c: ", i + 97);
            for (int CharCopy = CharAmmount[i];CharCopy > 0; CharCopy--)
                printf("#");
            printf("\n");
        }
    return 0;
}
