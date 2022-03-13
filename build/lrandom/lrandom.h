
#ifndef __LUA_LRANDOM_H_
#define __LUA_LRANDOM_H_
#if __cplusplus
extern "C" {
#endif

#include "lua.h"
#include "lauxlib.h"

LUALIB_API int luaopen_random(lua_State *L);

#if __cplusplus
}
#endif
#endif
