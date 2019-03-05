class CyberNode
{
	int id;
	String in_neighbors;
	boolean down;
	boolean offline;

	CyberNode()
	{
		id = 0;
		down = true;
		offline = true;
		in_neighbors = "";
	}
}