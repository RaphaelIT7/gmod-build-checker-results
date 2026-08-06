// Generated header

class CUniformRandomStream : public IUniformRandomStream
{
public:
	virtual void SetSeed(int param_1); // vtable[0]
	virtual void RandomFloat(float param_1, float param_2); // vtable[1]
	virtual void RandomInt(int param_1, int param_2); // vtable[2]
	virtual void RandomFloatExp(float param_1, float param_2, float param_3) override; // vtable[3]

	CUniformRandomStream(); // size[53]
	void GenerateRandomNumber(); // size[453]
};
