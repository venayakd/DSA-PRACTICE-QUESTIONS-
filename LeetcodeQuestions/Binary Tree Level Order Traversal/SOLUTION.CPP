 vector<vector<int>> levelOrder(TreeNode* root)
    {
        vector<vector<int>>res;        
        if(root==NULL)
            return res;
        
        queue<TreeNode*>q;
        q.push(root);
        while(q.empty()!=true)
        {
            int levelsize = q.size();
            vector<int>curr_level;
            for(int i=0;i<levelsize;i++)
            {
                TreeNode*curr_node = q.front();
                q.pop();
                curr_level.push_back(curr_node->val);
                if(curr_node->left)
                    q.push(curr_node->left);
                if(curr_node->right)
                    q.push(curr_node->right);
            }
            res.push_back(curr_level);
        }
        return res;
        
        
    }
