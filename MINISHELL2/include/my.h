/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <dirent.h>
#include <errno.h>
#include <sys/stat.h>
#include <errno.h>
#include <sys/stat.h>
#include <fcntl.h>


int my_putstr(char const *str);
void my_putchar(char c);
void print_arg(char **argv);
int main (int ac, char **av, char **env);
int my_strlen(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strcmp(char const *s1, char const *s2);

typedef struct shell_s
{
    char *input;
    size_t size;
    char *pwd;
    int old_fd[2];
    int new_fd[2];
    int count_pipe;
    int final_pipe;
    int pid_pipe;
}shell_t;

typedef struct list_s
{
    char *var_env;
    struct list_s *next;
    char **env;
}list_t;

shell_t *struct_shell(void);
list_t *create_list(char **env);


//Function
void push_list(list_t *head, char *str);
char *get_path(list_t *head);
int free_list(list_t *head);
char **str_to_wordarray(char *str, char * separator);
void free_all(shell_t *shell, list_t *head);
void print_list_env(list_t *head);
int exec_bin(char **command, list_t *head, char **env);
char *remove_backn(char *str);
void print_pwd(list_t *head);
int check_builtin(char *input);
int exec_built(char *input, list_t *head, shell_t *shell);
int binary_exe(char *input, char **env, list_t *head);
int my_exit(char **cmd_built, shell_t *shell, list_t *head);
void free_loop(shell_t *shell);
int set_env(list_t *head, char **command_built);
int my_cd(char **command, list_t *head);
char *get_old_pwd(list_t *head);
char *get_pwd(list_t *head);
int my_unsetenv(list_t *head, char **unenv);
int ft_pipe(char **tab_pipe, char **env, list_t *head, shell_t *shell);
int who_exe(char *input, char **env, list_t *head, shell_t *shell);
void my_env(list_t *head, char **cmd);
char *get_home(list_t *head);
int check_errorsetenv(char **command_built);
int check_good_syntaxe(char **str);
int check_first_char(char **str);
int init_pip(char **tab_pipe, shell_t *shell, list_t *head);
void pipe_child(char **command, shell_t *shell);
void pipe_parents(char **command, shell_t *shell);
int check_builtin_pipe(char *input);
void check_exec(char **command, char **env, list_t *head);
int loop_shell(shell_t *shell, char **env, list_t *head);
int set_envnomatch(list_t *head, char **command_built, char *name);
char *set_envmatch(char *env_list, char **cmd_built);
void free_exe_bin(char *buff, char *bin_path, char **path);
void find_env(list_t *head, char *name, char **command_built);
int check_env_real_setenv(char *env_list, char *str);
int binary_exe2(char *input, char **command, char **env, list_t *head);
int ft_cd2(char *cmd, char *old_pwd);
void print_for_cd(char *cmd);
int binary_exe_pipe(char *tab_pipe, list_t *head, int *new_fd, int *old_fd);
int who_exe2(char *input, char **env, list_t *head, shell_t *shell);
int binary_exe2pipe(char *input, char **env, list_t *head);
void pipe_in_exec(int *new_fd, int *old_fd);
void final_pipe(int *new_fd);
int check_cmd(char *cmd);
char **list_in_str(list_t *head);
int find_redir(char *str);
void choice_redir(char **cmd, int redir);
void redir_close_file(char **cmd, char **fd_name, int redir);
int exec_built_pipe(char *input, list_t *head, shell_t *shell);


// Lib
char *my_strdup(char *str);
int my_putstr(char const *str);
int my_strlen(char const *str);
char *my_strcat(char *dest, char const *src);
char *my_strcpy(char *dest, char const *src);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest , char  const *src , int n);
int my_getnbr(char const *str);


#endif /* MY_H_*/
