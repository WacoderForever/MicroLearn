
#include "dependencies/CWebStudio.h"
#include "interfaces/general.c"

#include "interfaces/render_home_interface.c"
#include "routes/home_route.c"



struct CwebHttpResponse *main_sever(struct CwebHttpRequest *request ){

    request->read_content(request,2000);
    char *route = request->route;

    //means that the button were clicked

        return home_route(request);

}
            
