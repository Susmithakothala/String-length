# include < stdio .h >
# include < string .h >
main ()
{
char a [20]= " Program ";
char b [20]={ ’P’,’r’,’o’,’g’,’r’,’a’,’m’,’\0 ’};
char c [20];
printf (" Enter string : ");
gets ( c );
printf (" Length of string a = %d \n", strlen ( a ));
printf (" Length of string b = %d \n", strlen ( b ));
printf (" Length of string c = %d \n", strlen ( c ));
}
