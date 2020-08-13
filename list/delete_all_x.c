#include "./list.c"

// 2.二.3
int delete_all_x(SqList *list, int x)
{
  int k = 0;
  for (int i = 0; i < list->length; i++)
  {
    if (x != list->data[i])
    {
      list->data[k] = list->data[i];
      k++;
    }
  }
  list->length = k;

  return 0;
}