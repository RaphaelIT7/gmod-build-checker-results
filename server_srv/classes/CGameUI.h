// Generated header
// Estimated minimum size: 0x25AC (9644) bytes, no debug info available

class CGameUI : public CBaseEntity
{
public:
	virtual ~CGameUI() override; // vtable[0]
	virtual ~CGameUI() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Think() override; // vtable[48]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputActivate(inputdata_t *param_1); // size[425]
	void GetBaseMap(); // size[10]
	void Deactivate(CBaseEntity *param_1); // size[145]
	void InputDeactivate(inputdata_t *param_1); // size[17]
};
