// Generated header

class CNewNPC : public CAI_BaseNPC
{
public:
	virtual ~CNewNPC() override; // vtable[0]
	virtual ~CNewNPC() override; // vtable[1]
	virtual GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]
	virtual void Classify() override; // vtable[55]
	virtual GetSchedulingErrorName() override; // vtable[432]
	virtual LoadedSchedules() override; // vtable[433]
	virtual SquadSlotName(int param_1) override; // vtable[581]
	virtual GetClassScheduleIdSpace() override; // vtable[640]

	GetBaseMap(); // size[10]
	InitCustomSchedules(); // size[269]
	LoadSchedules(); // size[62]
	CScheduleLoader(); // size[9]
};
