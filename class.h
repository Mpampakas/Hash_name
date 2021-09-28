#ifndef CLASS_H_INCLUDED
#define CLASS_H_INCLUDED
class hash_name
{
public:
    char *name=new char[30];
    unsigned int msize;
    void EraseLetters();
    unsigned long long Hash();
private:
    unsigned int LetterToWord(char);
};


#endif // CLASS_H_INCLUDED
