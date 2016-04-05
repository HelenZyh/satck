stack:stack.cpp
	g++ -o $@ $^ -g
.PHONY:clean
clean:
	rm stack
