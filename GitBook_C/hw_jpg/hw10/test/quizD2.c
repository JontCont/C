int max(int t[])
{
  int i,num=-999;
  for(i=0;i<5;i++)
    if(num<t[i]) num=t[i];
  return (num);
}
