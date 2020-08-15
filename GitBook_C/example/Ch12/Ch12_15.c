#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  int i=0, len;
  float value=0;    // ノㄓ纗家览放 
  char buf[64]={0}; // 纗﹃皚 

  srand((unsigned)time(NULL));  // 眔╰参丁
                                // 砞﹚睹计贺 
  for(i=0; i<5; i++)
  {
    value = rand()%100 + 200;   // ノ睹计玻ネ 200-299    
    value /=10.0;               // 盢睹计埃 10 家览放块
    len=sprintf(buf, "ヘ玡放:%.1f",value);
    
    printf("癟:%d 癟ず甧:%s\n", len, buf);
  }
  return 0;
}
