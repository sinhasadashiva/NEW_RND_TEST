#include <stdio.h>
#include <mysql/mysql.h>

int main()
{
    MYSQL *conn;

    conn = mysql_init(NULL);

    if (conn == NULL)
    {
        printf("mysql_init() failed\n");
        return 1;
    }

    if (mysql_real_connect(conn,
                           "localhost",
                           "root",
                           "Sarani99~",
                           "testdb",
                           3306,
                           NULL,
                           0) == NULL)
    {
        printf("Connection Failed\n");
        printf("%s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    printf("Connected to MySQL successfully!\n");

    mysql_close(conn);

    return 0;
}
