// Generated header

class CServerNetworkProperty : public IServerNetworkable, public IEventRegisterCallback
{
public:
	virtual void GetEntityHandle() override; // vtable[0]
	virtual void GetServerClass(); // vtable[1]
	virtual void GetEdict(); // vtable[2]
	virtual void GetClassName(); // vtable[3]
	virtual void Release(); // vtable[4]
	virtual void AreaNum(); // vtable[5]
	virtual void GetBaseNetworkable(); // vtable[6]
	virtual void GetBaseEntity(); // vtable[7]
	virtual void GetPVSInfo() override; // vtable[8]
	virtual ~CServerNetworkProperty() override; // vtable[9]
	virtual ~CServerNetworkProperty() override; // vtable[10]
	virtual void GetDataDescMap(); // vtable[11]
	virtual void FireEvent(); // vtable[12]

	void _GLOBAL__sub_I_m_DataMap(); // size[0]
	void NetworkStateChanged(); // size[0]
	void FireEvent(); // size[0]
	void GetBaseMap(); // size[0]
	CServerNetworkProperty(); // size[0]
	void Init(); // size[0]
	void AttachEdict(); // size[0]
	void DetachEdict(); // size[0]
	void GetNetworkParent(); // size[0]
	void MarkForDeletion(); // size[0]
	void IsMarkedForDeletion(); // size[0]
	void RecomputePVSInformation(); // size[0]
	void IsInPVS(); // size[0]
	void IsInPVS(); // size[0]
	void SetUpdateInterval(); // size[0]
};
