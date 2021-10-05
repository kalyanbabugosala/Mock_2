all:3d_array.o pattern.o string_compare.o create_BST.o
	gcc 3d_array.c pattern.c string_compare.c create_BST.c -o all
3d_array.o:3d_array.c
	gcc -c 3d_array.c
pattern.o:pattern.c
	gcc -c pattern.c
string_compare.o:string_compare.c
	gcc -c string_compare.c
create_BST.o:create_BST.c
	gcc -c create_BST.c
	
clear:
	rm -f all
