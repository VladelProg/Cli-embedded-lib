#include "../inc/cli_command.h"
#include <stdio.h>
#include <stdlib.h>

void cli_command_help(int argc, char **argv) {
    printf("Available commands:\n");
    printf("  help    - Display this help message\n");
    printf("  clear   - Clear the screen\n");
    printf("  reboot  - Reboot the system\n");
    printf("  kill    - Kill a background task\n");
}

void cli_command_clear(int argc, char **argv) {
    printf("\033[2J\033[H"); // ANSI escape code to clear screen
}

void cli_command_reboot(int argc, char **argv) {
    printf("System rebooting...\n");
    // Здесь можно добавить логику перезагрузки
}

void cli_command_kill(int argc, char **argv) {
    if (argc < 2) {
        printf("Usage: kill <task_id>\n");
        return;
    }
    printf("Killing task %s\n", argv[1]);
    // Здесь можно добавить логику остановки задачи
}
