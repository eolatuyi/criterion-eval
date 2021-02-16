# criterion-eval
An evaluation of avoiding unnecessary variation in style of instantiating a C unit tester for embedded software.

# Evalution notes

## Platform
- Linux Raspbian Distro

## Setup
1. Install meson `pip3 install meson`
2. Install ninja `pip3 install ninja`
3. Clone Criterion `git clone --recursive https://github.com/Snaipe/Criterion`
4. install openssl (cmake dependency)
5. sudo apt-get install libssl-dev (cmake dependency)
6. install Cmake
7. From your local repo root, run `meson build` then `ninja -C build` to build criterion
8. ninja -C build install
9. developed makefile to include built criterion library in `Third_Party/Criterion/build/src` into lib path
10. defined criterion test in `test_unit_under_test.c`
11. built and linked criterion with code to be tested (removed main). From repo root, run `make clean && make && ./build/criterion_eval`

### Future work
- [ ] Creat example that exercises different usage of Criterion for c unit testing
- [ ] Run criterion unit test on a non-linux target e.g. FreeRTOS kernel on TIVA C Series CM4-F
