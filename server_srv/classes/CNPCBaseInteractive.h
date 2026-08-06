// Generated header

class CNPCBaseInteractive : public CAI_BasePhysicsFlyingBot, public INPCInteractive
{
public:
	virtual ~CNPCBaseInteractive() override; // vtable[0]
	virtual ~CNPCBaseInteractive() override; // vtable[1]
	virtual void GetCollideable() override; // vtable[4]
	virtual void CanInteractWith(CAI_BaseNPC *param_1); // vtable[658]
	virtual void HasBeenInteractedWith(); // vtable[659]
	virtual void NotifyInteraction(CAI_BaseNPC *param_1); // vtable[660]
	virtual void InputPowerdown(inputdata_t *param_1); // vtable[661]
	virtual void AlyxStartedInteraction(); // vtable[662]
	virtual void AlyxFinishedInteraction(); // vtable[663]
};
