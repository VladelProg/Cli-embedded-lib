Библиотека для кроссплатформенной работы в режиме CLI с различными встраиваиваемыми системами 
bash
rm -rf build
mkdir build && cd build
cmake ..
make

Стандартные команды

| Название       | Аргументы     | Описание  |
| -------------- |:-------------:| ---------:|
| cli_cmd_help(cli_t* cli, int argc, char** argv)   | - | Вывод списка всех команд|
| cli_cmd_clear(cli_t* cli, int argc, char** argv)  | - | Очистка вывода |
| cli_cmd_reboot(cli_t* cli, int argc, char** argv) | - | Перезагрузка системы |
| cli_cmd_kill(cli_t* cli, int argc, char** argv)   | <task_name> | Удаление процесса с id <task_name> |
| cli_cmd_ps(cli_t* cli, int argc, char** argv)     | - | Вывод всех процессов| 
