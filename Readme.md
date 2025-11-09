Библиотека для кроссплатформенной работы в режиме CLI с различными встраиваиваемыми системами 
bash
rm -rf build
mkdir build && cd build
cmake ..
make

Стандартные команды

| Название         | Аргументы     | Описание   |
|: -------------- :|:-------------:|: ---------:|
| cli_cmd_help(cli_t* cli, int argc, char** argv)   | - | Вывод списка всех команд|
| cli_cmd_clear(cli_t* cli, int argc, char** argv)  | - | Очистка вывода |
| cli_cmd_reboot(cli_t* cli, int argc, char** argv) | - | Перезагрузка системы |
| cli_cmd_kill(cli_t* cli, int argc, char** argv)   | <task_name> | Удаление процесса с id <task_name> |
| cli_cmd_ps(cli_t* cli, int argc, char** argv)     | - | Вывод всех процессов| 

Вспомогательные команды разработки 
| Название         | Описание  |
|: -------------- :|:---------:|
| cli_init(cli_t* cli, cli_io_t* io) | Инициализация интерфейса командной строки и стандартных команд|
| cli_parse_args(char* line, char** argv, int max_args) | Команда парсинга аргументов команды |
| cli_execute_command(cli_t* cli, const char* line) | Поиск и выполнение команды в базе |
| cli_process(cli_t* cli) | Обработка ввода символов в командной строке|
| cli_register_command(cli_t* cli, const char* name,
        cli_command_func_t func, const char* help) | Регистрация команды в системе |
| cli_print(cli_t* cli, const char* format, ...) | Вывод информации о командах, отладочной информации и т.д. |
| cli_print_error(cli_t* cli, const char* format, ...) | Вывод информации об ошибках |

