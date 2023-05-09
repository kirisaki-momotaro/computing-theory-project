file: mylexer.l correct1.th myanalyzer.y  cgen.c 
	
	bison -d -v -r all myanalyzer.y
	flex mylexer.l
	gcc -o mycomp lex.yy.c myanalyzer.tab.c cgen.c   -lfl
	./mycomp < correct1.th > correct1.c
	
