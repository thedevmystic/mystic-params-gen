<!-- Heading -->
<div align="center">
  <img
    src="https://res.cloudinary.com/dqpszz96x/image/upload/v1770104320/mystic_ka7sis.svg"
    width="350px"
    alt="Mystic Framework"
  />
  <h1 style="font-size: 1.75rem; margin: 0.625rem 0;">
    mystic-params-gen
  </h1>
  <p>
    An automatic parameters library generator for Mystic Framework.
  </p>
</div>

<!-- Badges -->
<p align="center">
  <!-- Project Information -->
  <img
    src="https://img.shields.io/badge/C++23-00599C?style=flat-square&logo=cplusplus&logoColor=white"
    alt="Language: C++23"
  />
  <img
    src="https://img.shields.io/badge/Apache%202.0-444444?style=flat-square&logo=apache&logoColor=white"
    alt="License: Apache 2.0"
  />
  <img
    src="https://img.shields.io/badge/Ver_0.0.1-007acc?style=flat-square"
    alt="Version: 0.0.1"
  />
  <!-- OS Support -->
  <br />
  <img
    src="https://img.shields.io/badge/Windows-555555?style=flat-square&logo=data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCAyNCAyNCI+PHBhdGggZmlsbD0id2hpdGUiIGQ9Ik0wIDBoMTEuNXYxMS41SDBWMHptMTIuNSAwaDExLjV2MTEuNUgxMi41VjB6TTAgMTIuNWgxMS41VjI0SDBWMTIuNXptMTIuNSAwSDI0VjI0SDEyLjV2LTExLjV6Ii8+PC9zdmc+"
    alt="Windows"
  />
  <img
    src="https://img.shields.io/badge/macOS-555555?style=flat-square&logo=apple&logoColor=white"
    alt="macOS"
  />
  <img
    src="https://img.shields.io/badge/Linux-555555?style=flat-square&logo=linux&logoColor=white"
    alt="Linux"
  />
  <br />
  <!-- Compiler Support -->
  <img
    src="https://img.shields.io/badge/GCC-333333?style=flat-square&logo=gnu&logoColor=white"
    alt="GCC"
  />
  <img
    src="https://img.shields.io/badge/Clang-333333?style=flat-square&logo=llvm&logoColor=white"
    alt="Clang"
  />
  <img
    src="https://img.shields.io/badge/MSVC-333333?style=flat-square&logo=data:image/svg+xml;base64,PHN2ZyB4bWxucz0iaHR0cDovL3d3dy53My5vcmcvMjAwMC9zdmciIHZpZXdCb3g9IjAgMCA2NCA2NCI+PHBhdGggZmlsbD0iI2ZmZmZmZiIgZmlsbC1ydWxlPSJldmVub2RkIiBkPSJNNDIgOCBMMjAgMjQgTDEyIDE4IEw2IDIyIFY0MiBMMTIgNDYgTDIwIDQwIEw0MiA1NiBMNTggNDYgVjE4IFogTTQyIDE2IEw1MCAyMCBWNDUgTDQyIDQ2IEwyNCAzNCBMMTQgNDAgVjI0IEwyNCAzMCBaIi8+PC9zdmc+"
    alt="MSVC"
  />
  <br />
  <br />
  <a href="https://github.com/thedevmystic" >
    <img
      src="https://img.shields.io/badge/MADE_WITH_%E2%9D%A4%EF%B8%8F_BY_THEDEVMYSTIC-1f425f?style=for-the-badge"
      alt="made with love by thedevmystic"
    />
  </a>
</p>

<!-- Main Links -->
<p align="center">
  <a href="#usage">View Usage</a>
  •
  <a href="https://github.com/thedevmystic/mystic-params-gen/issues/new?assignees=&labels=bug&projects=&template=bug_report.md">
    Report Bug
  </a>
  •
  <a href="https://github.com/thedevmystic/mystic-params-gen/issues/new?assignees=&labels=bug&projects=&template=request_feature.md">
    Request Feature
  </a>
  •
  <a href="https://github.com/thedevmystic/mystic-params-gen/discussions/new">
    Ask Question
  </a>
  •
  <a href="https://github.com/thedevmystic">Follow me!</a>
</p>

<!-- CTA -->
<p align="center">
  Find the project helpful? Consider starring it and sharing it with your friends too!
</p>

<!-- Table of Contents (TOC) -->
<details>
<summary>Table of Contents (click to show)</summary>

