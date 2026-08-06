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
	virtual void ~CServerNetworkProperty() override; // vtable[9]
	virtual void ~CServerNetworkProperty() override; // vtable[10]
	virtual void GetDataDescMap(); // vtable[11]
	virtual void FireEvent(); // vtable[12]

	void _GLOBAL__sub_I_m_DataMap();
	void NetworkStateChanged();
	void FireEvent();
	void GetBaseMap();
	void CServerNetworkProperty();
	void Init();
	void AttachEdict();
	void DetachEdict();
	void GetNetworkParent();
	void MarkForDeletion();
	void IsMarkedForDeletion();
	void RecomputePVSInformation();
	void IsInPVS();
	void IsInPVS();
	void SetUpdateInterval();
};
