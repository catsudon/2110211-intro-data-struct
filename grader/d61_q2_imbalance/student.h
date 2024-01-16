int mx = -1;
int memo = 9696969;

int abs(int a, int b)
{
    int n = a - b;
    if (n >= 0)
        return n;
    return -n;
}

int dfs(node *n)
{
    if (n == NULL)
        return 0;
    int l = 1 + dfs(n->left);
    int r = 1 + dfs(n->right);

    // แอบหาตัวมากสุดระหว่างprocess
    if (abs(l, r) > mx)
        mx = abs(l, r), memo = n->data.first;
    else if (abs(l, r) == mx and n->data.first < memo)
        memo = n->data.first;

    // return the deepest node
    if (l > r)
        return l;
    return r;
}

KeyT getValueOfMostImbalanceNode()
{
    dfs(mRoot);
    return memo;
}
