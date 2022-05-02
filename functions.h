#ifndef FUNCTIONS_H_INCLUDED
#define FUNCTIONS_H_INCLUDED

char *strinp();

char coding(char *ttt);

void tomorse();
const char *alphabet[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
const char *numbers[]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};



/*typedef struct BTree {
    char chr;
    struct BTree *left, *right;
} BTree;*/
#endif // FUNCTIONS_H_INCLUDED
