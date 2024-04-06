#include <stdio.h>
int main()
{
  int p, c, m;
  float t;
  printf("Enter the physics marks");
  scanf("%d", &p);

  printf("Enter the chemistry marks");
  scanf("%d", &c);

  printf("Enter the maths marks"),
      scanf("%d", &m);

  t = p + c + m;
  if ((p > 33) && (c > 33) && (m > 33) && (t >= 120))
    printf("You are pass and your total percentage is %f",t/3);

  else
    printf("You are fail and your total percentage is %f",t/3);
  
  return 0;
}