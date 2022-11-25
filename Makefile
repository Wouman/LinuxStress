

all:
	g++ LinuxStress.cpp -o l-stress -fopenmp

install: l-stress
	cp l-stress /usr/bin

clean:
	rm l-stress