- [About the Project](#about-the-project)
  - [Introduction](#introduction)
  - [Features](#features)
- [Support](#support)
  - [Supported OSes](#supported-oses)
  - [Supported Compilers](#supported-compilers)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [From Source](#from-source)
  - [Via FetchContent](#via-fetchcontent)
  - [Via MBT](#via-mbt)
- [Usage](#usage)
  - [Via CMake Macro](#via-cmake-macro)
  - [Via Functions](#via-functions)
- [Roadmap](#roadmap)
- [Contributing](#contributing)
- [License](#license)

</details>

# About the Project

> An automatic parameters library generator for Mystic Framework.

## Introduction

`mystic-params-gen` is an automatic parameters library generator for Mystic Framework.
It is written in C++23 and utilizes `nlohmann::json` for JSON parsing. It is modern, type-safe,
and — most importantly — blazing fast. It is built for performance!

> [!IMPORTANT]
> Though it is written in C++23, it supports both modules and headers. So, you can use it in
> either way.

## Features

`mystic-params-gen` is a modern and fast C++ utility. It features:

- **Modern Syntax:** Written in C++23 for type-safety and expressive syntax.

- **Performance:** Utilizes `nlohmann::json` for performance and super-fast parsing.

- **Simple to use:** Uses JSON format for easy parameters serialization for the end-user.

# Support

`mystic-params-gen` has been tested on the following platforms.

> [!WARNING]
> If you use `mystic-params-gen` on other platforms, you're on your own.

## Supported OSes

`mystic-params-gen` supports these OSes:
- Windows
- macOS
- Linux

## Supported Compilers

`mystic-params-gen` supports these compilers:

- GCC
- Clang
- MSVC

# Getting Started

To get started with `mystic-params-gen`, follow these steps.

## Prerequisites

- C++23+ Compatible Compiler:
  - GCC 14.1+
  - Clang 18.0+
  - MSVC 17.11+
- CMake: CMake v3.30+
- Python: Python v3.x

> [!NOTE]
> Python is required only if you are using MBT (Mystic Build Tool).

## From Source

1. **Clone the Repository:**

```bash
git clone https://github.com/thedevmystic/mystic-params-gen
```

2. **Build the Project:**

```bash
cmake -S . -B build
cmake --build build
```

3. **Install the Project (Optional):**

```bash
cmake --install build
```

> [!IMPORTANT]
> Install might need sudo on macOS and Linux.

4. **Use it with `find_package`:**

```cmake
# Find the package
find_package(mystic_params_gen)

# Link the package to program
target_link_libraries(my_program PRIVATE
  mystic::params_gen
)
```

## Via FetchContent

1. **Include the Package:**

```cmake
include(FetchContent)
```

2. **Declare the Target:**

```cmake
FetchContent_Declare(
  mystic_params_gen
  GIT_REPOSITORY https://github.com/thedevmystic/mystic-params-gen
  GIT_TAG        main # [or any version tag]
)
```

3. **Make it Available:**

```cmake
FetchContent_MakeAvailable(mystic_params_gen)
```

4. **Link it:**

```cmake
target_link_libraries(my_program PRIVATE
  mystic::params_gen
)
```

## Via MBT

> [!IMPORTANT]
> MBT is a future plan and will be implemented later.

> [!NOTE]
> MBT (Mystic Build Tool) is a python-based build tool used for Mystic Framework.
> You can use it if you don't want to manage all dependencies.

1. **Install MBT:**

```bash
pip3 install mystic-build-tool
```

2. **Build the Project:**

- **From Source:**

> [!NOTE]
> This requires you to clone the repository via `git clone`.

```bash
mbt --from-source path/to/mystic-params-gen
```

- **From Remote:**

> [!NOTE]
> This doesn't require you to clone the repository but it requires an active internet connection
> because it clones the repository first.

```bash
mbt --from-remote mystic-params-gen
```

3. **Install:**

```bash
mbt --install path/to/generated-install-folder
```

> [!IMPORTANT]
> Install might need sudo on macOS and Linux.

> [!IMPORTANT]
> By default it only installs `mystic-params-gen` on the system. If you want to install its
> dependencies too, use:

```bash
mbt --install-all path/to/generated-install-folder
```

# Usage

`mystic-params-gen` is designed to be used as a build-time tool. But you can extend its logic too.

## Via CMake Macro

```cmake
mystic_generate_parameters(
  INPUT     <input filename>
  OUTPUT    <output filename>
  NAMESPACE <optional namespace>
)
```

**Breakdown of Parameters:**
- `INPUT`: Input file containing JSON parameters (`parameters.json`).
- `OUTPUT`: Output file generated via `params_gen` and linked via CMake (`mystic_user_parameters.hpp`).
- `NAMESPACE`: Optional namespace (`mystic::params`).

## Via Functions

1. **Reading Parameters:**

```cpp
#include "mystic/params_gen/parser.hpp"

using namespace mystic::params_gen;

int main() {
  // Create Parser object
  Parser parser;

  // Parse JSON file into JSON object
  JsonObject parsed_json = parser.Parse("parameters.json");

  // Getting a specific layer
  Layer layer = parser.GetLayer("base");

  // Getting a parameter
  Parameter parameter = parser.GetParameter("base", "expose-internals");

  return 0;
}
```

**Breakdown of Arguments:**

1. `Parser::Parse()`:

> This function parses the entire JSON file into JsonObject.

```cpp
// For reference see: parser.hpp

namespace mystic::params_gen {

JsonObject Parser::Parse(
  const std::string_view& input,
  bool ignore_errors = false
);

} // namespace mystic::params_gen
```

- `input`: Input JSON file.
- `ignore_errors`: Whether to ignore JSON parsing errors or not.

> [!IMPORTANT]
> Parser saves the last parsed JsonObject as member, so subsequent calls such as
> `Parser::GetLayer` can be made without specifying JsonObject.

2. `Parser::GetLayer()`:

> This function reads a specific layer from the parsed JSON.

```cpp
// For reference see: parser.hpp

namespace mystic::params_gen {

Layer Parser::GetLayer(
  const std::string_view& layer_name,
  const JsonObject& json_object = json_object_
);

} // namespace mystic::params_gen
```

- `layer_name`: The name of the layer.
- `json_object`: The JsonObject from which layer will be extracted.

> [!IMPORTANT]
> You should either first parse a file or give a JsonObject to the function. Otherwise it will
> return a `Layer::Unknown`.

3. `Parser::GetParameter()`:

> This function reads a specific parameter from the parsed JSON.

```cpp
// For reference see: parser.hpp

namespace mystic::params_gen {

Parameter Parser::GetParameter(
  const std::string_view& layer_name,
  const std::string_view& param_name,
  const JsonObject& json_object = json_object_
);

} // namespace mystic::params_gen
```

> [!IMPORTANT]
> You should either first parse a file or give a JsonObject to the function. Otherwise it will
> return a `Parameter::Unknown`.

> [!IMPORTANT]
> While `Parameter` may look like an `enum class`, it is a nested structure with helper functions.


2. **Writing to File:**

```cpp
#include "mystic/params_gen/writer.hpp"

using namespace mystic::params_gen;

int main() {
  // First parse JSON file into JsonObject
  JsonObject parsed_json = ...

  // Create Writer object
  Writer writer(parsed_json);
  
  // Write it to the file
  bool success = writer.write("mystic_user_parameters.hpp");

  return 0;
}
```

**Breakdown of Arguments:**

1. `Writer::Writer()`:

> Creates a Writer object with a parsed JsonObject.

```cpp
// For reference see: writer.hpp

namespace mystic::params_gen {

Writer::Writer(const JsonObject& parsed_json);

} // namespace mystic::params_gen
```

- `parsed_json`: The JsonObject returned by `Parser::Parse()`.

2. `Writer::Write()`

> Writes to the output file.

```cpp
// For reference see: writer.hpp

namespace mystic::params_gen {

Writer::Write(
  const std::string_view& output,
  const std::string_view& namespace = "mystic::params",
  const std::vector<Layer>& layers_to_ignore = {}
);

} // namespace mystic::params_gen
```

- `output`: Output parameters file.
- `namespace`: Optional namespace.
- `layers_to_ignore`: Layers to ignore in parameters parsing.

> [!TIP]
> We have some other useful functions for writer such as:

3. `Writer::SetJsonObject()`:

> If you want to change the JsonObject to be written.

```cpp
// For reference see: writer.hpp

namespace mystic::params_gen {

Writer::SetJsonObject(const JsonObject& json_object);

} // namespace mystic::params_gen
```

- `json_object`: The overriding JsonObject.

4. `Writer::WriteHeader()`:

> This is one of the hidden gems, it generates header guards of the file.

```cpp
// For reference see: writer.hpp

namespace mystic::params_gen {

Writer::WriteHeader(const std::string_view& filename);

} // namespace mystic::params_gen
```

- `filename`: The given filename.

> For example, calling `WriteHeader("cool_file.hpp")` will generate:

```cpp
// This file is auto-generated by mystic-params-gen.
// DO NOT MODIFY this file directly, as it will be REWRITTEN in future runs.

#ifndef COOL_FILE_HPP_
#define COOL_FILE_HPP_

#endif // COOL_FILE_HPP_
```

5. `Writer::WriteNamespace()`:

> This function writes the namespace of the generated parameters file.

```cpp
// For reference see: writer.hpp

namespace mystic::params_gen {

Writer::WriteNamespace(const std::string_view& given_namespace);

} // namespace mystic::params_gen
```

- `given_namespace`: The given namespace.

> For example, after `WriteHeader("cool_file.hpp")`, user called `WriteNamespace("super::cool")`,
> it will generate:

```cpp
// This file is auto-generated by mystic-params-gen.
// DO NOT MODIFY this file directly, as it will be REWRITTEN in future runs.

#ifndef COOL_FILE_HPP_
#define COOL_FILE_HPP_

namespace super::cool {

} // namespace super::cool

#endif // COOL_FILE_HPP_
```

# Roadmap

The progress made in the project:

- [x] Initial Commit.

- [ ] Parser for JSON file to JsonObject.

- [ ] Validating JsonObject & Parameters.

- [ ] Writer API to generate the final file.

- [ ] Completing the API.

# Contributing

If you find this project worth contributing, then feel free to contribute! Every contribution is
warmly welcome! Just before that read the [Contributing Guidelines](./CONTRIBUTING.md).

# License

`mystic-params-gen` is licensed under
[Apache 2.0 License](https://www.apache.org/licenses/LICENSE-2.0).

This project also utilizes [nlohmann::json](https://github.com/nlohmann/json) which is licensed
under [MIT](./licenses/LICENSE-nlohmann-json).
