#include "../inc/cli.h"
#include "../inc/cli_command.h"

int main() {
    cli_init();

    cli_register_command((cli_command_t[]){{"help", "Display help", cli_command_help}});
    cli_register_command((cli_command_t[]){{"clear", "Clear screen", cli_command_clear}});
    cli_register_command((cli_command_t[]){{"reboot", "Reboot system", cli_command_reboot}});
    cli_register_command((cli_command_t[]){{"kill", "Kill task", cli_command_kill}});

    cli_run();

    return 0;
}
