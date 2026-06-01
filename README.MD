# Bouncer
A C++20 game built with [SFML 3.1.0](https://github.com/SFML/SFML).

## Requirements
- CMake 3.28+
- A C++20-compatible compiler (GCC, Clang, MSVC)
- Git (for fetching SFML via FetchContent)

## Build
```bash
make
```

## Run
```bash
make run
```

## Other Commands
| Command | Description |
|---|---|
| `make build` | Configure and compile |
| `make run` | Build and run |
| `make clean` | Remove build directory |
| `make rebuild` | Clean and build from scratch |

## Project Structure
```
Bouncer/
├── CMakeLists.txt
├── Makefile
├── Include/        # Header files (.hpp)
├── Source/         # Source files (.cpp)
└── Build/          # Generated build output (git-ignored)
```

## Dependencies
| Library | Version | Purpose |
|---|---|---|
| SFML | 3.1.0 | Graphics & Audio |

Dependencies are fetched automatically via CMake `FetchContent` — no manual installation needed.
