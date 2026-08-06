// Generated header

class CRotorWashShooter : public CEnvShooter, public IRotorWashShooter
{
public:
	virtual ~CRotorWashShooter() override; // vtable[0]
	virtual ~CRotorWashShooter() override; // vtable[1]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void DoWashPush(float param_1, Vector *param_2); // vtable[247]

	void DoWashPush(float param_1, Vector *param_2); // size[13]
	void GetBaseMap(); // size[10]
};
