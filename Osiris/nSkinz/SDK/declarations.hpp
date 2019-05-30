#pragma once
#include <cstddef>
#include <array>

namespace sdk
{
	//class C_BaseEntity;
	class ClientClass;
	class ClientClass;
	class IClientAlphaProperty;
	class IClientEntity;
	class IClientEntity;
	class IClientNetworkable;
	class IClientNetworkable;
	class IClientRenderable;
	class IClientThinkable;
	class IClientUnknown;
	class ICollideable;
	class IGameEvent;
	class KeyValues;
	class RecvProp;
	class RecvTable;

	struct AppSystemInfo_t;
	struct CRecvProxyData;
	struct bf_read;
	struct bf_read;
	struct bf_write;
	struct model_t;

	using CBaseHandle = unsigned long;
	//using CreateClientClassFn = IClientNetworkable* (*)(int, int);
	using CreateEventFn = IClientNetworkable* (*)();
	using CreateInterfaceFn = void* (*)(const char*, int*);
	using LocalizeStringIndex_t = unsigned;

	constexpr static auto INVALID_EHANDLE_INDEX = 0xFFFFFFFF;
	constexpr static auto MAX_PLAYER_NAME_LENGTH = 128;
	constexpr static auto SIGNED_GUID_LEN = 32;
	constexpr static auto MAX_WEAPONS = 48;
	constexpr static auto MAX_PLAYERS = 65; // Only cstrike and csgo

	enum class LifeState
	{
		ALIVE = 0,
		DYING,
		DEAD,
		RESPAWNABLE,
		DISCARDBODY,
	};
}