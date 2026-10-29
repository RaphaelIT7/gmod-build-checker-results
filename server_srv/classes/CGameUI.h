// Generated header
// Estimated minimum size: 0x1574 (5492) bytes

class CGameUI : public CBaseEntity
{
public:
	virtual ~CGameUI() override; // vtable[0]
	virtual ~CGameUI() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputActivate(inputdata_t *param_1); // size[631]
	void GetBaseMap(); // size[1]
	void Deactivate(CBaseEntity *param_1); // size[114]
	void InputDeactivate(inputdata_t *param_1); // size[17]
};
