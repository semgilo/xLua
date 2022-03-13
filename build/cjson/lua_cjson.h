
#ifndef __LUA_CJSON_H_
#define __LUA_CJSON_H_

#include "lua.h"

#define USE_INTERNAL_FPCONV

LUALIB_API int luaopen_cjson(lua_State *l);
LUALIB_API int luaopen_cjson_safe(lua_State *l);

#endif // __LUA_CJSON_H_
