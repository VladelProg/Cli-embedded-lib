#include "../inc/cli.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static cli_command_t *commands[16];
static size_t command_count = 0;

void cli_init() {
    // Инициализация CLI (например, регистрация стандартных команд)
}


void cli_register_command(cli_command_t *command) {
    if (command_count < 16) {
        commands[command_count++] = command;
    }
}

static void cli_parse_input(const char *input) {
    char *args[CLI_MAX_ARGUMENTS];
    char buffer[CLI_MAX_COMMAND_LENGTH];
    strncpy(buffer, input, sizeof(buffer) - 1);
    buffer[sizeof(buffer) - 1] = '\0';

    char *token = strtok(buffer, " ");
    int argc = 0;
    while (token != NULL && argc < CLI_MAX_ARGUMENTS) {
        args[argc++] = token;
        token = strtok(NULL, " ");
    }

    if (argc > 0) {
        for (size_t i = 0; i < command_count; i++) {
            if (strcmp(commands[i]->name, args[0]) == 0) {
                commands[i]->handler(argc, args);
                return;
            }
        }
        printf("Command not found: %s\n", args[0]);
    }
}

void cli_run() {
    char input[CLI_MAX_COMMAND_LENGTH];
    while (1) {
        printf("> ");
        if (fgets(input, sizeof(input), stdin) == NULL) {
            break;
        }
        input[strcspn(input, "\n")] = '\0';
        cli_parse_input(input);
    }
}
