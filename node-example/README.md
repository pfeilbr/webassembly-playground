## Running WebAssembly in NodeJS Example

based on [Run wast (WebAssembly) in node](https://gist.github.com/kanaka/3c9caf38bc4da2ecec38f41ba24b77df)

> be sure to install prerequisites from gist

## Steps

1. compile [wast](https://developer.mozilla.org/en-US/docs/WebAssembly/Understanding_the_text_format) to `wasm`. `wat2wasm addTwo.wast`
2. run. `node ./runwasm.js addTwo.wasm addTwo 2 3`