// Generated header

class CRestore : public IRestore
{
public:
	virtual void GetReadPos(); // vtable[0]
	virtual void SetReadPos(); // vtable[1]
	virtual void ReadAll(); // vtable[2]
	virtual void ReadFields(); // vtable[3]
	virtual void EmptyFields(); // vtable[4]
	virtual void StartBlock(); // vtable[5]
	virtual void StartBlock(); // vtable[6]
	virtual void StartBlock(); // vtable[7]
	virtual void EndBlock(); // vtable[8]
	virtual void ReadHeader(); // vtable[9]
	virtual void SkipHeader(); // vtable[10]
	virtual void StringFromHeaderSymbol(); // vtable[11]
	virtual void ReadShort(); // vtable[12]
	virtual void ReadShort(); // vtable[13]
	virtual void ReadInt(); // vtable[14]
	virtual void _ZN8CRestore7ReadIntEv(); // vtable[15]
	virtual void ReadBool(); // vtable[16]
	virtual void ReadFloat(); // vtable[17]
	virtual void ReadData(); // vtable[18]
	virtual void ReadString(); // vtable[19]
	virtual void ReadString(); // vtable[20]
	virtual void _ZN8CRestore10ReadVectorEP6Vector(); // vtable[21]
	virtual void ReadVector(); // vtable[22]
	virtual void ReadQuaternion(); // vtable[23]
	virtual void ReadQuaternion(); // vtable[24]
	virtual void ReadTime(); // vtable[25]
	virtual void ReadTick(); // vtable[26]
	virtual void ReadPositionVector(); // vtable[27]
	virtual void ReadPositionVector(); // vtable[28]
	virtual void ReadFunction(); // vtable[29]
	virtual void ReadEntityPtr(); // vtable[30]
	virtual void ReadEdictPtr(); // vtable[31]
	virtual void ReadEHandle(); // vtable[32]
	virtual void ReadVMatrix(); // vtable[33]
	virtual void _ZN8CRestore21ReadVMatrixWorldspaceEP7VMatrixii(); // vtable[34]
	virtual void ReadMatrix3x4Worldspace(); // vtable[35]
	virtual void GetPrecacheMode(); // vtable[36]
	virtual void GetGameSaveRestoreInfo(); // vtable[37]
	virtual void ReadStringLength() override; // vtable[38]
	virtual void ~CRestore() override; // vtable[39]
	virtual void ~CRestore() override; // vtable[40]

	void ReadBasicField();
	void ShouldReadField();
	void FindField();
	void ShouldEmptyField();
	void DoReadAll();
	void BufferPointer();
	void BufferReadBytes();
	void BufferSkipBytes();
	void ReadInterval();
	void ReadGMODTable();
	void EntityFromIndex();
	void ReadTime64();
	void ReadGameField();
	void ReadField();
	void CRestore();
};
