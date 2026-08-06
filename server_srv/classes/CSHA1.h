// Generated header

class CSHA1
{
public:
	virtual ~CSHA1(); // vtable[0]
	virtual ~CSHA1(); // vtable[1]

	CSHA1(); // size[72]
	void Reset(); // size[57]
	void Transform(uint *param_1, uchar *param_2); // size[4788]
	void Update(void *param_1, uintparam_2); // size[248]
	void HashFile(char *param_1); // size[364]
	void Final(); // size[322]
	void ReportHash(char *param_1, ucharparam_2); // size[334]
	void GetHash(uchar *param_1); // size[43]
};
