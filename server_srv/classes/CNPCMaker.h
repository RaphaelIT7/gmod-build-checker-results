// Generated header
// Estimated minimum size: 0x25AC (9644) bytes

class CNPCMaker : public CBaseNPCMaker
{
public:
	virtual ~CNPCMaker() override; // vtable[0]
	virtual ~CNPCMaker() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Precache() override; // vtable[24]
	virtual void MakeNPC(); // vtable[246]
	virtual void ChildPreSpawn(CAI_BaseNPC *param_1); // vtable[247]
	virtual void ChildPostSpawn(CAI_BaseNPC *param_1); // vtable[248]
	virtual void Enable(); // vtable[249]
	virtual void Disable(); // vtable[250]
	virtual void IsDepleted(); // vtable[251]

	void GetBaseMap(); // size[10]
	CNPCMaker(); // size[26]
};
