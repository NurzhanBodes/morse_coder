#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include"functions.h"


int main()
{
    int sel0,sel1,sel2,i=0,k,n,l1=0,l2=0,l3=0,l4=0,l5=0;
    char c,*text;
    char *dd[6][13]={0};
     while(i<=26)
  {
    int l;
    l=length(alphabet[i]);
    if(l==1)
    {
      dd[l][l1]=copystring(alphabet[i]);
      l1++;
    }
    else if(l==2)
    {
      dd[l][l2]=copystring(alphabet[i]);
      l2++;
    }
    else if(l==3)
    {
      dd[l][l3]=copystring(alphabet[i]);
      l3++;
    }
    else if(l==4)
    {
      dd[l][l4]=copystring(alphabet[i]);
      l4++;
    }
    i++;
  }

  for(k=0;k<10;k++)
  {
    dd[5][k]=copystring(numbers[k]);
  }

    printf("Welcome to Morse code decoder program. \n1. Code text to Morse\n2. Decode Morse cipher to text\n3. Help\n4. Morse alphabet\n0. Exit\n");
    do {
        scanf("%d", &sel0);
        switch (sel0) {
            case 1:
                printf("Enter your text: ");
                while(sel2!=9&&sel2!=1&&sel2!=2){
                text=strinp();
                coding(text);
                scanf("%d", &sel2);}

                switch (sel2) {
                case 1:printf("Continue");break;
                case 2:printf("Extracting");break;
                case 9:printf("\n\n1. Code text to Morse\n2. Decode Morse cipher to text\n3. Help\n4. Morse alphabet\n0. Exit\n");continue;
                }
                continue;//later when I will understand binary tree in C it will be used for translation

            case 2:
  printf("decoding"); break;//later when I will understand binary tree in C it will be used for translation

            case 3:printf("\n1. How this translator works?\n2. How should I enter words?\n3. How should I enter Morse code?\n9. Go back\n");//several frequently questions will be there
                do
            {
                scanf("%d",&sel1);//nested switch, answers for questions will be in txt files
                    switch(sel1)
                {
                    case 1:{
                        printf("\n\n");
                        FILE *fp = fopen("help1.txt", "r");
                        while (fscanf(fp, "%c", &c) == 1)
                        printf("%c", c);
                        fclose(fp);
                        printf("\n\n");
                        };break;
                    case 2:{
                        printf("\n\n");
                        FILE *fp = fopen("help2.txt", "r");
                        while (fscanf(fp, "%c", &c) == 1)
                        printf("%c", c);
                        fclose(fp);
                        printf("\n\n");
                        };break;
                    case 3:{
                        printf("\n\n");
                        FILE *fp = fopen("help3.txt", "r");
                        while (fscanf(fp, "%c", &c) == 1)
                        printf("%c", c);
                        fclose(fp);
                        printf("\n\n");
                        };break;
                    case 9:printf("\n\n1. Code text to Morse\n2. Decode Morse cipher to text\n3. Help\n4. Morse alphabet\n0. Exit\n");continue;
                    default:printf("Wrong input\n");printf("\n1. How this translator works?\n2. How should I enter words?\n3. How should I enter Morse code?\n9. Go back\n");break;
                }
            }while(sel1!=9); break;

            case 4:{
                        FILE *fp = fopen("alphabet.txt", "r");//it opens alphabet from txt file
                        while (fscanf(fp, "%c", &c) == 1)
                        printf("%c", c);
                        fclose(fp);
                        printf("\n\n");}
                do{
                scanf("%d",&sel1);
                    switch(sel1)
                {
                    case 9:continue;
                    default:printf("Wrong input\n");break;
            }}while(sel1!=9);printf("\n1. Code text to Morse\n2. Decode Morse cipher to text\n3. Help\n4. Morse alphabet\n0. Exit\n"); break;
            case 0:break;
            default: printf("Wrong input\n");printf("Welcome to Morse code decoder program. \n1. Code text to Morse\n2. Decode Morse cipher to text\n3. Help\n4. Morse alphabet\n0. Exit\n"); break;
        }
        printf("\n");
    } while (sel0!= 0);

    return 0;
}
