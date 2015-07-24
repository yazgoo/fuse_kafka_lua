#include <input_plugin.h>
#include <lua.c>
static int l_output_write(lua_State *L)
{
    char* path = lua_tostring(L, 1);
    char* value = lua_tostring(L, 2);
    output_write("", path, value, strlen(value), 0);
    return 0;
}
int input_setup(int argc, char** argv, void* cfg)
{
    void* functions[] = {"output_write", l_output_write};
    lua_run(argv[1], functions, 2);
    return 0;
}
