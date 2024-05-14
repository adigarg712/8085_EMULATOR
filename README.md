## 8085 Emulator in C++

This project is an emulator for the Intel 8085 microprocessor implemented in C++. The emulator allows you to execute 8085 assembly language programs by simulating the behavior of the 8085 processor.

### Features

- **Emulation**: Simulates the functionality of the Intel 8085 microprocessor.
- **Assembler**: Supports assembly language programs written for the 8085.
- **User-Defined Header Files**: Implements custom header files for handling 8085 instructions and operations.

### Project Structure

The repository is structured as follows:

- **`src/`**: Contains the source code for the 8085 emulator.
  - **`main.cpp`**: Entry point of the emulator.
  - **`8085.h`**: Header file defining the 8085 processor class.
  - **`instructions.h`**: Header file defining functions for each 8085 instruction.
  - **`memory.h`**: Header file defining memory-related operations.
- **`examples/`**: Directory for storing example 8085 assembly programs.
- **`README.md`**: Instructions and information about the project.

### Usage

1. **Clone the Repository**:
   ```bash
   git clone https://github.com/your_username/8085-emulator.git
   cd 8085-emulator
   ```

2. **Compile and Run**:
   Compile the emulator using a C++ compiler:
   ```bash
   g++ src/main.cpp -o 8085_emulator
   ```

3. **Execute 8085 Programs**:
   - Write or use existing 8085 assembly programs and save them in the `examples/` directory.
   - Run the emulator with the assembled program:
     ```bash
     ./8085_emulator examples/your_program.asm
     ```

### Customization

To add or modify 8085 instructions or behaviors:

- Edit the `8085.h` and `instructions.h` header files to include new instructions or modify existing ones.
- Implement additional features or functionalities in the `src/` directory as needed.

### Resources

- **Intel 8085 Microprocessor Datasheet**: Refer to the official Intel 8085 datasheet for detailed information on instructions and architecture.

### Contributing

Contributions to this project are welcome! Feel free to submit pull requests for bug fixes, new features, or improvements.

### License

This project is licensed under the [MIT License](LICENSE).

### Acknowledgements

- This project was inspired by the need to understand and simulate the behavior of the Intel 8085 microprocessor for educational purposes.

### Contact

For questions or feedback, please reach out to (mail to:adigarg166.com).
