# Signals

## What is a signal?

A Signal is an asynchronous event which is delivered to a process 
instantiated by a small message


- Asynchronous means that the event can occur at any time
   may be unrelated to the execution of the process
  - e.g. user types Ctrl-C

- Send form kernel (e.g.) detects divide by zero (SIGFPE) or could be the request

# Signal Types (31)

| ID | Name | Description | Action |
| --: | :-----: | :-----------------: | :----------: |
| 2 | SIGNT | Interrupt from keyboard | terminate |
| 3 | SIGQUIT | Quit from keyboard | terminate |
| 9 | SIGKLL | kill -9 | terminate |
| 11 | SIGSERV | Invalid memory reference | terminate |
| 14 | SIGALRM | timer signal from alarm() | terminate |
| 17 | SIGCHLD | child stopped or terminated | ignore |
| 16 | SIGUSR1 | user-defined signal type | terminate |


# UNIX Signal
Handles events

## Remember the right-left rule?
`void (* signal(int signnum, void (* handler)(int)) ) (int)`

Signal is a function

With two parameters,
signum an int
handler a pointer to a function with 1 paramterer

## Global Variables

Notice that in the sig4 example, that a global variable is used to communicate between f() and main()

We cannot pass additional parameters to signal handlers.

Must be careful using data in signal handlers.

## The kill command

`$ kill -<signal> <pid>`

Sends a signal of type <signal> to the process with id <pid>.

Can specify either signal type name (-SIGINT) or number (-2)

Comment: Maybe a better command name would be sendsig or poke.

## Sending a signal from program

### Examples
```c

pid_t iPid = getpid();
/* Process gets its id */

kill(iPid, SIGINT);
/* What happens? */

```
## Other Examples
 - [Signal Programs](https://coryborek.github.io/classes/cs1730/signals/programs)
### [Back to CS2720](https://coryborek.github.io/classes/cs1730/)