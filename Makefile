BUILD_DIR := build

.PHONY: all build clean run rebuild

all: build

build:
	cmake -B $(BUILD_DIR) -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
	cmake --build $(BUILD_DIR) -j$(nproc)
	ln -sf $(BUILD_DIR)/compile_commands.json .

run: build
	./$(BUILD_DIR)/Bouncer

clean:
	rm -rf $(BUILD_DIR)

rebuild: clean build
