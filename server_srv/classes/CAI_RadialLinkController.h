// Generated header

class CAI_RadialLinkController : public CBaseEntity
{
public:
	virtual ~CAI_RadialLinkController() override; // vtable[0]
	virtual ~CAI_RadialLinkController() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Activate() override; // vtable[34]

	void GetBaseMap(); // size[10]
	void ModifyNodeLinks(boolparam_1); // size[775]
	void PollMotionThink(); // size[50]
};
