#include<stdio.h>

#include<stdlib.h>

#include<string.h>

main()

{

  char C[5000];

  char ouput;

  printf("�п�J�@�Ӧr��G"); 

  while(scanf("%s",C)==1) 

      {

         printf("�B�z�L���r�ꬰ�G",ouput);

		 int a,N=strlen(C); 

         for(a=0;a<N;a++)

             if(C[a]>='a')  

               printf("%c",C[a]-'a'+'A'); 

             else 

               printf("%c",C[a]-'A'+'a'); 

      } 

	system("pause");

    return 0;  

}
