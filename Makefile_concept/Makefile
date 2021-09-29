CC = gcc
CFLAGS = -c -Wall


Area: main.o Area_circle.o Area_rectangle.o
	$(CC) -o $@ $^  #$^ for not including duplicates and $+ for not icluding duplicates.
main.o: main.c
	$(CC) $(CFLAGS) $<
Area_circle.o: Area_circle.c	
	$(CC) $(CFLAGS) $<
Area_rectangle.o: Area_rectangle.c	
	$(CC) $(CFLAGS) $<


clean:
	rm -f *.o
	rm -f Area
