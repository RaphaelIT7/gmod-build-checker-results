// Generated header

class CAreaPortalOneWay : public CAreaPortal
{
public:
	virtual ~CAreaPortalOneWay() override; // vtable[0]
	virtual ~CAreaPortalOneWay() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]
	virtual void Restore(IRestore *param_1) override; // vtable[42]
	virtual void UpdateVisibility(Vector *param_1, float param_2, bool *param_3) override; // vtable[246]

	void InputDisableOneWay(inputdata_t *param_1); // size[15]
	void InputEnableOneWay(inputdata_t *param_1); // size[15]
	void InputToggleOneWay(inputdata_t *param_1); // size[15]
	void InputInvertOneWay(inputdata_t *param_1); // size[73]
	void GetBaseMap(); // size[10]
	void RemoteUpdate(bool param_1); // size[49]
};
