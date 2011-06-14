#ifndef shader_h
#define shader_h

#include "SDL/SDL.h"
#include "SDL/SDL_opengl.h"

typedef GLenum shader;
typedef GLhandleARB shader_program;

shader_program* shader_program_new();

void shader_program_attach_shader(shader_program* program, shader* shader);
void shader_program_link(shader_program* program);

void shader_program_print_log(shader_program* program);
void shader_print_log(shader* shader);

shader* vs_load_file(char* filename);
shader* fs_load_file(char* filename);
shader_program* prog_load_file(char* filename);

void shader_program_parse_line(shader_program* program, char* line);

void shader_program_delete(shader_program* program);
void shader_delete(shader* shader);

#endif