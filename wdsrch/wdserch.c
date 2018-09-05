    #include<stdio.h>
    #include<string.h>
    int main()
    {
          FILE *fp;
           char filename[]="words.txt",line[200],search_string[]="great";
           fp=fopen(filename,"r");


            /* if(!fp)


            {


                    perror("could not find the file


    ");


                    exit(0);


            }*/


            while ( fgets ( line, 200, fp ) != NULL ) /* read a line */


            {


                    if(strstr(line,search_string))


                    printf("match found\n");
                   ;


            }


            fclose ( fp );


            return 0;


    }