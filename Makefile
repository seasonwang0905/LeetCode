
output: 2235_Add_Two_Integers.o
	gcc 2235_Add_Two_Integers.o -o test

main.o: 2235_Add_Two_Integers.c
	gcc -c 2235_Add_Two_Integers.c

clean:
	del *.o test.exe