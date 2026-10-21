// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_point_hash : public IVP_VHash
{
public:
	virtual void compare(void *param_1, void *param_2); // vtable[0]
	virtual ~IVP_point_hash(); // vtable[1]
	virtual ~IVP_point_hash(); // vtable[2]

	void point_to_index(IVP_Poly_Point *param_1); // size[45]
	void add_point(IVP_Poly_Point *param_1); // size[72]
	void remove_point(IVP_Poly_Point *param_1); // size[72]
	void find_point(IVP_Poly_Point *param_1); // size[72]
	void len(); // size[7]
	void element_at(int param_1); // size[16]
	IVP_point_hash(int param_1); // size[33]
	void print(); // size[5]
};
