// Generated header

class CAI_DynamicLink : public CServerOnlyEntity
{
public:
	virtual ~CAI_DynamicLink() override; // vtable[0]
	virtual ~CAI_DynamicLink() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[10]
	void IsLinkValid(); // size[91]
	void PurgeDynamicLinks(); // size[55]
	void FindLink(); // size[142]
	void SetLinkState(); // size[270]
	void ResetDynamicLinks(); // size[48]
	void InputTurnOn(inputdata_t *param_1); // size[34]
	void InputTurnOff(inputdata_t *param_1); // size[33]
	void GetDynamicLink(intparam_1, intparam_2); // size[80]
	CAI_DynamicLink(); // size[26]
	void GenerateControllerLinks(); // size[78]
	void InitDynamicLinks(); // size[641]
};
