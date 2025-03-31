# Makefile for compiling Cube 1 with Emscripten

# Compiler settings
EMCC = emcc
CXXFLAGS = -O2 -s USE_SDL=2 -s WASM=1 -s ALLOW_MEMORY_GROWTH=1
INCLUDES = -Iinclude
SOURCES = src/main.cpp src/cube1.cpp
OUTPUT = build/cube1.html

# Preload data directory to be available in the virtual FS as /data
PRELOAD = --preload-file data@/data

all:
	@mkdir -p build
	$(EMCC) $(CXXFLAGS) $(INCLUDES) $(SOURCES) $(PRELOAD) -o $(OUTPUT)

clean:
	rm -rf build