// Generated header

class CFireSmoke : public CBaseFire
{
public:
	virtual ~CFireSmoke() override; // vtable[0]
	virtual ~CFireSmoke() override; // vtable[1]
	virtual void GetServerClass() override; // vtable[10]
	virtual void YouForgotToImplementOrDeclareServerClass() override; // vtable[11]
	virtual void GetDataDescMap() override; // vtable[12]
	virtual void Spawn() override; // vtable[23]
	virtual void Precache() override; // vtable[24]

	void GetBaseMap(); // size[10]
	CFireSmoke(); // size[82]
	void EnableSmoke(intparam_1); // size[89]
	void EnableGlow(intparam_1); // size[89]
	void EnableVisibleFromAbove(intparam_1); // size[89]
};
