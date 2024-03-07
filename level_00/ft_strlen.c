#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wint-conversion"
int	ft_strlen(char *str)
<%
	u_int64_t	_;
	u_int32_t	__;

	_ = NULL;
	while(!(*(str + _) == '\0'))<% _++; __++; %>
	return (_ == __) ? _ : __;
%>
#pragma GCC diagnostic pop
