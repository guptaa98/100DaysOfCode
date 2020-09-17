class Solution {
public:
    bool isRobotBounded(string instructions) 
    {
        vector pos={0,0};
        vector direc={0,1};
        for (int i=0;i<instructions.size();i++)
        {
            if(instructions[i]=='L')
            {
                direc={-direc[1],direc[0]};
            }
            else if(instructions[i]=='R')
            {
                direc={direc[1],-direc[0]};
            }
            else
            {
                pos={pos[0]+direc[0],pos[1]+direc[1]};
            }
        }
        if ((pos[0] == 0 && pos[1] == 0) || (direc[0] != 0 || direc[1] != 1))
        {
            return true;
        }
        else
        {
            return false;
        }
        return 0;
    }
};
