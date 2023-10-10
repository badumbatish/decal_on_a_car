<h2>Dev</h2>

Run
```bash
cmake -S . -B  build 
```
at the root tree to create build files.

Run
```bash
cmake --build build
```
at the root tree to build the build files.

Run
```bash
cd build && ./main && cd ..
```
to run the **main** executable

Run
```bash
cd build && ctest && cd ..
```
to go to build folder and test and return to root.

Run
```bash
rm -rf build
```
to erase the build folder (similar to make clean).