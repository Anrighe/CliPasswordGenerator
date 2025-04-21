# CliPasswordGenerator

### <b>Features</b>

- Generates random passwords using the ascii charset
- Customizable password length
- Simple command line interface

![Usage Example](./docs/2025-04-21%2022-09-47.gif)

---

### <b>Dependencies</b>

- C++ 17 (possibly earlier versions, but not tested)
- g++
- Make (optional for building)

---

### <b>Usage</b>

#### By default, calling the program will generate a default password a 16 character long password.

```bash
./passwordGenerator
```

#### You can also provide a custom length for the password:

```bash
./passwordGenerator <length>
```

`Note: The length must be a positive integer.`

---

### <b>Compilation</b>

#### To compile the program, you can run the following command:

```bash
make
```

#### To clean up the build files, run:

```bash
make clean
```

#### Or you can download the precompiled binary from the [releases section](https://github.com/Anrighe/CliPasswordGenerator/releases).

