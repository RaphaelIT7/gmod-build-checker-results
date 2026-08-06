// Generated header

class IVP_point_hash : public IVP_VHash
{
public:
	virtual void compare(void *param_1, void *param_2) override; // vtable[0]
	virtual ~IVP_point_hash(); // vtable[1]
	virtual ~IVP_point_hash(); // vtable[2]

	_GLOBAL__sub_I_~IVP_point_hash(); // size[1]
	void point_to_index(IVP_Poly_Point *param_1); // size[51]
	void add_point(IVP_Poly_Point *param_1); // size[77]
	void remove_point(IVP_Poly_Point *param_1); // size[74]
	void find_point(IVP_Poly_Point *param_1); // size[74]
	void len(); // size[14]
	void element_at(int param_1); // size[18]
	IVP_point_hash(int param_1); // size[33]
	void print(); // size[5]
};
