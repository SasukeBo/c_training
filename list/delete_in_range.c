#include "./list.c"

// 2.二.4 / 5
bool delete_in_range(SqList *list, int begin, int end)
{
  if (end <= begin)
  {
    printf("end must bigger than begin\n");
    return false;
  }
  if (list->length == 0)
  {
    printf("list cannot be empty\n");
    return false;
  }

  int k = 0;
  for (int i = 0; i < list->length; i++)
  {
    if (list->data[i] <= begin || list->data[i] >= end)
    {
      list->data[k] = list->data[i];
      k++;
    }
  }

  list->length = k;
  return true;
}