#include "lua.h"
#include "lualib.h"
#include "lauxlib.h"
void lua_run(void* path, void** functions, size_t size)
{
    size_t i;
    lua_State* L = luaL_newstate();
    for(i = 0; i < size; i += 2)
        lua_register(L, functions[i], functions[i + 1]);
    luaL_openlibs(L);
    luaL_dofile(L, path);
    lua_close(L);
}

