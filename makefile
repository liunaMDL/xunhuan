OPT=-g

1.exe:1.c 2.c
	${LINK.c} ${OPT} -o $@ $^
clean:
	rm -rf *.exe