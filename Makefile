export CLANG        = /usr/bin/clang++
export CPP_STANDARD = c++20
export EXECUTABLE   = out

.DEFAULT_GOAL      := build


debug-build:
	$(CLANG) -g main.cpp -o $(EXECUTABLE) -std=$(CPP_STANDARD) -fcolor-diagnostics -fansi-escape-codes

build:
	$(CLANG) main.cpp -o $(EXECUTABLE) -std=$(CPP_STANDARD) -fcolor-diagnostics -fansi-escape-codes

run:
	./$(EXECUTABLE)

clean:
	rm $(EXECUTABLE)