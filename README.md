# 42 Common Core: first projects

My first projects of the 42 Common Core, all written in C: rebuilding parts of the standard library, then algorithms, a small 2D game and UNIX processes.

![C](https://img.shields.io/badge/C-00599C?logo=c&logoColor=white)
![Unix](https://img.shields.io/badge/UNIX-processes_%26_pipes-555)

## Projects

| Project | What it is | Key concepts |
|---|---|---|
| [**Libft**](Libft) | My own C library of 43 functions: libc reimplementations (`strlen`, `memcpy`, `atoi`…), extra string helpers (`split`, `itoa`, `strjoin`…) and a linked-list toolkit | Memory, strings, linked lists, static libraries |
| [**ft_printf**](Printf) | A reimplementation of `printf` handling `%c %s %p %d %i %u %x %X %%` | Variadic functions, number formatting in any base |
| [**get_next_line**](GNL) | Reads a file one line at a time, whatever the buffer size, and can follow several file descriptors at once (bonus) | Static variables, buffers, `read()` |
| [**push_swap**](PushSwapFini) | Sorts a list of integers with two stacks and a limited set of moves (`sa`, `pb`, `ra`, `rra`…), using as few moves as possible | Algorithm design, complexity, doubly linked lists |
| [**so_long**](so_long) | A small top-down 2D game: pick up every collectible, then reach the exit | MiniLibX, event hooks, map parsing, path checking |
| [**pipex**](FINALPIPEX) | Reproduces the shell pipe `< file1 cmd1 \| cmd2 > file2`, and chains any number of commands in the bonus | `pipe`, `fork`, `dup2`, `execve`, file descriptors |

## Highlights

### push_swap
- Dedicated solutions for 2, 3 and 5 numbers
- Larger inputs are sorted by **chunks**: values are pushed to stack B range by range (chunks of 18 for 100 numbers, 50 for 500), then pushed back to A from biggest to smallest
- Strict input checks: non-numeric values, duplicates, `int` overflow

```bash
cd PushSwapFini && make
./push_swap 3 2 5 1 4
```

### so_long
- Map file (`.ber`) validated: rectangular, closed by walls, one player, one exit, at least one collectible, and **a valid path** to every collectible and to the exit
- The move count is printed in the terminal
- Controls: `W` `A` `S` `D` to move, `Esc` to quit

```bash
cd so_long && make
./so_long map.ber
```
Built for macOS with the MiniLibX (OpenGL / AppKit).

### pipex

```bash
cd FINALPIPEX && make
./pipex infile "grep hello" "wc -l" outfile    # same as: < infile grep hello | wc -l > outfile
```

## Build

Every project has its own `Makefile` (`make`, `make clean`, `make fclean`, `make re`).
