// Generated header

class CPointTeleport : public CBaseEntity
{
public:
	virtual ~CPointTeleport() override; // vtable[0]
	virtual ~CPointTeleport() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]
	virtual void ObjectCaps() override; // vtable[36]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void EntityMayTeleport(CBaseEntity *param_1); // size[71]
	void DoTeleport(inputdata_t *param_1, Vector *param_2, QAngle *param_3, bool param_4); // size[520]
	void InputTeleport(inputdata_t *param_1); // size[54]
	void InputTeleportEntity(inputdata_t *param_1); // size[54]
	void InputTeleportToCurrentPos(inputdata_t *param_1); // size[126]
};
