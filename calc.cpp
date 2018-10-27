#include <stdio.h>

int main(void){
  int a, b, ans;
  char op;

  scanf("%d %c %d", &a, &b, &opt);
  switch (op){
    case '+':
       ans = a + b ;
        break; // + Logic here
    case '-':
       ans = a - b; 
        break; // - Logic here
    case '*':
        ans = a * b;
        break; // * Logic here
    case '/': 
        ans = a / b;
        break; // / Logic here
  }
  //Print the result here
    printf(ans);
}
