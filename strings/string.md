string is a sequence of character.

```cpp
char s = 's';
char ss[5] = {'j','o','h','n', '\0'};
char sss[] = {'j','o','h','n', '\0'};
char sass[5] = {'j','o',}; // remaining will fill with 0

printf("%c\n", s);

```

```cpp
// make string
char *s = "John";
char s[] = "John"; // implicitly in heap
char *ss[] = {"John", "Doe"};

printf("%s", ss[0]);
```