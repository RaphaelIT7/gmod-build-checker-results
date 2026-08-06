// Generated header

class CAI_BaseNPCFlyerNew : public CAI_BaseNPC
{
public:
	virtual ~CAI_BaseNPCFlyerNew() override; // vtable[0]
	virtual ~CAI_BaseNPCFlyerNew() override; // vtable[1]
	virtual void GetIdealSpeed() override; // vtable[246]
	virtual void StartTask(Task_t *param_1) override; // vtable[410]
	virtual void RunTask(Task_t *param_1) override; // vtable[411]
	virtual void MinGroundDist(); // vtable[652]
	virtual void AbortedMovement(); // vtable[653]

	_GLOBAL__sub_I_CAI_BaseNPCFlyerNew(); // size[113]
	CAI_BaseNPCFlyerNew(); // size[18]
	void SpawnFlyer(); // size[66]
	void ClearFlyerConditions(); // size[5]
};
