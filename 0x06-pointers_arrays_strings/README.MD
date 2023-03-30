# 0x05-pointers_arrays_strings

## 0-strcat.c
the function starts by iterating through dest until it reaches the null terminator. Then, it iterates through src and appends each character to dest. Finally, it adds a null terminator to the end of dest and returns a pointer to its beginning.
 we use pointer arithmetic to increment the dest and src pointers while dereferencing them at the same time. This can potentially make the code slightly more efficient since pointer arithmetic is generally faster than using the ++ operator
