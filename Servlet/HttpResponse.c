typedef struct {
    int socket ;
    int status;
    char *status_message;
    char *content_type;
    char *body;
} HttpResponse;