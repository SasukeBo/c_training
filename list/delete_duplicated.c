#include "./list.c"

// 2.二.6
// 删除有序顺序表中的重复元素
int delete_duplicated(SqList *list)
{
  if (list->length == 1)
  {
    return 0;
  }

  int k = 1;
  for (int i = 1; i < list->length; i++)
  {
    if (list->data[i - 1] != list->data[i])
    {
      list->data[k] = list->data[i];
      k++;
    }
  }
  list->length = k;
  return 0;
}