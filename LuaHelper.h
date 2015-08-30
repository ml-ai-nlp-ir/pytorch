#pragma once

struct lua_State;

void getGlobal(lua_State *L, const char *name1);
void getGlobal(lua_State *L, const char *name1, const char *name2);
void getGlobal(lua_State *L, const char *name1, const char *name2, const char *name3);

void pushSelf(lua_State *L, void *instanceKey);
void deleteSelf(lua_State *L, void *instanceKey);
void getSelf(lua_State *L, void *instanceKey);
void getInstanceField(lua_State *L, void *instanceKey, const char *name);
