// Generated header

class CServerGameEnts : public IServerGameEnts
{
public:
	virtual ~CServerGameEnts() override; // vtable[0]
	virtual ~CServerGameEnts() override; // vtable[1]
	virtual void SetDebugEdictBase(edict_t *param_1); // vtable[2]
	virtual void MarkEntitiesAsTouching(edict_t *param_1, edict_t *param_2); // vtable[3]
	virtual void FreeContainingEntity(edict_t *param_1); // vtable[4]
	virtual void BaseEntityToEdict(CBaseEntity *param_1); // vtable[5]
	virtual void EdictToBaseEntity(edict_t *param_1); // vtable[6]
	virtual void CheckTransmit(CCheckTransmitInfo *param_1, ushort *param_2, intparam_3) override; // vtable[7]
};
