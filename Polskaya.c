#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void push(int);
int pop(void);

 int main() {
     int i, pervi;
     char c;

     otvet = 0;

     while(1>0)
     {


      scanf("%c", &c);
      if (isdigit(c)) push(c-'0');
      else

        switch (c)
        {
        case '-':
            pervi = pop();
            push(pop() - pervi);
            break;
        case '*':
            push(pop() * pop());
            break;
        case '+':
            push(pop()+pop());
            break;
        case '/':
            pervi = pop();
            push(pop()/pervi);
            break;
        case '=':
            printf("%d", pop());
           break;
        default:
            break;
        }
     }
     return 0;
 }

 int res[1000];
 int nomer;


  void push(int chislo){
        int element = chislo;
        res[nomer++] = element;
    }

    int pop(void){
        return res[--nomer];
    }
