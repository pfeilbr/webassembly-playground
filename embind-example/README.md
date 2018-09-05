## [Embind](https://kripken.github.io/emscripten-site/docs/porting/connecting_cpp_and_javascript/embind.html#embind) Example

* compile `emcc --bind -o example.js example.cpp MyClass.cpp`
* run webserver `emrun --no_browser --port 8080 .`
* visit <http://localhost:8080/example.html>
    > open browser console to see output
