// Generated header

class CPhoneHome : public IPhoneHome
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void Message(uchar param_1, char *param_2); // vtable[2]
	virtual void IsExternalBuild(); // vtable[3]

	void SendSessionMessage(uchar param_1, char *param_2); // size[1763]
	void RequestSessionId(uint *param_1); // size[871]
};
