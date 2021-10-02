## UVA10008_Whats_Cryptanalysis_8
+ website : https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=12&page=show_problem&problem=949
```c++
for(int i=0;i<length;i++)
{
  if(isalpha(msg[i]))
  {
    num[toupper(msg[i])-'A']++; //전부 대문자로 한 숫자에서 첫번째 A를 빼면 몇번째 알바벳인지 나옴; 
  }
}
```
This Question also have to use toupper to check how many A...Z in there;
----
```c++
for(int i=0;i<26;i++) //판단식; 
{
  for(int j=i;j<26;j++)
  {
    if(num[i]<num[j])
    {
      .....
```
And used bubble sort to sort;
