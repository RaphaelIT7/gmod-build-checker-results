// Generated header
// Estimated minimum size: 0x40014 (262164) bytes

class CBaseEntityList
{
public:
	virtual void OnAddEntity(IHandleEntity *param_1, CBaseHandle param_2); // vtable[0]
	virtual void OnRemoveEntity(IHandleEntity *param_1, CBaseHandle param_2); // vtable[1]

	void RemoveEntityAtSlot(int param_1); // size[300]
	CBaseEntityList(); // size[86]
	~CBaseEntityList(); // size[74]
	void RemoveEntity(CBaseHandle param_1); // size[23]
	void AddEntityAtSlot(IHandleEntity *param_1, int param_2, int param_3); // size[231]
	void AddNetworkableEntity(IHandleEntity *param_1, int param_2, int param_3); // size[58]
	void AddNonNetworkableEntity(IHandleEntity *param_1); // size[164]
	void RemoveEntityAtSlot(int param_1); // size[25]
};
