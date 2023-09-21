#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>

#define UNUSED __attribute__((unused))

extern int element;
extern int top;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int execute_line(char *line, unsigned int line_number);
int _interpret(FILE *file);
unsigned int getfile(char **buffer, size_t n, FILE *file);
void free_as(char **as, int n);
int get_no_line(FILE *file);
void (*get_instruction(char *opcode))(stack_t **stack, unsigned int line_number);

int add_node(stack_t **stack, unsigned int line_number);

void _push(stack_t **stack, unsigned int line_number);
void print_stack(stack_t **stack, unsigned int line_number);
#endif
