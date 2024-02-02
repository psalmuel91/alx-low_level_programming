/**
 * struct list_s: singly linked list
 * @str: string
 * @len: String length
 * @next: Next node
 *
 * Descript: singly linked list node struct
 *
 * All files in this project use this format
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
