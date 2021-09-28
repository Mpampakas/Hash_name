//notes for test


#include <iostream>
#include <cstring>
#include "class.h"

void hash_name::EraseLetters()
{
    int c = strlen(name),j=0;

    for (int i=0;i<c;i++)
    {
        if(name[i]>=65 && name[i]<=90)
        {
            name[j]=name[i]+32;
            j++;
        }
        else if(name[i]>=97 && name[i]<=122)
            {
                name[j++]=name[i];
            }
    }
    name[j]='\0';
}
unsigned int hash_name::LetterToWord(char Let)
{
    if((Let>=97 && Let<=101)||(Let>=118&&Let<=122))
        return Let*6779;
    else if(Let>=102&&Let<=110)
            return Let*211;
        else
            return Let*7919;
}
unsigned long long hash_name::Hash()
{
    unsigned long long result=0;
    int j=0,c=strlen(name);
    if(c<1)
    {
        result=30134291371;
    }
    for(;j<c;j++)
    {
        result+=2897*LetterToWord(name[j]);
    }

    result%=1013433227;
    return result%msize;
}

