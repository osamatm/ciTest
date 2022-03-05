PHONY=all, clean

all:
	g++ -fdiagnostics-color=always -g test.cpp -I../googletest-release-1.10.0/googletest/include -I../../src \
	-L../googletest-release-1.10.0/build/lib -lgtest -pthread -o ./output/test

clean:
	rm ./output/test