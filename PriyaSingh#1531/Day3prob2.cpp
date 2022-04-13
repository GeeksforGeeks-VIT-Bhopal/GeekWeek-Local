void decode_huff(node * root,string s)
{
    node*temp=root;
       int i=0;
        for(i=0;i<=s.size();i++)
            {
               if(temp->right==NULL && temp->left==NULL) 
                {
                cout<<temp->data;
                  temp=root;
            }
            if(s[i]=='0')
                temp=temp->left;
            else if(s[i]=='1')
                temp=temp->right;
            }
    
}

int main() {
  
    string s;
    std::cin >> s;
  
    node * tree = huffman_hidden(s);
    string code = "";
    map<char, string>mp;
  
    print_codes_hidden(tree, code, mp);
    
    string coded;
  
    for( int i = 0; i < s.length(); i++ ) {
        coded += mp[s[i]];
    }
    
    decode_huff(tree,coded);
  
    return 0;
}