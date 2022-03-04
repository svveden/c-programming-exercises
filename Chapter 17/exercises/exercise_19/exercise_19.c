/* 03/03/2022 */
/* Array of function pointer structs */

struct {
	char *cmd_name;
	void(*cmd_pointer)(void);
} file_cmd[] =
{{"new", new_cmd},
{"open", open_cmd},
{"close", close_cmd},
{"close all", close_all_cmd},
{"save", save_cmd},
{"save as", save_as_cmd},
{"print", print_cmd},
{"exit", exit_cmd},};

void call_function(char *a){
	int i = 0;
	for(i = 0; sizeof(file_cmd)/sizeof(file_cmd[0]); i++){
		if(strcmp(a, file_cmd[i].cmd_name)){
			return (*file_cmd[i].cmd_pointer)();
		}
	} return;
}