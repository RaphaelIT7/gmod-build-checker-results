// Generated header

class CAI_DynamicLink : public CServerOnlyEntity
{
public:
	virtual ~CAI_DynamicLink() override; // vtable[0]
	virtual ~CAI_DynamicLink() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void ObjectCaps() override; // vtable[36]

	void GetBaseMap(); // size[0]
	void IsLinkValid(); // size[0]
	void PurgeDynamicLinks(); // size[0]
	void FindLink(); // size[0]
	void SetLinkState(); // size[0]
	void ResetDynamicLinks(); // size[0]
	void InputTurnOn(); // size[0]
	void InputTurnOff(); // size[0]
	void GetDynamicLink(); // size[0]
	CAI_DynamicLink(); // size[0]
	void GenerateControllerLinks(); // size[0]
	void InitDynamicLinks(); // size[0]
};
