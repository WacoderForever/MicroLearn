struct CTextStack * render_home_interface(char *search){
    struct CTextStack *s = newCTextStack(CTEXT_LINE_BREAKER, CTEXT_SEPARATOR);

    s->$open(s,HTML,"lang=\"en\"");
        s->open(s,HEAD);
                s->auto$close(s,LINK,R"(rel="stylesheet" href="/static/style.css")");
                s->segment_text(s,"MicroLearn");
            s->close(s,TITLE);

        s->close(s,HEAD);
        s->open(s,BODY);
         s->auto$close(s,INPUT,R"( name="search" placeholder='Search......' )");
        create_link(s,"Home","/home");
        create_link(s,"Courses","/courses");
        create_link(s,"Instructors","/instructors");
        create_link(s,"Groups","/groups");
        create_link(s,"Resources","/resources");
        create_link(s,"About","/about");
           s->open(s,DIV);
                s->open(s,H1);
                    s->segment_text(s,"MicroLearn");
                s->close(s,H1);
                s->$open(s,FORM,R"(action="/home" method="POST" )");
                s->auto$close(s,BR,"");
                s->close(s,FORM);
        s->close(s,DIV);
        s->close(s,BODY);
    s->close(s,HTML);
    return s;
}