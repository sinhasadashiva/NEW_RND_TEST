#include <stdio.h>
#include <mysql/mysql.h>

int main()
{
    MYSQL *conn;

    // Initialize MySQL
    conn = mysql_init(NULL);

    if (conn == NULL)
    {
        printf("mysql_init() failed\n");
        return 1;
    }

    // Connect to MySQL
    if (!mysql_real_connect(conn, "localhost", "root", "Sarani99~",
                            "testdb", 3306, NULL, 0))
    {
        printf("Connection Failed!\n");
        printf("%s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    printf("Connected Successfully!\n");

    // SQL INSERT query
    char query[] = "INSERT INTO employee (id, name, salary) "
                   "VALUES (4, 'David', 65000)";

    // Execute query
    if (mysql_query(conn, query))
    {
        printf("Insert Failed!\n");
        printf("%s\n", mysql_error(conn));
    }
    else
    {
        printf("Record inserted successfully!\n");
        printf("Rows affected: %lld\n", mysql_affected_rows(conn));
    }

    // Close connection
    mysql_close(conn);

    return 0;
}
