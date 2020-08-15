#include <stdio.h>

enum {Sun, Mon, Tue, Wed, Thu, Fri, Sat} daysOfWeek;

int main(void)
{
  char *eName[]={"Sunday",  // 一周七天的英文名稱 
                 "Monday","Tuesday","Wednesday",
                 "Thursday","Friday","Saturday",
                };  
  char *cName[]={"星期日",  // 一周七天的中文名稱 
                 "星期一","星期二","星期三",
                 "星期四","星期五","星期六",
                };

  printf(" 中文    英文\n");
  // 輸出一周中每天的中英文名稱 
  for(daysOfWeek=Sun; daysOfWeek<=Sat; daysOfWeek++)
       printf("%6s  %s\n",cName[daysOfWeek],
                          eName[daysOfWeek]);
  
  return 0;
}
