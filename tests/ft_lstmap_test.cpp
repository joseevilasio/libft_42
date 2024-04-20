#include <gtest/gtest.h>

extern "C" {
	#include "../src/libft.h"
}

static void	*ft_encrypt(void *ptr)
{
	int i = 0;
	char *content = (char *) ptr;

	while (content[i])
	{
		content[i++] = 'z';
	}
    return (ptr);
}

TEST(lstmap, str_1) {
    t_list *duck = NULL;
    t_list *cat = NULL;
    t_list *dog = NULL;
    t_list *garden = NULL;
    t_list *room = NULL;

    char *str_duck = strdup("quack!");
    char *str_cat = strdup("miau!");
    char *str_dog = strdup("auau!");
    
    duck = ft_lstnew(str_duck);
    cat = ft_lstnew(str_cat);
    dog = ft_lstnew(str_dog);

    ft_lstadd_front(&garden, dog);
    ft_lstadd_front(&garden, cat);
    ft_lstadd_front(&garden, duck);

    room = ft_lstmap(garden, &ft_encrypt, &free);

	ASSERT_STREQ((char *)room->content, "zzzzzz");
    room = room->next;
    ASSERT_STREQ((char *)room->content, "zzzzz");
    room = room->next;
    ASSERT_STREQ((char *)room->content, "zzzzz");

    free(str_cat);
    free(str_dog);
    free(str_duck);
}
