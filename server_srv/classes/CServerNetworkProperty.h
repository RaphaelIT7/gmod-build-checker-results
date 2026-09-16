// Generated header
// Estimated minimum size: 0x124 (292) bytes, no debug info available

class CServerNetworkProperty : public IServerNetworkable, public IEventRegisterCallback
{
public:
	virtual void GetEntityHandle(); // vtable[0]
	virtual void GetServerClass(); // vtable[1]
	virtual void GetEdict(); // vtable[2]
	virtual void GetClassName(); // vtable[3]
	virtual void Release(); // vtable[4]
	virtual void AreaNum(); // vtable[5]
	virtual void GetBaseNetworkable(); // vtable[6]
	virtual void GetBaseEntity(); // vtable[7]
	virtual void GetPVSInfo(); // vtable[8]
	virtual ~CServerNetworkProperty(); // vtable[9]
	virtual ~CServerNetworkProperty(); // vtable[10]
	virtual void GetDataDescMap(); // vtable[11]
	virtual void FireEvent(); // vtable[12]
	virtual void FireEvent(); // vtable[0]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void NetworkStateChanged(ushort param_1); // size[68]
	void GetBaseMap(); // size[7]
	CServerNetworkProperty(); // size[105]
	void Init(CBaseEntity *param_1); // size[67]
	void AttachEdict(edict_t *param_1); // size[75]
	void DetachEdict(); // size[63]
	void GetNetworkParent(); // size[60]
	void MarkForDeletion(); // size[18]
	void IsMarkedForDeletion(); // size[20]
	void RecomputePVSInformation(); // size[65]
	void IsInPVS(edict_t *param_1, void *param_2, int param_3); // size[144]
	void IsInPVS(CCheckTransmitInfo *param_1); // size[475]
	void SetUpdateInterval(float param_1); // size[51]
};
