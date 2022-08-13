#include<stdlib.h>
#include<iostream>
#include <cstring>
#include <string>
#include<memory>

#define size_of_attribute(Struct, Attribute) sizeof(((Struct *)0)->Attribute)

struct str1
{
    /* data */
    int a;
    double b;
};

struct str2
{
    /* data */
    int a;
    double b;
    char c;
};


#define COLUMN_USERNAME_SIZE 32
#define COLUMN_EMAIL_SIZE 255

const uint32_t ID_SIZE = size_of_attribute(Row, id);
const uint32_t USERNAME_SIZE = size_of_attribute(Row, username);
const uint32_t EMAIL_SIZE = size_of_attribute(Row, email);
const uint32_t ID_OFFSET = 0;
const uint32_t USERNAME_OFFSET = ID_OFFSET + ID_SIZE;
const uint32_t EMAIL_OFFSET = USERNAME_OFFSET + USERNAME_SIZE;
const uint32_t ROW_SIZE = ID_SIZE + USERNAME_SIZE + EMAIL_SIZE;
class Row
{
public:
    uint32_t id;
    char username[COLUMN_USERNAME_SIZE];
    char email[COLUMN_EMAIL_SIZE];
};

const uint32_t ID_SIZE = size_of_attribute(Row, id);
const uint32_t USERNAME_SIZE = size_of_attribute(Row, username);
const uint32_t EMAIL_SIZE = size_of_attribute(Row, email);

void serialize_row(Row &source, void *destination)
{
    memcpy((char *)destination + ID_OFFSET, &(source.id), ID_SIZE);
    memcpy((char *)destination + USERNAME_OFFSET, &(source.username), USERNAME_SIZE);
    memcpy((char *)destination + EMAIL_OFFSET, &(source.email), EMAIL_SIZE);
}

void deserialize_row(void *source, Row &destination)
{
    memcpy(&(destination.id), (char *)source + ID_OFFSET, ID_SIZE);
    memcpy(&(destination.username), (char *)source + USERNAME_OFFSET, USERNAME_SIZE);
    memcpy(&(destination.email), (char *)source + EMAIL_OFFSET, EMAIL_SIZE);
}

#define TABLE_MAX_PAGES 100
const uint32_t PAGE_SIZE = 4096;
const uint32_t ROWS_PER_PAGE = PAGE_SIZE / ROW_SIZE;
const uint32_t TABLE_MAX_ROWS = ROWS_PER_PAGE * TABLE_MAX_PAGES;


class Table
{
public:
    uint32_t num_rows;
    void *pages[TABLE_MAX_PAGES];
    Table()
    {
        num_rows = 0;
        for (uint32_t i = 0; i < TABLE_MAX_PAGES; i++)
        {
            pages[i] = nullptr;
        }
    }
    ~Table()
    {
        for (int i = 0; pages[i]; i++)
        {
            free(pages[i]);
        }
    }
};

int main(){
    std::cout<<ID_SIZE<<std::endl;
    std::cout<<USERNAME_SIZE<<std::endl;
    std::cout<<EMAIL_SIZE<<std::endl;
}