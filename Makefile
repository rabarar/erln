
all: erln

erln: erln.c
	gcc -o erln -I/usr/local/Cellar/erlang/19.3/lib/erlang/usr/include erln.c -L/usr/local/Cellar/erlang/19.3/lib/erlang/usr/lib -lerl_interface -lei 

clean:
	rm erln
