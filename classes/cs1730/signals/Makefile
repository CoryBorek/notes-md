compile: sig1.out sig2.out sig3.out sig4.out sig5.out

sig1.out: sig1.c
	gcc -Wall sig1.c -o sig1.out

sig2.out: sig2.c
	gcc -Wall sig2.c -o sig2.out

sig3.out: sig3.c
	gcc -Wall sig3.c -o sig3.out

sig4.out: sig4.c
	gcc -Wall sig4.c -o sig4.out

sig5.out: sig5.c
	gcc -Wall sig5.c -o sig5.out

sig6.out: sig6.c
	gcc -Wall sig6.c -o sig6.out
run: sig1.out
	./sig1.out
run2: sig2.out
	./sig2.out
run3: sig3.out
	./sig3.out
run4: sig4.out
	./sig4.out
run5: sig5.out
	./sig5.out
clean:
	rm sig1.out
	rm sig2.out
	rm sig3.out
	rm sig4.out
	rm sig5.out
