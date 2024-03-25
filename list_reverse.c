t_stack	*lst_rev(t_stack *lst)
{
	t_stack *rest;

	if (!lst->next)
		return (lst);
	rest = lst_rev(lst->next);
	lst->next->next = lst;
	lst->next = NULL;
	return rest;
}
