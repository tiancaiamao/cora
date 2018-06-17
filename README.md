## Install

    npm install corascript

## Run the REPL

    ./bin/cora
    
## Bootstrap from scratch

First, generate `.kl` files using the `.cora` files.

    cd script
    ../bin/cora
    (load "bootstrap.cora")
    
The generated file will be in the `klambda` directory.
    
Then, generate the `lib/cora.js` file, there is a script for it:

    npm run generate
    
## FFI

See [FFI](doc/ffi.md)
    
## Learn

* [Official website of Shen](http://shenlanguage.org/)
* [The Shen OS Kernel Manual](http://shenlanguage.org/learn-shen/index.html)
* [The Official Shen Standard](http://www.shenlanguage.org/learn-shen/shendoc.htm)
* [Shen Community Wiki](https://github.com/Shen-Language/wiki/wiki)
* [The Book of Shen: third edition](https://www.amazon.co.uk/Book-Shen-Third-Mark-Tarver/dp/1784562130)

## License

- Shen, Copyright © 2010-2015 Mark Tarver - [License](http://www.shenlanguage.org/license.pdf).
- shen-go, Copyright © 2017-2018 Arthur Mao under [BSD 3-Clause License](http://opensource.org/licenses/BSD-3-Clause).
