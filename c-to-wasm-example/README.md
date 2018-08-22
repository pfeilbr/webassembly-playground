## Compile C program to WASM and run inbrowser

based on <https://webassembly.org/getting-started/developers-guide/>

### Steps

1. install [emsdk](https://github.com/juj/emsdk)
2. build `emcc hello.c -s WASM=1 -o hello.html`
3. start server `emrun --no_browser --port 8080 .`
4. visit <http://localhost:8080/hello.html>
    ![](https://www.evernote.com/l/AAGmOXK8o1lPQZeUOGCDEyuIq-TeRxHeQysB/image.png)