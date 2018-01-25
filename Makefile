CC = g++

hello: hello.cpp
	$(CC) hello.cpp -o $@

clean:
	rm -f hello
