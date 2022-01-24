compile: main.c
	 gcc  main.c -o k


run: k
	 ./k


clean: k
	 rm k
