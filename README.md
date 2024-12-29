# Learn C++ the Hard Way

## The Basics

### 01: Gearing Up

- Setting up development on Windows has traditionally been extremely painful.
- To combat this, there are a number of Powershell scripts that install the necessary packages/software

This first script installs the following :-

1. git
2. winget
3. chocolatey
4. Windows Terminal
5. WizFile
6. CMake
7. Geany and Geany Plugins
8. winlibs
9. conan
10. Meson

```powershell
irm https://learncodethehardway.com/setup/base.ps1 -outfile base.ps1
powershell -executionpolicy bypass .\base.ps1
irm https://learncodethehardway.com/setup/cpp.ps1 -outfile cpp.ps1
powershell -executionpolicy bypass .\cpp.ps1
```

To test this, run the following :-

```powershell
git clone https://git.learnjsthehardway.com/learn-code-the-hard-way/game-dev-starter-pack.git
cd game-dev-starter-pack
powershell -executionpolicy bypass .\scripts\setup.ps1
meson compile -C builddir
.\builddir\sfmldemo
```

### 03: Building with Meson

A basic `meson.build` file looks like this :-

```meson
project('learn-cpp-the-hard-way', 'cpp',
    default_options: ['cpp_std=c++20'])

executable('ex02', 'ex02.cpp')
```

To configure a build directory, use this command:

```bash
meson setup --reconfigure builddir
```

To build everything using Meson, use this command:

```bash
meson compile -C builddir
```

To clean your build first, run this before the above:

```bash
meson compile --clean -C builddir
```

- or -

```bash
rm -recurse -force builddir
meson setup --reconfigure builddir
```

### 05: Printing to the Screen

- use `cout` to output to standard output
- use `cerr` to output to error output

### 08: Strings

Convert a number to a string using the `std::to_string()` function

There are a number of functions to convert strings back to their number types as follows :-

- `std::stoi`   - String to int
- `std::stol`   - String to long
- `std::stoll`  - String to long long
- `std::stoul`  - String to unsigned long
- `std::stoull` - String to unsigned long long
- `std::stof`   - String to float
- `std::stod`   - String to double
- `std::stold`  - String to long double

### 09: Using the `fmt` library

To add a dependency, in this case `fmt`, to Meson, add this line below the project() part.

`fmt = dependency('fmt')`

Then add this as the third parameter of the `executable` call, as such.

`executable('ex09', 'ex09.cpp', dependencies: fmt)`

The next thing you need to do is get Meson to download `fmt`

```bash
mkdir subprojects
meson wrap install fmt
```

Currently, our builds are set up to use *dynamic linking*, but we need static linking.
*Dynamic linking* is where your program doesn't actually contain the code for the `fmt` library, instead it references a `.so`, `.dylib`, or `.dll` file on your computer. The problem with this is it requires your program knows where all these libraries are located.

To enable static linking, you need to rebuild your `builddir` with a new configuration

```bash
rm -recurse -force builddir
meson setup --prefer-static --default-library=static builddir
meson compile -C builddir
```
