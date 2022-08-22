#include<stdio.h>
int main()
{
char alp;
printf("enter");
scanf("%c",&alp);
if(alp=='a'||alp=='e'||alp=='i'||alp=='o'||alp=='u'||alp=='A'||alp=='E'||alp=='I'||alp=='O'||alp=='U')
    {
        printf("vowel");
}
else{
    printf("consonant");
}
//((alp='a'||'e'||'i'||'o'||'u')||(alp='A'||'E'||'I'||'O'||'U'))?(printf("VOWEL")):(printf("CONSONANT"));
}
