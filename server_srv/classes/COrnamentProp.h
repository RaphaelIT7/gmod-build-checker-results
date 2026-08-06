// Generated header

class COrnamentProp : public CDynamicProp
{
public:
	virtual ~COrnamentProp() override; // vtable[0]
	virtual ~COrnamentProp() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[10]
	void DetachFromOwner(); // size[81]
	void InputDetach(inputdata_t *param_1); // size[9]
	void AttachTo(char *param_1, CBaseEntity *param_2, CBaseEntity *param_3); // size[124]
	void InputSetAttached(inputdata_t *param_1); // size[78]
	~COrnamentProp(); // size[13]
	~COrnamentProp(); // size[13]
};
