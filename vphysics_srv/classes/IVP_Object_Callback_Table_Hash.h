// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_Object_Callback_Table_Hash : public IVP_VHash
{
public:
	virtual void compare(void *param_1, void *param_2); // vtable[0]
	virtual ~IVP_Object_Callback_Table_Hash(); // vtable[1]
	virtual ~IVP_Object_Callback_Table_Hash(); // vtable[2]

	void object_to_index(IVP_Real_Object *param_1); // size[62]
	void add_table(IVP_Object_Callback_Table *param_1); // size[70]
	void remove_table(IVP_Real_Object *param_1); // size[125]
	void find_table(IVP_Real_Object *param_1); // size[125]
	IVP_Object_Callback_Table_Hash(int param_1); // size[33]
};
