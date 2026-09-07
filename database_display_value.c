#include <stdio.h>
#include <mysql/mysql.h>

int main()
{
    MYSQL *conn;
    MYSQL_RES *res;
    MYSQL_ROW row;

    // Initialize MySQL
    conn = mysql_init(NULL);

    // Connect to MySQL
    if (!mysql_real_connect(conn, "localhost", "root", "Sarani99~",
                            "testdb", 3306, NULL, 0))
    {
        printf("Connection Failed!\n");
        printf("%s\n", mysql_error(conn));
        return 1;
    }

    printf("Connected Successfully!\n\n");

    // Execute SQL query
    if (mysql_query(conn, "SELECT * FROM employee"))
    {
        printf("Query Failed!\n");
        printf("%s\n", mysql_error(conn));
        mysql_close(conn);
        return 1;
    }

    // Store the result
    res = mysql_store_result(conn);

    // Print table header
    printf("---------------------------------------\n");
    printf("%-5s %-15s %-10s\n", "ID", "NAME", "SALARY");
    printf("---------------------------------------\n");

    // Fetch and display rows
    while ((row = mysql_fetch_row(res)))
    {
        printf("%-5s %-15s %-10s\n", row[0], row[1], row[2]);
    }

    printf("---------------------------------------\n");

    // Free memory
    mysql_free_result(res);

    // Close connection
    mysql_close(conn);

    return 0;
}
