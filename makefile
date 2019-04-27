all:libuuid.a test_uuid 

libuuid.a:uuid4.o
	ar -rc libuuid.a uuid4.o

uuid4.o:uuid4.h uuid4.c
	g++ -c uuid4.h uuid4.c

test_uuid:libuuid.a test_uuid.cpp
	g++ -o test_uuid  test_uuid.cpp -I. -L. -luuid

.PHONY:clean
clean:
	rm -f *.exe *test_out* *.a *.o *.gch
	rm -r .objs bin obj
	rm -rf .objs bin obj