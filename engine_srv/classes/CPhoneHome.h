// Generated header

class CPhoneHome : public IPhoneHome
{
public:
	virtual void Init(); // vtable[0]
	virtual void Shutdown(); // vtable[1]
	virtual void Message(); // vtable[2]
	virtual void IsExternalBuild(); // vtable[3]

	void SendSessionMessage();
	void RequestSessionId();
};
