#include <stdio.h>
#include <string.h>
void reverseString(char* str, int start, int end) 
{
    while (start < end) 
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}
char* reverseWords(char* sentence) 
{
    int length = strlen(sentence);
    int start = 0;
    for (int i = 0; i < length; i++) 
    {
        if (sentence[i] == ' ' || sentence[i] == '\0') 
        {
            reverseString(sentence, start, i - 1);
            start = i + 1;
        }
    }
    return sentence;
}

int main() 
{
    char inputSentence[1000];
    printf("Enter a sentence: ");
    fgets(inputSentence, sizeof(inputSentence), stdin);

    if (inputSentence[strlen(inputSentence) - 1] == '\n') 
    {
        inputSentence[strlen(inputSentence) - 1] = '\0';
    }
    char* reversedSentence = reverseWords(inputSentence);
    printf("Reversed sentence: %s\n", reversedSentence);
    return 0;
}
