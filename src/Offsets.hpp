#pragma once

namespace Offsets {

// CCvar
extern int RegisterConCommand;
extern int UnregisterConCommand;
extern int FindCommandBase;
extern int m_pConCommandList;

// CEngineClient
extern int ClientCmd;
extern int GetActiveSplitScreenPlayerSlot;

// ConVar
extern int InternalSetValue;
extern int InternalSetFloatValue;
extern int InternalSetIntValue;

// CClientState
extern int SetSignonState;

// CVEngineServer
extern int ClientCommand;

// Others
extern int GetClientStateFunction;
extern int cl;
extern int AutoCompletionFunc;
extern int HostState_OnClientConnected;
extern int hoststate;
extern int Cbuf_AddText;
}
