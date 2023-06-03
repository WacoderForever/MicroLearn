//
// Created by jurandi on 12-05-2023.
//

struct CwebHttpResponse *home_route(struct CwebHttpRequest *request ){

    struct CTextStack *stack = render_home_interface(NULL);

    return cweb_send_rendered_CTextStack_cleaning_memory(
            stack,
            200
    );
}