#include <stdio.h>
int main(void){
  char q[100]="KMZYDXO ZGZBVIO YDIIZM QJDXZ";
  int i,j,len=strlen(q);

  for(i=0;i<25;i++){
    for(j=0;j<len;j++){
      if('A'<=q[j]&&q[j]<'Z')q[j]++;
      else if(q[j]=='Z')q[j]='A';
    }
    printf("%s\n",q);
  }
  return 0;
}
