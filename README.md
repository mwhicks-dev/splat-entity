# splat-entity: Entity layer for the SPlat Beta architecture

This repository compiles the Entity layer of the SPlat Beta architecture, and interfaces with the [Application Layer](https://www.github.com/mwhicks-dev/splat-application/) directly. 

## Table of contents

* Introduction
* Installation

## Introduction

This class library contains the fundamental objects used in SPlat engine development. Although SPlat originally stood for *Simple PLatformer*, it is now more than that - but the basic goals are the same. Basic platform game mechanisms will be included as defaults and examples on which a forked engine can be built.

There is nothing to test in this layer since there are just not enough concretes. Higher-level layers will implement the lower-level abstractions, and then they will be tested there.

## Installation

This software layer is built using CMake. The minimum version supported is CMake 3.14, which you can verify by running:

```bash
cmake --version
```

Once satisfactory, you can build the Entity layer using

```bash
mkdir -p cmake && cd cmake && cmake .. && cmake -- build .
```

which will generate this CMake project in a separate `cmake/` directory. If you are running on *nix this should generate `splat-entity.a` while Windows will generate `splat-entity.lib`.

## Usage

This library is intended to interface with the [Application Layer](https://www.github.com/mwhicks-dev/splat-application/) directly and doesn't do much on its own. The main reason that I have separated this into its own repository is so that I can ensure strict separation of my software layers for practice.

## Contributing

Feel free to fork this or make an issue if you want something added. I'll be adding an Event entity later.

## License

MIT License. See [here](https://www.github.com/mwhicks-dev/splat-entity/LICENSE)

## Acknowledgements

* NC State University, where I created the SPlat Alpha engine that I am rebuilding here as a more seasoned developer.
* [Clean Architecture](https://www.amazon.com/Clean-Architecture-Craftsmans-Software-Structure/dp/0134494164), my favorite software book and the foundation for SPlat Beta's architecture.
* The [Gang of Four Design Patterns](https://www.amazon.com/Design-Patterns-Elements-Reusable-Object-Oriented/dp/0201633612) which I am also utilizing in this project.
* [READMINE](https://mhucka.github.io/readmine/), the model for this README (which I use loosely).
