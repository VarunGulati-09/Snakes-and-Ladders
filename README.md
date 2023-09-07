# Snake and Ladder Game in C++

This is a simple implementation of the classic Snake and Ladder game in C++. This README file will guide you through the setup, rules, and how to play the game.

## Table of Contents

- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [How to Play](#how-to-play)
- [Rules](#rules)
- [Contributing](#contributing)

## Getting Started

### Prerequisites

Before you start, make sure you have the following installed on your system:

- C++ Compiler (e.g., g++)
- Terminal or Command Prompt

### Installation

1. Clone this repository to your local machine:

   ```bash
   git clone https://github.com/varungulati-09/snakes-and-ladders.git
   ```

2. Navigate to the project directory:

   ```bash
   cd snakes-and-ladders-cpp
   ```

3. Compile the C++ code:

   ```bash
   g++ main.cpp -o snakes_and_ladders
   ```

4. Run the game:

   ```bash
   ./snakes_and_ladders
   ```

## How to Play

1. Start the game by running the executable as instructed in the installation section.

2. You will be prompted to enter the number of players. Enter the desired number (2 or more) and press Enter.

3. The game will start, and each player takes turns rolling a six-sided die.

4. Players move their tokens (representing their positions on the board) according to the number rolled.

5. If a player lands on a ladder, they climb to a higher position. If they land on a snake, they slide down to a lower position.

6. The game continues until one of the players reaches or exceeds the winning position (usually 100).

7. The player who reaches or exceeds the winning position first wins the game.

8. Enjoy the game!

## Rules

- Players take turns rolling a six-sided die and moving their tokens on the game board.
- Ladders allow players to climb to higher positions on the board.
- Snakes force players to slide down to lower positions.
- The first player to reach or exceed the winning position (usually 100) wins the game.

## Contributing

If you would like to contribute to this project or report issues, please follow these steps:

1. Fork the repository on GitHub.

2. Create a new branch with a descriptive name for your feature or fix.

3. Make your changes and commit them with clear and concise commit messages.

4. Push your branch to your forked repository.

5. Create a pull request to merge your changes into the main repository.
