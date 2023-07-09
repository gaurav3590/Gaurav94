// file managment in c
#include<stdio.h>
int main()
{
    FILE *fp;
    // fp  = fopen("D:\harshil",+w);
    fp = fopen("Skill.txt","w+");
    fprintf(fp,"welcome to skill qude - decode your skill here...\n");
    fputs("you are entering to learming C language now...\n",fp);
    fputs("And c++ language now...\n",fp);
    
    fclose(fp);
}


/*

r  open a text file to read mode
w  open a text file to write mode
a  open a text file to append (read and write) mode

*/