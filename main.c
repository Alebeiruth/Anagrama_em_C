#include<stdio.h>
#include<string.h>
int main() {

  int counter1[] = {0, 0, 0, 0};
  int counter2[] = {0, 0, 0, 0};

  char s1[] = "dbb cccccaacb cdbababdcdcdab dcdad";
  char s2[] = "bbbcc bdddccccad cdbbaaacaccdabdd";
  int flag = 0;

  for (int i = 0; i < strlen(s1); i++) {
    if (s1[i] == 'a') {
      counter1[0]++;
    }
    else if (s1[i] == 'b'){
      counter1[1]++;
    }
    else if (s1[i] == 'c'){
      counter1[2]++;
    }
    else if (s1[i] == 'd'){
      counter1[3]++;
    }
    else if (s1[i] == ' '){
      continue;
    }

  }
  for (int i = 0; i < strlen(s2); i++) {
     if (s2[i] == 'a') {
       counter2[0]++;
     }
    else if (s2[i] == 'b'){
      counter2[1]++;
    }
    else if (s2[i] == 'c'){
      counter2[2]++;
    }
    else if (s2[i] == 'd'){
      counter2[3]++;
    }
    else if (s2[i] == ' '){
      continue;
    } 
  }
  
  for (int i = 0; i < 4; i++) {
    printf("%i\n", counter1[i]);
    printf("%i\n", counter2[i]);
    
    if (counter1[i-1] == counter2[i-1]) {
      flag == 0;
  } else {
      flag == 1;
  }
    }
  
  if (flag == 1) {
    printf("Anagrama!");
  } else {
    printf("Não Anagrama");
  }
}
