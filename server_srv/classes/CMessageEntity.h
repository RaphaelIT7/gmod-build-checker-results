// Generated header

class CMessageEntity : public CPointEntity
{
public:
	virtual ~CMessageEntity() override; // vtable[0]
	virtual ~CMessageEntity() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Think() override; // vtable[48]
	virtual void UpdateOnRemove() override; // vtable[108]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void InputEnable(inputdata_t *param_1); // size[15]
	void InputDisable(inputdata_t *param_1); // size[15]
	void GetBaseMap(); // size[10]
	void DrawOverlays(); // size[182]
};
