// Generated header

class CUniformRandomStream : public IUniformRandomStream
{
public:
	virtual void SetSeed(intparam_1); // vtable[0]
	virtual void RandomFloat(floatparam_1, floatparam_2); // vtable[1]
	virtual void RandomInt(intparam_1, intparam_2); // vtable[2]
	virtual void RandomFloatExp(floatparam_1, floatparam_2, floatparam_3) override; // vtable[3]

	CUniformRandomStream(); // size[53]
	void GenerateRandomNumber(); // size[453]
};
