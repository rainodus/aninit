build: 
	gcc getrun.c -o run
install: build
	cp run /bin/runinit
