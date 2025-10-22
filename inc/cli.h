#ifndef CLI_H
#define CLI_H

#include <stdint.h>
#include <stddef.h>

#define CLI_MAX_COMMAND_LENGTH 64
#define CLI_MAX_ARGUMENTS 8

typedef struct {
    const char *name;
    const char *description;
    void (*handler)(int argc, char **argv);
} cli_command_t;

void cli_init();
void cli_register_command(cli_command_t *command);
void cli_run();

#endif // CLI_H
