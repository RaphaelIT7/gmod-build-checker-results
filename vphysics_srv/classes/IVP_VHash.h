// Generated header
// Estimated minimum size: 0x8 (8) bytes

class IVP_VHash
{
public:
	IVP_VHash(int param_1); // size[57]
	void activate(int param_1); // size[47]
	void deactivate(); // size[53]
	IVP_VHash(IVP_VHash_Elem *param_1, int param_2); // size[28]
	~IVP_VHash(); // size[37]
	~IVP_VHash(); // size[56]
	void untouch_all(); // size[42]
	void add_elem(void *param_1, int param_2); // size[221]
	void rehash(int param_1); // size[171]
	void garbage_collection(int param_1); // size[44]
	void remove_elem(void *param_1, uint param_2); // size[367]
	void check(); // size[1]
	void find_elem(void *param_1, uint param_2); // size[150]
	void touch_element(void *param_1, uint param_2); // size[156]
	void print(); // size[117]
};
