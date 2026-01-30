// CHEAT: Reformat
   #include <stdio.h>
   main()
  {
 int n, m, a;

  long long int urt, urgun, hariu;
 scanf("%d %d %d", &n, &m, &a);

urt = n / a + (n % a > 0);

  urgun = m / a + (m % a > 0);
 hariu = urt * urgun;
   printf("%lld", hariu);

   }