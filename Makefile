test : main.cpp
	g++ -o main main.cpp
	chmod 755 main

clean:
	rm main
