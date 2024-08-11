
//hash table item struct
typedef struct{
  char* key;
  char* value;
} ht_item;

//hash tabel additional info struct
typedef struct{
  int size;
  int count;
  ht_item** items;
} ht_hash_table;
