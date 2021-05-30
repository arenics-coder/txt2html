txt2html: txt2html.o
	gcc txt2html.o -o txt2html

txt2html.o: txt2html.c
	gcc -c txt2html.c -o txt2html.o

clear:
	rm *.o
