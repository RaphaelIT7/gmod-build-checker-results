// Generated header

class IVP_U_Active_Terminal_Double : public IVP_U_Active_Float, public IVP_U_Active_Float_Delayed
{
public:
	virtual ~IVP_U_Active_Terminal_Double() override; // vtable[0]
	virtual ~IVP_U_Active_Terminal_Double() override; // vtable[1]
	virtual void print(); // vtable[2]
	virtual void update_float(); // vtable[3]
	virtual void set_double(doubleparam_1, IVP_BOOLparam_2); // vtable[4]

	void update_float(); // size[32]
	IVP_U_Active_Terminal_Double(char *param_1, doubleparam_2); // size[108]
	~IVP_U_Active_Terminal_Double(); // size[68]
	~IVP_U_Active_Terminal_Double(); // size[78]
};
