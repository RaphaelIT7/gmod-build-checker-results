// Generated header
// Estimated minimum size: 0x68F02840 (1760569408) bytes

class CPointEntityFinder : public CBaseEntity
{
public:
	virtual ~CPointEntityFinder() override; // vtable[0]
	virtual ~CPointEntityFinder() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Activate() override; // vtable[34]

	void _GLOBAL__sub_I_m_DataMap(); // size[113]
	void GetBaseMap(); // size[10]
	void FindByDistance(); // size[237]
	void FindByRandom(); // size[470]
	void FindEntity(); // size[160]
	void InputFindEntity(inputdata_t *param_1); // size[108]
};
