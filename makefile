

1.exe:1.c 2.c
	gcc $^ -o $@



clean:
	rm -rf *.exe