#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"functions.h"



char *strinp()
{
int cnt = 0;
    char *line = (char*) malloc(sizeof(char) * 1);
    line[0] = '\0';
    char newchar;
    scanf("%c", &newchar);
    while (scanf("%c", &newchar) == 1 && newchar != '\n') {
        /* array extension */
        char *newarr = (char*) malloc(sizeof(char) * (cnt+1+1));
        for (int i = 0; i < cnt; ++i)
        newarr[i] = line[i];
        newarr[cnt] = newchar;
        newarr[cnt+1] = '\0';
        free(line);
        line = newarr;
        ++cnt;
    }
    return line;
}

char coding(char *ttt)
{
int p;
char ttt1[1000];
stat(ttt);
p=0;
printf("\n");
  while(ttt[p]!='\0')
  {
 if(ttt[p]!=' '&&(!isdigit(ttt[p]))) //is digit fucntion to check is it digit or not
 {
     printf("%s ",alphabet[toupper(ttt[p])-65]); //toupper converts lowercase to uppercase
 }
    if(ttt[p]==' ')
    {
     printf("   ");
    }
    if(isdigit(ttt[p])&&ttt[p]!=' ')
    {
      printf("%s ",numbers[ttt[p]-48]);
    }
   p++;
  }
printf("\n1.Continue\n2.Extracting\n9.Go back");
  return printf("\n");
}

/*BTree *build(BTree *root, char chr) {
    if (root == NULL) {
        BTree *new_node = (BTree*) malloc(sizeof(BTree));
        new_node->chr = chr;
        new_node->left = new_node->right = NULL;
        return new_node;
    }}*/

char *copystring(char const *str) {
    /* calculate the length of the string */
    int length = strlen(str);

    /* allocate space, +1 for the terminating zero */
    char *newstr;
    newstr = (char*) malloc((length + 1) * sizeof(char));
    if (newstr == NULL)
        return NULL;    /* :( */

    /* copy the letters of the string, now there is enough space for that */
    strcpy(newstr, str);
    return newstr;
}
int length(char *str)
{int i=0;
    while(str[i]!='\0')
    {
      i++;
    }
  return i;
}
