#include <stdlib.h>
#include <stdbool.h>

#define InitSize 100
#define MaxSize 100
#define MallocSize 50

typedef struct
{
  int data[InitSize];
  int length;
} SqList;

typedef struct
{
  int *data;
  int maxLength, length;
} SeqList;

SqList newSqList()
{
  SqList list;
  list.length = 0;
  return list;
}

SeqList newSeqList()
{
  SeqList list;
  list.data = (int *)malloc(sizeof(int) * InitSize);
  list.maxLength = InitSize;
  list.length = 0;
  return list;
}

int expandSeqList(SeqList *list)
{
  list->maxLength += MallocSize;
  int *loc = (int *)malloc(sizeof(int) * list->maxLength);
  for (int i = 0; i < list->length; i++)
  {
    loc[i] = list->data[i];
  }
  return 0;
}